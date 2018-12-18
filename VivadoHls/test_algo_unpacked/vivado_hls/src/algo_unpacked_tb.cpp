#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#include "algo_unpacked.h"

using namespace std;

ap_uint<64> link_in_2d[N_CH_IN][3];
ap_uint<64> link_out_2d[N_CH_OUT][3];

int main(int argc, char ** argv) {

	string test_vector;
	test_vector = argv[1];

	string skip_out_ref_cmp;
	if (argc > 2)
		skip_out_ref_cmp = argv[2];

	string ifname(test_vector + "_inp.txt"); // input test vector
	string ofname(test_vector + "_out.txt"); // output test vector
	string orfname(test_vector + "_out_ref.txt"); // reference output vector

	// Open input stream...
	ifstream ifs(ifname.c_str());
	if (!ifs.is_open()) {
		cerr << "Error opening input file: " << ifname << endl;
		exit(1);
	}

	//...and position at the beginning of input test data
	string line;
	while (true) {
		ifs >> line;
		if (line.compare("#BeginData") == 0)
			break;
	}

	// Open output stream and write a header
	ofstream ofs(ofname.c_str());
	if (!ofs.is_open()) {
		cerr << "Error opening output file: " << ofname << endl;
		exit(1);
	}

	// output reference comparison
	if (skip_out_ref_cmp != "skipOutRefCmp") {
		// Open output reference stream...
		ifstream orfs(orfname.c_str());
		if (!orfs.is_open()) {
			cerr << "Error opening output reference file: " << orfname << endl;
			exit(1);
		}
	}

	uint32_t wordCnt = 0;

	uint64_t data[N_CH_IN];
	int algo_cycle = 0;

	ofs << "======================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================" << endl;
	ofs << "WordCnt             LINK_00               LINK_01               LINK_02               LINK_03               LINK_04               LINK_05               LINK_06               LINK_07               LINK_08               LINK_09               LINK_10               LINK_11               LINK_12               LINK_13               LINK_14               LINK_15               LINK_16               LINK_17               LINK_18               LINK_19               LINK_20               LINK_21               LINK_22               LINK_23               LINK_24               LINK_25               LINK_26               LINK_27               LINK_28               LINK_29               LINK_30               LINK_31               LINK_32               LINK_33               LINK_34               LINK_35               LINK_36               LINK_37               LINK_38               LINK_39               LINK_40               LINK_41               LINK_42               LINK_43               LINK_44               LINK_45               LINK_46               LINK_47" << endl;
	ofs << "#BeginData" << endl;

	while (!ifs.eof()) {
		for (int cyc = 0; cyc < 3; cyc++) {
			ifs >> hex >> wordCnt;
			if  (ifs.eof())
				break;

			for (int link = 0; link < N_CH_IN; link++)
			{
				ifs >> hex >> link_in_2d[link][cyc];
				if  (ifs.eof())
					break;
			}
		}

		if  (ifs.eof())
			break;

		algo_unpacked(link_in_2d, link_out_2d);

		wordCnt-=2;

		for (int cyc = 0; cyc < 3; cyc++) {
			ofs << "0x" << setfill('0') << setw(4) << hex << wordCnt++ << "   ";
			for (int link = 0; link < N_CH_OUT; link++) {
				ofs << "0x" << setfill('0') << setw(16) << hex << link_out_2d[link][cyc].to_int64() << "    ";
			}
			ofs<< std::endl;
		}
	}

	string output_diff("diff -w " + ofname + " " + orfname);

	// output reference comparison
	if (skip_out_ref_cmp == "skipOutRefCmp") {
		cout << "*** Output data verification. SKIPPED ***" << endl;
		return 0;
	} else if (system(output_diff.c_str())) {
		cout << "*** Output data verification. FAILED! ***" << endl;
		return 0;
	} else {
		cout << "*** Output data verification. PASSED ***" << endl;
		return 0;
	}
}

