
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

	r = link_in_00.read(); link_out_00.write(r);
	r = link_in_01.read(); link_out_01.write(r);
	r = link_in_02.read(); link_out_02.write(r);
	r = link_in_03.read(); link_out_03.write(r);
	r = link_in_04.read(); link_out_04.write(r);
	r = link_in_05.read(); link_out_05.write(r);
	r = link_in_06.read(); link_out_06.write(r);
	r = link_in_07.read(); link_out_07.write(r);
	r = link_in_08.read(); link_out_08.write(r);
	r = link_in_09.read(); link_out_09.write(r);

	r = link_in_10.read(); link_out_10.write(r);
	r = link_in_11.read(); link_out_11.write(r);
	r = link_in_12.read(); link_out_12.write(r);
	r = link_in_13.read(); link_out_13.write(r);
	r = link_in_14.read(); link_out_14.write(r);
	r = link_in_15.read(); link_out_15.write(r);
	r = link_in_16.read(); link_out_16.write(r);
	r = link_in_17.read(); link_out_17.write(r);
	r = link_in_18.read(); link_out_18.write(r);
	r = link_in_19.read(); link_out_19.write(r);

	r = link_in_20.read(); link_out_20.write(r);
	r = link_in_21.read(); link_out_21.write(r);
	r = link_in_22.read(); link_out_22.write(r);
	r = link_in_23.read(); link_out_23.write(r);
	r = link_in_24.read(); link_out_24.write(r);
	r = link_in_25.read(); link_out_25.write(r);
	r = link_in_26.read(); link_out_26.write(r);
	r = link_in_27.read(); link_out_27.write(r);
	r = link_in_28.read(); link_out_28.write(r);
	r = link_in_29.read(); link_out_29.write(r);

	r = link_in_30.read(); link_out_30.write(r);
	r = link_in_31.read(); link_out_31.write(r);
	r = link_in_32.read(); link_out_32.write(r);
	r = link_in_33.read(); link_out_33.write(r);
	r = link_in_34.read(); link_out_34.write(r);
	r = link_in_35.read(); link_out_35.write(r);
	r = link_in_36.read(); link_out_36.write(r);
	r = link_in_37.read(); link_out_37.write(r);
	r = link_in_38.read(); link_out_38.write(r);
	r = link_in_39.read(); link_out_39.write(r);

	r = link_in_40.read(); link_out_40.write(r);
	r = link_in_41.read(); link_out_41.write(r);
	r = link_in_42.read(); link_out_42.write(r);
	r = link_in_43.read(); link_out_43.write(r);
	r = link_in_44.read(); link_out_44.write(r);
	r = link_in_45.read(); link_out_45.write(r);
	r = link_in_46.read(); link_out_46.write(r);
	r = link_in_47.read(); link_out_47.write(r);

}
