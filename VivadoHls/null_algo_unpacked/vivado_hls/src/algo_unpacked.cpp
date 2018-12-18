#include "algo_unpacked.h"

/*
 * algo_unpacked interface exposes fully unpacked input and output link data.
 * This version assumes use of 10G 8b10b links, and thus providing 192bits/BX/link,
 * arranged as an array of 3x 64 bits.
 *
 * !!! N.B. Do NOT use the first bytes of link_in/out_2d[][0] (i.e. link_in/out_2d[][0].range(7,0)
 * as this portion is reserved for transmission of 8b10b input/output link alignment markers.
 *
 * The remaining 184 bits are available for algorithm use.
 *
 */

void algo_unpacked(ap_uint<64> link_in_2d[N_CH_IN][3], ap_uint<64> link_out_2d[N_CH_OUT][3])
{

// !!! Retain these 4 #pragma directives below in your algo_unpacked implementation !!!
#pragma HLS ARRAY_PARTITION variable=link_in_2d complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out_2d complete dim=0
#pragma HLS PIPELINE II=3
#pragma HLS INTERFACE ap_none port=link_out_2d

	for (int lnk = 0; lnk < N_CH_IN; lnk++) {
#pragma HLS UNROLL
		link_out_2d[lnk][0] = link_in_2d[lnk][0];
		link_out_2d[lnk][1] = link_in_2d[lnk][1];
		link_out_2d[lnk][2] = link_in_2d[lnk][2];
	}
}
