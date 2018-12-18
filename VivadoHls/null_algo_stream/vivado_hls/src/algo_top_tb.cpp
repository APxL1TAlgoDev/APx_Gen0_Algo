#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#include "algo_top.h"

using namespace std;

#define N_CH 48

int main(int argc, char ** argv) {

	string test_vector;
	test_vector = argv[1];

	string skip_out_ref_cmp;
	if (argc > 2)
		skip_out_ref_cmp =  argv[2];

	string ifname(test_vector+"_inp.txt"); // input test vector
	string ofname(test_vector+"_out.txt"); // output test vector
	string orfname(test_vector+"_out_ref.txt"); // reference output vector

	// Open input stream...
	ifstream ifs(ifname.c_str());
	if(!ifs.is_open()) {
		cerr << "Error opening input file: " << ifname << endl;
		exit(1);
	}

	//...and position at the beginning of input test data
	string line;
	while(true) {
		ifs >> line;
		if(line.compare("#BeginData") == 0) break;
	}

	// Open output stream and write a header
	ofstream ofs(ofname.c_str());
	if(!ofs.is_open()) {
		cerr << "Error opening output file: " << ofname << endl;
		exit(1);
	}

	// output reference comparison
	if (skip_out_ref_cmp != "skipOutRefCmp")
	{
		// Open output reference stream...
		ifstream orfs(orfname.c_str());
		if(!orfs.is_open()) {
			cerr << "Error opening output reference file: " << orfname << endl;
			exit(1);
		}
	}

	ofs << "======================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================" << endl;
	ofs << "WordCnt             LINK_00               LINK_01               LINK_02               LINK_03               LINK_04               LINK_05               LINK_06               LINK_07               LINK_08               LINK_09               LINK_10               LINK_11               LINK_12               LINK_13               LINK_14               LINK_15               LINK_16               LINK_17               LINK_18               LINK_19               LINK_20               LINK_21               LINK_22               LINK_23               LINK_24               LINK_25               LINK_26               LINK_27               LINK_28               LINK_29               LINK_30               LINK_31               LINK_32               LINK_33               LINK_34               LINK_35               LINK_36               LINK_37               LINK_38               LINK_39               LINK_40               LINK_41               LINK_42               LINK_43               LINK_44               LINK_45               LINK_46               LINK_47" << endl;
	ofs << "#BeginData" << endl;

	strmWord r;

	hls::stream<strmWord> link_in_00("link_in_00");
	hls::stream<strmWord> link_in_01("link_in_01");
	hls::stream<strmWord> link_in_02("link_in_02");
	hls::stream<strmWord> link_in_03("link_in_03");
	hls::stream<strmWord> link_in_04("link_in_04");
	hls::stream<strmWord> link_in_05("link_in_05");
	hls::stream<strmWord> link_in_06("link_in_06");
	hls::stream<strmWord> link_in_07("link_in_07");
	hls::stream<strmWord> link_in_08("link_in_08");
	hls::stream<strmWord> link_in_09("link_in_09");

	hls::stream<strmWord> link_in_10("link_in_10");
	hls::stream<strmWord> link_in_11("link_in_11");
	hls::stream<strmWord> link_in_12("link_in_12");
	hls::stream<strmWord> link_in_13("link_in_13");
	hls::stream<strmWord> link_in_14("link_in_14");
	hls::stream<strmWord> link_in_15("link_in_15");
	hls::stream<strmWord> link_in_16("link_in_16");
	hls::stream<strmWord> link_in_17("link_in_17");
	hls::stream<strmWord> link_in_18("link_in_18");
	hls::stream<strmWord> link_in_19("link_in_19");

	hls::stream<strmWord> link_in_20("link_in_20");
	hls::stream<strmWord> link_in_21("link_in_21");
	hls::stream<strmWord> link_in_22("link_in_22");
	hls::stream<strmWord> link_in_23("link_in_23");
	hls::stream<strmWord> link_in_24("link_in_24");
	hls::stream<strmWord> link_in_25("link_in_25");
	hls::stream<strmWord> link_in_26("link_in_26");
	hls::stream<strmWord> link_in_27("link_in_27");
	hls::stream<strmWord> link_in_28("link_in_28");
	hls::stream<strmWord> link_in_29("link_in_29");

	hls::stream<strmWord> link_in_30("link_in_30");
	hls::stream<strmWord> link_in_31("link_in_31");
	hls::stream<strmWord> link_in_32("link_in_32");
	hls::stream<strmWord> link_in_33("link_in_33");
	hls::stream<strmWord> link_in_34("link_in_34");
	hls::stream<strmWord> link_in_35("link_in_35");
	hls::stream<strmWord> link_in_36("link_in_36");
	hls::stream<strmWord> link_in_37("link_in_37");
	hls::stream<strmWord> link_in_38("link_in_38");
	hls::stream<strmWord> link_in_39("link_in_39");

	hls::stream<strmWord> link_in_40("link_in_40");
	hls::stream<strmWord> link_in_41("link_in_41");
	hls::stream<strmWord> link_in_42("link_in_42");
	hls::stream<strmWord> link_in_43("link_in_43");
	hls::stream<strmWord> link_in_44("link_in_44");
	hls::stream<strmWord> link_in_45("link_in_45");
	hls::stream<strmWord> link_in_46("link_in_46");
	hls::stream<strmWord> link_in_47("link_in_47");

	hls::stream<strmWord> link_out_00("link_out_00");
	hls::stream<strmWord> link_out_01("link_out_01");
	hls::stream<strmWord> link_out_02("link_out_02");
	hls::stream<strmWord> link_out_03("link_out_03");
	hls::stream<strmWord> link_out_04("link_out_04");
	hls::stream<strmWord> link_out_05("link_out_05");
	hls::stream<strmWord> link_out_06("link_out_06");
	hls::stream<strmWord> link_out_07("link_out_07");
	hls::stream<strmWord> link_out_08("link_out_08");
	hls::stream<strmWord> link_out_09("link_out_09");

	hls::stream<strmWord> link_out_10("link_out_10");
	hls::stream<strmWord> link_out_11("link_out_11");
	hls::stream<strmWord> link_out_12("link_out_12");
	hls::stream<strmWord> link_out_13("link_out_13");
	hls::stream<strmWord> link_out_14("link_out_14");
	hls::stream<strmWord> link_out_15("link_out_15");
	hls::stream<strmWord> link_out_16("link_out_16");
	hls::stream<strmWord> link_out_17("link_out_17");
	hls::stream<strmWord> link_out_18("link_out_18");
	hls::stream<strmWord> link_out_19("link_out_19");

	hls::stream<strmWord> link_out_20("link_out_20");
	hls::stream<strmWord> link_out_21("link_out_21");
	hls::stream<strmWord> link_out_22("link_out_22");
	hls::stream<strmWord> link_out_23("link_out_23");
	hls::stream<strmWord> link_out_24("link_out_24");
	hls::stream<strmWord> link_out_25("link_out_25");
	hls::stream<strmWord> link_out_26("link_out_26");
	hls::stream<strmWord> link_out_27("link_out_27");
	hls::stream<strmWord> link_out_28("link_out_28");
	hls::stream<strmWord> link_out_29("link_out_29");

	hls::stream<strmWord> link_out_30("link_out_30");
	hls::stream<strmWord> link_out_31("link_out_31");
	hls::stream<strmWord> link_out_32("link_out_32");
	hls::stream<strmWord> link_out_33("link_out_33");
	hls::stream<strmWord> link_out_34("link_out_34");
	hls::stream<strmWord> link_out_35("link_out_35");
	hls::stream<strmWord> link_out_36("link_out_36");
	hls::stream<strmWord> link_out_37("link_out_37");
	hls::stream<strmWord> link_out_38("link_out_38");
	hls::stream<strmWord> link_out_39("link_out_39");

	hls::stream<strmWord> link_out_40("link_out_40");
	hls::stream<strmWord> link_out_41("link_out_41");
	hls::stream<strmWord> link_out_42("link_out_42");
	hls::stream<strmWord> link_out_43("link_out_43");
	hls::stream<strmWord> link_out_44("link_out_44");
	hls::stream<strmWord> link_out_45("link_out_45");
	hls::stream<strmWord> link_out_46("link_out_46");
	hls::stream<strmWord> link_out_47("link_out_47");

	uint32_t wordCnt = 0;

	uint64_t data[N_CH];

	while(!ifs.eof())
	{
		ifs >> hex >> wordCnt;

		for (int link = 0; link < N_CH; link++)
		{
			ifs >> hex >> data[link];
		}

		if (ifs.eof())
			break;

		r.data = data[0]; link_in_00.write(r);
		r.data = data[1]; link_in_01.write(r);
		r.data = data[2]; link_in_02.write(r);
		r.data = data[3]; link_in_03.write(r);
		r.data = data[4]; link_in_04.write(r);
		r.data = data[5]; link_in_05.write(r);
		r.data = data[6]; link_in_06.write(r);
		r.data = data[7]; link_in_07.write(r);
		r.data = data[8]; link_in_08.write(r);
		r.data = data[9]; link_in_09.write(r);

		r.data = data[10]; link_in_10.write(r);
		r.data = data[11]; link_in_11.write(r);
		r.data = data[12]; link_in_12.write(r);
		r.data = data[13]; link_in_13.write(r);
		r.data = data[14]; link_in_14.write(r);
		r.data = data[15]; link_in_15.write(r);
		r.data = data[16]; link_in_16.write(r);
		r.data = data[17]; link_in_17.write(r);
		r.data = data[18]; link_in_18.write(r);
		r.data = data[19]; link_in_19.write(r);

		r.data = data[20]; link_in_20.write(r);
		r.data = data[21]; link_in_21.write(r);
		r.data = data[22]; link_in_22.write(r);
		r.data = data[23]; link_in_23.write(r);
		r.data = data[24]; link_in_24.write(r);
		r.data = data[25]; link_in_25.write(r);
		r.data = data[26]; link_in_26.write(r);
		r.data = data[27]; link_in_27.write(r);
		r.data = data[28]; link_in_28.write(r);
		r.data = data[29]; link_in_29.write(r);

		r.data = data[30]; link_in_30.write(r);
		r.data = data[31]; link_in_31.write(r);
		r.data = data[32]; link_in_32.write(r);
		r.data = data[33]; link_in_33.write(r);
		r.data = data[34]; link_in_34.write(r);
		r.data = data[35]; link_in_35.write(r);
		r.data = data[36]; link_in_36.write(r);
		r.data = data[37]; link_in_37.write(r);
		r.data = data[38]; link_in_38.write(r);
		r.data = data[39]; link_in_39.write(r);

		r.data = data[40]; link_in_40.write(r);
		r.data = data[41]; link_in_41.write(r);
		r.data = data[42]; link_in_42.write(r);
		r.data = data[43]; link_in_43.write(r);
		r.data = data[44]; link_in_44.write(r);
		r.data = data[45]; link_in_45.write(r);
		r.data = data[46]; link_in_46.write(r);
		r.data = data[47]; link_in_47.write(r);

		algo_top(
				link_in_00, link_in_01, link_in_02, link_in_03,
				link_in_04, link_in_05, link_in_06, link_in_07,
				link_in_08, link_in_09, link_in_10, link_in_11,
				link_in_12, link_in_13, link_in_14, link_in_15,
				link_in_16, link_in_17, link_in_18, link_in_19,
				link_in_20, link_in_21, link_in_22, link_in_23,
				link_in_24, link_in_25, link_in_26, link_in_27,
				link_in_28, link_in_29, link_in_30, link_in_31,
				link_in_32, link_in_33, link_in_34, link_in_35,
				link_in_36, link_in_37, link_in_38, link_in_39,
				link_in_40, link_in_41, link_in_42, link_in_43,
				link_in_44, link_in_45, link_in_46, link_in_47,

				link_out_00, link_out_01, link_out_02, link_out_03,
				link_out_04, link_out_05, link_out_06, link_out_07,
				link_out_08, link_out_09, link_out_10, link_out_11,
				link_out_12, link_out_13, link_out_14, link_out_15,
				link_out_16, link_out_17, link_out_18, link_out_19,
				link_out_20, link_out_21, link_out_22, link_out_23,
				link_out_24, link_out_25, link_out_26, link_out_27,
				link_out_28, link_out_29, link_out_30, link_out_31,
				link_out_32, link_out_33, link_out_34, link_out_35,
				link_out_36, link_out_37, link_out_38, link_out_39,
				link_out_40, link_out_41, link_out_42, link_out_43,
				link_out_44, link_out_45, link_out_46, link_out_47
		);



		ofs << "0x" << setfill('0') << setw(4) << hex << wordCnt << "   ";

		r = link_out_00.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_01.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_02.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_03.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_04.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_05.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_06.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_07.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_08.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_09.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";

		r = link_out_10.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_11.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_12.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_13.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_14.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_15.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_16.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_17.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_18.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_19.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";

		r = link_out_20.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_21.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_22.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_23.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_24.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_25.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_26.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_27.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_28.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_29.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";

		r = link_out_30.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_31.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_32.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_33.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_34.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_35.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_36.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_37.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_38.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_39.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";

		r = link_out_40.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_41.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_42.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_43.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_44.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_45.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_46.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";
		r = link_out_47.read();  ofs << "0x" << setfill('0') << setw(16) << hex << r.data.to_int64() << "    ";

		ofs << std::endl;
	}

	string output_diff("diff -w "+ ofname + " " + orfname);

	// output reference comparison
	if (skip_out_ref_cmp == "skipOutRefCmp")
	{
		cout  << "*** Output data verification. SKIPPED ***" << endl;
		return 0;
	}
	else if (system(output_diff.c_str()))
	{
		cout  << "*** Output data verification. FAILED! ***" << endl;
		return 1;
	} else {
		cout  << "*** Output data verification. PASSED ***" << endl;
		return 0;
	}
}

