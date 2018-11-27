
#include "algo_top.h"
#include "algo_unpacked.h"

using namespace hls;

void link_in_deser(hls::stream<strmWord> & link_strm, ap_uint<64> link_deser[3], ap_uint<2> cycle) {

#pragma HLS INLINE
#pragma HLS ARRAY_PARTITION variable=link_deser complete dim=0
#pragma HLS PIPELINE II=1
#pragma HLS INTERFACE axis port=link_strm
#pragma HLS INTERFACE ap_none port=link_deser
#pragma HLS INTERFACE ap_ctrl_none port=return

	strmWord r;

	switch (cycle) {
		case 0:  r = link_strm.read(); link_deser[0] = r.data; break;
		case 1:  r = link_strm.read(); link_deser[1] = r.data; break;
		default: r = link_strm.read(); link_deser[2] = r.data; break;
	}
	return;
}

void link_out_ser(hls::stream<strmWord> & link_strm, ap_uint<64> link_deser[3],  ap_uint<2> cycle) {

#pragma HLS INLINE
#pragma HLS PIPELINE II=1
#pragma HLS INTERFACE ap_ctrl_none port=return

	strmWord r;

	switch (cycle) {
		case 0:  r.data = link_deser[0]; r.last=0; link_strm.write(r); break;
		case 1:  r.data = link_deser[1]; r.last=0; link_strm.write(r); break;
		default: r.data = link_deser[2]; r.last=1; link_strm.write(r); break;
	}
	return;
}

void algo_top(
		hls::stream<strmWord> & link_in_00, hls::stream<strmWord> & link_in_01, hls::stream<strmWord> & link_in_02, hls::stream<strmWord> & link_in_03,
		hls::stream<strmWord> & link_in_04, hls::stream<strmWord> & link_in_05, hls::stream<strmWord> & link_in_06, hls::stream<strmWord> & link_in_07,
		hls::stream<strmWord> & link_in_08, hls::stream<strmWord> & link_in_09, hls::stream<strmWord> & link_in_10, hls::stream<strmWord> & link_in_11,
		hls::stream<strmWord> & link_in_12, hls::stream<strmWord> & link_in_13, hls::stream<strmWord> & link_in_14, hls::stream<strmWord> & link_in_15,
		hls::stream<strmWord> & link_in_16, hls::stream<strmWord> & link_in_17, hls::stream<strmWord> & link_in_18, hls::stream<strmWord> & link_in_19,
		hls::stream<strmWord> & link_in_20, hls::stream<strmWord> & link_in_21, hls::stream<strmWord> & link_in_22, hls::stream<strmWord> & link_in_23,
		hls::stream<strmWord> & link_in_24, hls::stream<strmWord> & link_in_25, hls::stream<strmWord> & link_in_26, hls::stream<strmWord> & link_in_27,
		hls::stream<strmWord> & link_in_28, hls::stream<strmWord> & link_in_29, hls::stream<strmWord> & link_in_30, hls::stream<strmWord> & link_in_31,
		hls::stream<strmWord> & link_in_32, hls::stream<strmWord> & link_in_33, hls::stream<strmWord> & link_in_34, hls::stream<strmWord> & link_in_35,
		hls::stream<strmWord> & link_in_36, hls::stream<strmWord> & link_in_37, hls::stream<strmWord> & link_in_38, hls::stream<strmWord> & link_in_39,
		hls::stream<strmWord> & link_in_40, hls::stream<strmWord> & link_in_41, hls::stream<strmWord> & link_in_42, hls::stream<strmWord> & link_in_43,
		hls::stream<strmWord> & link_in_44, hls::stream<strmWord> & link_in_45, hls::stream<strmWord> & link_in_46, hls::stream<strmWord> & link_in_47,

		hls::stream<strmWord> & link_out_00, hls::stream<strmWord> & link_out_01, hls::stream<strmWord> & link_out_02, hls::stream<strmWord> & link_out_03,
		hls::stream<strmWord> & link_out_04, hls::stream<strmWord> & link_out_05, hls::stream<strmWord> & link_out_06, hls::stream<strmWord> & link_out_07,
		hls::stream<strmWord> & link_out_08, hls::stream<strmWord> & link_out_09, hls::stream<strmWord> & link_out_10, hls::stream<strmWord> & link_out_11,
		hls::stream<strmWord> & link_out_12, hls::stream<strmWord> & link_out_13, hls::stream<strmWord> & link_out_14, hls::stream<strmWord> & link_out_15,
		hls::stream<strmWord> & link_out_16, hls::stream<strmWord> & link_out_17, hls::stream<strmWord> & link_out_18, hls::stream<strmWord> & link_out_19,
		hls::stream<strmWord> & link_out_20, hls::stream<strmWord> & link_out_21, hls::stream<strmWord> & link_out_22, hls::stream<strmWord> & link_out_23,
		hls::stream<strmWord> & link_out_24, hls::stream<strmWord> & link_out_25, hls::stream<strmWord> & link_out_26, hls::stream<strmWord> & link_out_27,
		hls::stream<strmWord> & link_out_28, hls::stream<strmWord> & link_out_29, hls::stream<strmWord> & link_out_30, hls::stream<strmWord> & link_out_31,
		hls::stream<strmWord> & link_out_32, hls::stream<strmWord> & link_out_33, hls::stream<strmWord> & link_out_34, hls::stream<strmWord> & link_out_35,
		hls::stream<strmWord> & link_out_36, hls::stream<strmWord> & link_out_37, hls::stream<strmWord> & link_out_38, hls::stream<strmWord> & link_out_39,
		hls::stream<strmWord> & link_out_40, hls::stream<strmWord> & link_out_41, hls::stream<strmWord> & link_out_42, hls::stream<strmWord> & link_out_43,
		hls::stream<strmWord> & link_out_44, hls::stream<strmWord> & link_out_45, hls::stream<strmWord> & link_out_46, hls::stream<strmWord> & link_out_47
)
{

	static ap_uint<2> cycle_algo = 0;
	static ap_uint<2> cycle_in[N_CH_IN] = {0};
	static ap_uint<2> cycle_out[N_CH_OUT] = {0};

	static bool out_ready_S1 = false;
	static bool out_ready_S2 = false;

#pragma HLS PIPELINE II=1

#pragma HLS RESET variable=out_ready_S2
#pragma HLS RESET variable=out_ready_S1

#pragma HLS RESET variable=cycle_algo
#pragma HLS RESET variable=cycle_in
#pragma HLS RESET variable=cycle_out

#pragma HLS ARRAY_PARTITION variable=cycle_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=cycle_out complete dim=0

	static	ap_uint<64> link_in[N_CH_IN][3];
	static	ap_uint<64> link_out[N_CH_OUT][3];
	static	ap_uint<64> link_out_buf[N_CH_OUT][3];


#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0

//#pragma HLS ARRAY_PARTITION variable=link_in_buf complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out_buf complete dim=0

	link_in_deser(link_in_00, link_in[0], cycle_in[0]);
	link_in_deser(link_in_01, link_in[1], cycle_in[1]);
	link_in_deser(link_in_02, link_in[2], cycle_in[2]);
	link_in_deser(link_in_03, link_in[3], cycle_in[3]);
	link_in_deser(link_in_04, link_in[4], cycle_in[4]);
	link_in_deser(link_in_05, link_in[5], cycle_in[5]);
	link_in_deser(link_in_06, link_in[6], cycle_in[6]);
	link_in_deser(link_in_07, link_in[7], cycle_in[7]);
	link_in_deser(link_in_08, link_in[8], cycle_in[8]);
	link_in_deser(link_in_09, link_in[9], cycle_in[9]);

	link_in_deser(link_in_10, link_in[10], cycle_in[10]);
	link_in_deser(link_in_11, link_in[11], cycle_in[11]);
	link_in_deser(link_in_12, link_in[12], cycle_in[12]);
	link_in_deser(link_in_13, link_in[13], cycle_in[13]);
	link_in_deser(link_in_14, link_in[14], cycle_in[14]);
	link_in_deser(link_in_15, link_in[15], cycle_in[15]);
	link_in_deser(link_in_16, link_in[16], cycle_in[16]);
	link_in_deser(link_in_17, link_in[17], cycle_in[17]);
	link_in_deser(link_in_18, link_in[18], cycle_in[18]);
	link_in_deser(link_in_19, link_in[19], cycle_in[19]);

	link_in_deser(link_in_20, link_in[20], cycle_in[20]);
	link_in_deser(link_in_21, link_in[21], cycle_in[21]);
	link_in_deser(link_in_22, link_in[22], cycle_in[22]);
	link_in_deser(link_in_23, link_in[23], cycle_in[23]);
	link_in_deser(link_in_24, link_in[24], cycle_in[24]);
	link_in_deser(link_in_25, link_in[25], cycle_in[25]);
	link_in_deser(link_in_26, link_in[26], cycle_in[26]);
	link_in_deser(link_in_27, link_in[27], cycle_in[27]);
	link_in_deser(link_in_28, link_in[28], cycle_in[28]);
	link_in_deser(link_in_29, link_in[29], cycle_in[29]);

	link_in_deser(link_in_30, link_in[30], cycle_in[30]);
	link_in_deser(link_in_31, link_in[31], cycle_in[31]);
	link_in_deser(link_in_32, link_in[32], cycle_in[32]);
	link_in_deser(link_in_33, link_in[33], cycle_in[33]);
	link_in_deser(link_in_34, link_in[34], cycle_in[34]);
	link_in_deser(link_in_35, link_in[35], cycle_in[35]);
	link_in_deser(link_in_36, link_in[36], cycle_in[36]);
	link_in_deser(link_in_37, link_in[37], cycle_in[37]);
	link_in_deser(link_in_38, link_in[38], cycle_in[38]);
	link_in_deser(link_in_39, link_in[39], cycle_in[39]);

	link_in_deser(link_in_40, link_in[40], cycle_in[40]);
	link_in_deser(link_in_41, link_in[41], cycle_in[41]);
	link_in_deser(link_in_42, link_in[42], cycle_in[42]);
	link_in_deser(link_in_43, link_in[43], cycle_in[43]);
	link_in_deser(link_in_44, link_in[44], cycle_in[44]);
	link_in_deser(link_in_45, link_in[45], cycle_in[45]);
	link_in_deser(link_in_46, link_in[46], cycle_in[46]);
	link_in_deser(link_in_47, link_in[47], cycle_in[47]);


	if (cycle_algo == 2) {
		out_ready_S1 = true;

		algo_unpacked(link_in, link_out_buf);
	}

	if (cycle_algo == 0) {

		if (out_ready_S1 == true)
				out_ready_S2 = true;

		for (int idx =0; idx < 48; idx++)
		{
#pragma HLS UNROLL
			for (int idx2 = 0; idx2 < 3; idx2++)
			{
#pragma HLS UNROLL
				link_out[idx][idx2] = link_out_buf[idx][idx2];
			}
		}

	}

	if (out_ready_S2 == true)
	{
		link_out_ser(link_out_00, link_out[0], cycle_out[0]);
		link_out_ser(link_out_01, link_out[1], cycle_out[1]);
		link_out_ser(link_out_02, link_out[2], cycle_out[2]);
		link_out_ser(link_out_03, link_out[3], cycle_out[3]);
		link_out_ser(link_out_04, link_out[4], cycle_out[4]);
		link_out_ser(link_out_05, link_out[5], cycle_out[5]);
		link_out_ser(link_out_06, link_out[6], cycle_out[6]);
		link_out_ser(link_out_07, link_out[7], cycle_out[7]);
		link_out_ser(link_out_08, link_out[8], cycle_out[8]);
		link_out_ser(link_out_09, link_out[9], cycle_out[9]);

		link_out_ser(link_out_10, link_out[10], cycle_out[10]);
		link_out_ser(link_out_11, link_out[11], cycle_out[11]);
		link_out_ser(link_out_12, link_out[12], cycle_out[12]);
		link_out_ser(link_out_13, link_out[13], cycle_out[13]);
		link_out_ser(link_out_14, link_out[14], cycle_out[14]);
		link_out_ser(link_out_15, link_out[15], cycle_out[15]);
		link_out_ser(link_out_16, link_out[16], cycle_out[16]);
		link_out_ser(link_out_17, link_out[17], cycle_out[17]);
		link_out_ser(link_out_18, link_out[18], cycle_out[18]);
		link_out_ser(link_out_19, link_out[19], cycle_out[19]);

		link_out_ser(link_out_20, link_out[20], cycle_out[20]);
		link_out_ser(link_out_21, link_out[21], cycle_out[21]);
		link_out_ser(link_out_22, link_out[22], cycle_out[22]);
		link_out_ser(link_out_23, link_out[23], cycle_out[23]);
		link_out_ser(link_out_24, link_out[24], cycle_out[24]);
		link_out_ser(link_out_25, link_out[25], cycle_out[25]);
		link_out_ser(link_out_26, link_out[26], cycle_out[26]);
		link_out_ser(link_out_27, link_out[27], cycle_out[27]);
		link_out_ser(link_out_28, link_out[28], cycle_out[28]);
		link_out_ser(link_out_29, link_out[29], cycle_out[29]);

		link_out_ser(link_out_30, link_out[30], cycle_out[30]);
		link_out_ser(link_out_31, link_out[31], cycle_out[31]);
		link_out_ser(link_out_32, link_out[32], cycle_out[32]);
		link_out_ser(link_out_33, link_out[33], cycle_out[33]);
		link_out_ser(link_out_34, link_out[34], cycle_out[34]);
		link_out_ser(link_out_35, link_out[35], cycle_out[35]);
		link_out_ser(link_out_36, link_out[36], cycle_out[36]);
		link_out_ser(link_out_37, link_out[37], cycle_out[37]);
		link_out_ser(link_out_38, link_out[38], cycle_out[38]);
		link_out_ser(link_out_39, link_out[39], cycle_out[39]);

		link_out_ser(link_out_40, link_out[40], cycle_out[40]);
		link_out_ser(link_out_41, link_out[41], cycle_out[41]);
		link_out_ser(link_out_42, link_out[42], cycle_out[42]);
		link_out_ser(link_out_43, link_out[43], cycle_out[43]);
		link_out_ser(link_out_44, link_out[44], cycle_out[44]);
		link_out_ser(link_out_45, link_out[45], cycle_out[45]);
		link_out_ser(link_out_46, link_out[46], cycle_out[46]);
		link_out_ser(link_out_47, link_out[47], cycle_out[47]);
	}

	if (cycle_algo >= 2)
		cycle_algo = 0;
	else
		cycle_algo++;

	for (int idx = 0; idx < N_CH_IN; idx++) {
#pragma HLS UNROLL
		if (cycle_in[idx] >= 2)
			cycle_in[idx] = 0;
		else
			cycle_in[idx]++;
	}

	for (int idx = 0; idx < N_CH_OUT; idx++) {
#pragma HLS UNROLL
		if (cycle_out[idx] >= 2)
			cycle_out[idx] = 0;
		else
			cycle_out[idx]++;
	}
}

