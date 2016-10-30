/*
 * Class THYMIO_GROUND_GROUP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_960 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_960 [] = {0xFF01,304,959,0xFFFF};
static const EIF_TYPE_INDEX egt_2_960 [] = {0xFF01,959,0xFFFF};
static const EIF_TYPE_INDEX egt_3_960 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_960 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_960 [] = {0xFF01,959,0xFFFF};
static const EIF_TYPE_INDEX egt_6_960 [] = {0xFF01,959,0xFFFF};
static const EIF_TYPE_INDEX egt_7_960 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_960 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_960 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_960 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_960 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_960 [] = {0xFF01,959,0xFFFF};
static const EIF_TYPE_INDEX egt_13_960 [] = {0xFF01,324,0xFF01,66,0xFFFF};
static const EIF_TYPE_INDEX egt_14_960 [] = {0xFF01,66,0xFFFF};
static const EIF_TYPE_INDEX egt_15_960 [] = {0xFF01,920,273,0xFFFF};
static const EIF_TYPE_INDEX egt_16_960 [] = {0xFF05,428,0xFF01,66,0xFFFF};
static const EIF_TYPE_INDEX egt_17_960 [] = {0xFF01,66,0xFFFF};


static const struct desc_info desc_960[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_960), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_960), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_960), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_960), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_960), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_960), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_960), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_960), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_960), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_960), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_960), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_960), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x077F /*959*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_960), 31, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13502, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_960), 13503, 0},
	{EIF_GENERIC(NULL), 13504, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13505, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_960), 13506, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_960), 13507, 8},
	{EIF_GENERIC(egt_16_960), 13508, 16},
	{EIF_GENERIC(NULL), 13509, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_960), -1, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13510, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13511, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 13512, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 13513, 0xFFFFFFFF},
};
void Init960(void)
{
	IDSC(desc_960, 0, 959);
	IDSC(desc_960 + 1, 1, 959);
	IDSC(desc_960 + 32, 370, 959);
	IDSC(desc_960 + 41, 439, 959);
	IDSC(desc_960 + 44, 241, 959);
}


#ifdef __cplusplus
}
#endif