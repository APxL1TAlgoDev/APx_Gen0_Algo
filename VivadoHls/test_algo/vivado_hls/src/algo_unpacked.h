#ifndef ALGO_UNPACKED_H
#define ALGO_UNPACKED_H

#include <ap_int.h>

#define N_CH_IN 48
#define N_CH_OUT 48

//void algo_unpacked(ap_uint<64> link_in[N_CH_IN][3], ap_uint<64> link_out[N_CH_OUT][3]);
void algo_unpacked(ap_uint<64> link_in_2d[N_CH_IN][3], ap_uint<64> link_out_2d[N_CH_OUT][3]);

#endif
