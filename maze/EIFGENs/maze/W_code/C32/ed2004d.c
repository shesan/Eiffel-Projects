/*
 * Class EDGE_COMPARATOR [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_2004 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_2004 [] = {0xFF01,245,2003,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_2_2004 [] = {0xFF01,2003,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_3_2004 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_2004 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_2004 [] = {0xFF01,2003,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_6_2004 [] = {0xFF01,2003,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_7_2004 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_2004 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_2004 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_2004 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_2004 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_2004 [] = {2003,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_13_2004 [] = {0xFF01,2003,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_14_2004 [] = {0xFF01,2001,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_2004 [] = {0xFF01,2001,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_16_2004 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_2004[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_2004), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_2004), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_2004), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_2004), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_2004), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_2004), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_2004), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_2004), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_2004), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_2004), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_2004), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_2004), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_2004), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_2004), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 19192, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 19193, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 20015, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 19194, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 19195, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 19196, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_2004), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 20011, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 20012, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 20013, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 20014, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_2004), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_2004), 0x00, 0xFFFFFFFF},
};
void Init2004(void)
{
	IDSC(desc_2004, 0, 2003);
	IDSC(desc_2004 + 1, 1, 2003);
	IDSC(desc_2004 + 32, 501, 2003);
	IDSC(desc_2004 + 39, 500, 2003);
	IDSC(desc_2004 + 42, 585, 2003);
	IDSC(desc_2004 + 44, 454, 2003);
}


#ifdef __cplusplus
}
#endif
