/*
 * Class LINKABLE [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_381 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_381 [] = {0xFF01,304,380,273,0xFFFF};
static const EIF_TYPE_INDEX egt_2_381 [] = {0xFF01,380,273,0xFFFF};
static const EIF_TYPE_INDEX egt_3_381 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_381 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_381 [] = {0xFF01,380,273,0xFFFF};
static const EIF_TYPE_INDEX egt_6_381 [] = {0xFF01,380,273,0xFFFF};
static const EIF_TYPE_INDEX egt_7_381 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_381 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_381 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_381 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_381 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_381 [] = {380,273,0xFFFF};
static const EIF_TYPE_INDEX egt_13_381 [] = {0xFF01,380,273,0xFFFF};
static const EIF_TYPE_INDEX egt_14_381 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_381 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_16_381 [] = {380,273,0xFFFF};


static const struct desc_info desc_381[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_381), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_381), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_381), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_381), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_381), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_381), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_381), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_381), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_381), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_381), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_381), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_381), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_381), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_381), 31, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_381), 2389, 8},
	{EIF_GENERIC(NULL), 2390, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2391, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_381), -1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_381), 2401, 0},
	{EIF_GENERIC(NULL), 2402, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2403, 0xFFFFFFFF},
};
void Init381(void)
{
	IDSC(desc_381, 0, 380);
	IDSC(desc_381 + 1, 1, 380);
	IDSC(desc_381 + 32, 207, 380);
	IDSC(desc_381 + 36, 376, 380);
}


#ifdef __cplusplus
}
#endif
