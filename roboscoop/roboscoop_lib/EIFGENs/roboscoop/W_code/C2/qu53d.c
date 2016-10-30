/*
 * Class QUATERNION_MSG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_53 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_1_53 [] = {0xFF01,304,52,0xFFFF};
static const EIF_TYPE_INDEX egt_2_53 [] = {0xFF01,52,0xFFFF};
static const EIF_TYPE_INDEX egt_3_53 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_53 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_53 [] = {0xFF01,52,0xFFFF};
static const EIF_TYPE_INDEX egt_6_53 [] = {0xFF01,52,0xFFFF};
static const EIF_TYPE_INDEX egt_7_53 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_53 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_53 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_10_53 [] = {0xFF01,287,0xFFFF};
static const EIF_TYPE_INDEX egt_11_53 [] = {0xFF01,37,0xFFFF};
static const EIF_TYPE_INDEX egt_12_53 [] = {0xFF01,52,0xFFFF};


static const struct desc_info desc_53[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_53), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_53), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FF /*255*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_53), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_53), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_53), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_53), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_53), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_53), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_53), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_53), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_53), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_53), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x69 /*52*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_53), 31, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1017, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 879, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 880, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 881, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1015, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1025, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 1026, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1027, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1033, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1014, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 878, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1018, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1019, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1020, 0},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1021, 8},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1022, 16},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1023, 24},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1024, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1028, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1029, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1030, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1031, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0235 /*282*/), 1032, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0205 /*258*/), 1016, 0xFFFFFFFF},
};
void Init53(void)
{
	IDSC(desc_53, 0, 52);
	IDSC(desc_53 + 1, 1, 52);
	IDSC(desc_53 + 32, 31, 52);
	IDSC(desc_53 + 43, 317, 52);
	IDSC(desc_53 + 44, 192, 52);
}


#ifdef __cplusplus
}
#endif
