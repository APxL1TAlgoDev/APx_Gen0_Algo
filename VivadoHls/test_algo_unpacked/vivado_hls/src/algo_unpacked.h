#ifndef ALGO_UNPACKED_H
#define ALGO_UNPACKED_H

#include <ap_int.h>

#define N_CH_IN 48
#define N_CH_OUT 48

void algo_unpacked(ap_uint<192> link_in[N_CH_IN], ap_uint<192> link_out[N_CH_OUT]);

#endif
