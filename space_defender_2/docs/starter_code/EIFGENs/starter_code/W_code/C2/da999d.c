/*
 * Class DATE_TIME_PARSER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_999 [] = {0xFF01,246,998,0xFFFF};
static const EIF_TYPE_INDEX egt_2_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_3_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_6_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_7_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_999 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_9_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_999 [] = {0xFF01,25,0xFFFF};
static const EIF_TYPE_INDEX egt_12_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_13_999 [] = {0xFF01,964,0xFFFF};
static const EIF_TYPE_INDEX egt_14_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_15_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_16_999 [] = {0xFF01,334,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_17_999 [] = {0xFF01,334,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_18_999 [] = {0xFF01,334,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_19_999 [] = {0xFF01,334,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_20_999 [] = {0xFF01,643,221,0xFFFF};
static const EIF_TYPE_INDEX egt_21_999 [] = {0xFF01,158,0xFFFF};
static const EIF_TYPE_INDEX egt_22_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_23_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_24_999 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_25_999 [] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_26_999 [] = {0xFF01,671,0xFF01,989,221,0xFFFF};
static const EIF_TYPE_INDEX egt_27_999 [] = {334,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_28_999 [] = {334,0xFF01,232,0xFFFF};


static const struct desc_info desc_999[] = {
	{EIF_GENERIC(NULL), 14099, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_999), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_999), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_999), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_999), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_999), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_999), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_999), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_999), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_999), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_999), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_999), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_999), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07CD /*998*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_999), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13668, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13669, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_999), 13670, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_999), 13671, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13697, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13698, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13699, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13700, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13701, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13702, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_999), 13703, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_999), 13704, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_999), 13705, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_999), 13706, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_999), 13707, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13708, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13709, 0xFFFFFFFF},
	{EIF_GENERIC(egt_20_999), 13710, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13908, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13909, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13910, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13913, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13914, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13915, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13916, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13722, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13919, 0xFFFFFFFF},
	{EIF_GENERIC(egt_21_999), 6565, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13911, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13912, 48},
	{EIF_GENERIC(NULL), 13917, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13918, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13920, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13921, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13922, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13903, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13904, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13905, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_999), 13906, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13907, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14015, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14016, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14017, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14018, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14019, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14020, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14021, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13672, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13673, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13674, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13675, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13676, 0xFFFFFFFF},
	{EIF_GENERIC(egt_23_999), 13677, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13687, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13688, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13689, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13692, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13679, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13680, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13681, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13678, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13696, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13690, 80},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13691, 44},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13693, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13694, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13695, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13682, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13683, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13684, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13685, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13686, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13982, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13983, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13984, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14065, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14066, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14067, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13642, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13643, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13644, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13645, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13646, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13647, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13648, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13649, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13650, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13651, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13652, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13653, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13654, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13655, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13656, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13657, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13658, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13659, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13660, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13661, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13662, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13663, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13664, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13665, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13666, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13667, 0xFFFFFFFF},
	{EIF_GENERIC(egt_24_999), 13953, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 13954, 0xFFFFFFFF},
	{EIF_GENERIC(egt_25_999), 13955, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 13956, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14068, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 14069, 0},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14070, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14071, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14072, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14073, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14074, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14075, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 14076, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14077, 40},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14078, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14079, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14080, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14081, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0191 /*200*/), 14082, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14083, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14084, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14085, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14086, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14087, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14088, 52},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14089, 56},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14090, 60},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14091, 64},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14092, 68},
	{EIF_NON_GENERIC(0x0197 /*203*/), 14093, 88},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 14094, 8},
	{EIF_GENERIC(egt_26_999), 14095, 16},
	{EIF_GENERIC(egt_27_999), 14096, 24},
	{EIF_GENERIC(egt_28_999), 14097, 32},
	{EIF_NON_GENERIC(0x01BB /*221*/), 14098, 72},
};
void Init999(void)
{
	IDSC(desc_999, 0, 998);
	IDSC(desc_999 + 1, 1, 998);
	IDSC(desc_999 + 32, 399, 998);
	IDSC(desc_999 + 36, 389, 998);
	IDSC(desc_999 + 50, 390, 998);
	IDSC(desc_999 + 58, 305, 998);
	IDSC(desc_999 + 60, 380, 998);
	IDSC(desc_999 + 72, 381, 998);
	IDSC(desc_999 + 79, 396, 998);
	IDSC(desc_999 + 85, 395, 998);
	IDSC(desc_999 + 94, 383, 998);
	IDSC(desc_999 + 104, 384, 998);
	IDSC(desc_999 + 107, 387, 998);
	IDSC(desc_999 + 110, 400, 998);
	IDSC(desc_999 + 136, 393, 998);
	IDSC(desc_999 + 140, 391, 998);
}


#ifdef __cplusplus
}
#endif
