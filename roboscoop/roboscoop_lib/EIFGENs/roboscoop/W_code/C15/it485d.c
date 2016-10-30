/*
 * Class ITERATION_CURSOR [POINTER]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_485 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_485 [] = {0xFF01,304,484,282,0xFFFF};
static const EIF_TYPE_INDEX egt_2_485 [] = {0xFF01,484,282,0xFFFF};
static const EIF_TYPE_INDEX egt_3_485 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_485 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_485 [] = {0xFF01,484,282,0xFFFF};
static const EIF_TYPE_INDEX egt_6_485 [] = {0xFF01,484,282,0xFFFF};
static const EIF_TYPE_INDEX egt_7_485 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_485 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_485 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_485 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_485 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_485 [] = {484,282,0xFFFF};
static const EIF_TYPE_INDEX egt_13_485 [] = {0xFF01,484,282,0xFFFF};
static const EIF_TYPE_INDEX egt_14_485 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_485 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_485[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_485), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_485), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_485), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_485), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_485), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_485), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_485), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_485), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_485), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_485), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_485), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_485), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_485), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_485), 31, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_485), -1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), -1, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), -1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_485), -1, 0xFFFFFFFF},
};
void Init485(void)
{
	IDSC(desc_485, 0, 484);
	IDSC(desc_485 + 1, 1, 484);
	IDSC(desc_485 + 32, 115, 484);
}


#ifdef __cplusplus
}
#endif