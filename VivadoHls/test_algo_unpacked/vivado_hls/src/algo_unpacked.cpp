#include "algo_unpacked.h"

/*
 * algo_unpacked interface exposes fully unpacked input and output link data.
 * This version assumes use of 10G 8b10b links, and thus providing 192bits/BX/link.
 *
 * !!! N.B.: Do NOT use the first bytes of link_in/link_out (i.e. link_in/link_out[].range(7,0)
 * as this portion is reserved for transmission of 8b10b input/output link alignment markers.
 *
 * The remaining 184 bits are available for algorithm use.
 * 
 * !!! N.B. 2: make sure to assign every bit of link_out[] data. First byte should be assigned zero.
 */

void algo_unpacked(ap_uint<192> link_in[N_CH_IN], ap_uint<192> link_out[N_CH_OUT])
{

// !!! Retain these 4 #pragma directives below in your algo_unpacked implementation !!!
#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0
#pragma HLS PIPELINE II=3
#pragma HLS INTERFACE ap_ctrl_hs port=return
    
	for (int lnk = 0; lnk < N_CH_IN; lnk++) {
   
        ap_uint<24> tmp0, tmp1, tmp2;

       #pragma HLS RESOURCE variable=tmp0 core=MulnS
       #pragma HLS RESOURCE variable=tmp1 core=MulnS
       #pragma HLS RESOURCE variable=tmp2 core=MulnS

        /*
        / first byte of link_in and link_out are reserved, do not use
        / however, do assign zero to link_out[].range(7,0)
        */

       link_out[lnk].range(7, 0) = 0; 

        // 16b mult + add (only for demo purposes)
        tmp0 = link_in[lnk].range(23, 8) * 10 + 1;
        
        link_out[lnk].range(23, 8) = tmp0;
        link_out[lnk].range(63, 24) = link_in[lnk].range(63, 24); // pass-through for this portion of link_out

        // 16b mult + add
        tmp1 = link_in[lnk].range(79, 64) * 11 + 2;
        
        link_out[lnk].range(79, 64) = tmp1;
        link_out[lnk].range(127, 80) = link_in[lnk].range(127, 80); // pass-through for this portion of link_out

        // 16b mult + add
        tmp2 = link_in[lnk].range(143, 128) * 12 +3;
        
        link_out[lnk].range(143, 128) = tmp2;
        link_out[lnk].range(191, 144) = link_in[lnk].range(191, 144); // pass-through for this portion of link_out
    }
}

