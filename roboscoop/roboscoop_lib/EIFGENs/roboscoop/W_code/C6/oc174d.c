/*
 * Class OCCUPANCY_GRID_SIGNALER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_174 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_174 [] = {0xFF01,304,173,0xFFFF};
static const EIF_TYPE_INDEX egt_2_174 [] = {0xFF01,173,0xFFFF};
static const EIF_TYPE_INDEX egt_3_174 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_174 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_174 [] = {0xFF01,173,0xFFFF};
static const EIF_TYPE_INDEX egt_6_174 [] = {0xFF01,173,0xFFFF};
static const EIF_TYPE_INDEX egt_7_174 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_174 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_174 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_174 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_174 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_174 [] = {0xFF01,173,0xFFFF};
static const EIF_TYPE_INDEX egt_13_174 [] = {0xFF01,62,0xFFFF};
static const EIF_TYPE_INDEX egt_14_174 [] = {0xFF05,428,0xFF01,62,0xFFFF};


static const struct desc_info desc_174[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_174), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_174), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_174), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_174), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_174), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_174), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_174), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_174), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_174), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_174), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_174), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_174), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x015B /*173*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_174), 31, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2127, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2128, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2129, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2130, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2131, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2146, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2147, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2148, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2149, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2150, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2151, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2152, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2153, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2154, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2155, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2156, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2157, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2158, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2159, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2160, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_174), 2161, 0},
	{EIF_NON_GENERIC(0x01E7 /*243*/), 2162, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2164, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0223 /*273*/), 2165, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2166, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2167, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 2168, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 2169, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_174), 2170, 8},
	{EIF_GENERIC(NULL), 2171, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2163, 0xFFFFFFFF},
};
void Init174(void)
{
	IDSC(desc_174, 0, 173);
	IDSC(desc_174 + 1, 1, 173);
	IDSC(desc_174 + 32, 142, 173);
	IDSC(desc_174 + 37, 230, 173);
	IDSC(desc_174 + 51, 154, 173);
	IDSC(desc_174 + 62, 407, 173);
}


#ifdef __cplusplus
}
#endif
