
#include "algo_top.h"

using namespace hls;

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

#pragma HLS PIPELINE II=1

	strmWord r;

	r = link_in_00.read(); r.data += 0;link_out_00.write(r);
	r = link_in_01.read(); r.data += 1;link_out_01.write(r);
	r = link_in_02.read(); r.data += 2;link_out_02.write(r);
	r = link_in_03.read(); r.data += 3;link_out_03.write(r);
	r = link_in_04.read(); r.data += 4;link_out_04.write(r);
	r = link_in_05.read(); r.data += 5;link_out_05.write(r);
	r = link_in_06.read(); r.data += 6;link_out_06.write(r);
	r = link_in_07.read(); r.data += 7;link_out_07.write(r);
	r = link_in_08.read(); r.data += 8;link_out_08.write(r);
	r = link_in_09.read(); r.data += 9;link_out_09.write(r);

	r = link_in_10.read(); r.data += 10;link_out_10.write(r);
	r = link_in_11.read(); r.data += 11;link_out_11.write(r);
	r = link_in_12.read(); r.data += 12;link_out_12.write(r);
	r = link_in_13.read(); r.data += 13;link_out_13.write(r);
	r = link_in_14.read(); r.data += 14;link_out_14.write(r);
	r = link_in_15.read(); r.data += 15;link_out_15.write(r);
	r = link_in_16.read(); r.data += 16;link_out_16.write(r);
	r = link_in_17.read(); r.data += 17;link_out_17.write(r);
	r = link_in_18.read(); r.data += 18;link_out_18.write(r);
	r = link_in_19.read(); r.data += 19;link_out_19.write(r);

	r = link_in_20.read(); r.data += 20;link_out_20.write(r);
	r = link_in_21.read(); r.data += 21;link_out_21.write(r);
	r = link_in_22.read(); r.data += 22;link_out_22.write(r);
	r = link_in_23.read(); r.data += 23;link_out_23.write(r);
	r = link_in_24.read(); r.data += 24;link_out_24.write(r);
	r = link_in_25.read(); r.data += 25;link_out_25.write(r);
	r = link_in_26.read(); r.data += 26;link_out_26.write(r);
	r = link_in_27.read(); r.data += 27;link_out_27.write(r);
	r = link_in_28.read(); r.data += 28;link_out_28.write(r);
	r = link_in_29.read(); r.data += 29;link_out_29.write(r);

	r = link_in_30.read(); r.data += 30;link_out_30.write(r);
	r = link_in_31.read(); r.data += 31;link_out_31.write(r);
	r = link_in_32.read(); r.data += 32;link_out_32.write(r);
	r = link_in_33.read(); r.data += 33;link_out_33.write(r);
	r = link_in_34.read(); r.data += 34;link_out_34.write(r);
	r = link_in_35.read(); r.data += 35;link_out_35.write(r);
	r = link_in_36.read(); r.data += 36;link_out_36.write(r);
	r = link_in_37.read(); r.data += 37;link_out_37.write(r);
	r = link_in_38.read(); r.data += 38;link_out_38.write(r);
	r = link_in_39.read(); r.data += 39;link_out_39.write(r);

	r = link_in_40.read(); r.data += 40;link_out_40.write(r);
	r = link_in_41.read(); r.data += 41;link_out_41.write(r);
	r = link_in_42.read(); r.data += 42;link_out_42.write(r);
	r = link_in_43.read(); r.data += 43;link_out_43.write(r);
	r = link_in_44.read(); r.data += 44;link_out_44.write(r);
	r = link_in_45.read(); r.data += 45;link_out_45.write(r);
	r = link_in_46.read(); r.data += 46;link_out_46.write(r);
	r = link_in_47.read(); r.data += 47;link_out_47.write(r);

}
