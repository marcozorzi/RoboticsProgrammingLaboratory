/*
 * Code for class GO_TO_GOAL_BEHAVIOUR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F965_7928(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F965_7929(EIF_REFERENCE);
extern void F965_7930(EIF_REFERENCE);
extern void F965_7931(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F965_7932(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F965_7933(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7934(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7935(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7936(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7937(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7938(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7939(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7940(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7941(EIF_REFERENCE);
extern void EIF_Minit965(void);
extern EIF_REFERENCE _A970_37();
extern EIF_REFERENCE _A970_36();

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GO_TO_GOAL_BEHAVIOUR}.make_with_attributes */
void F965_7928 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "make_with_attributes";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
#define arg5 arg5x.it_r
	EIF_BOOLEAN uarg5;
#define arg6 arg6x.it_r
	EIF_BOOLEAN uarg6;
#define arg7 arg7x.it_r
	EIF_BOOLEAN uarg7;
#define arg8 arg8x.it_r
	EIF_BOOLEAN uarg8;
#define arg9 arg9x.it_r
	EIF_BOOLEAN uarg9;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,arg9);
	RTLR(10,tr1);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 9, 13593);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(964, Current, 13593);
	RTCC(arg1, 964, l_feature_name, 1, eif_new_type(78, 0x05), 0x05);
	RTCC(arg2, 964, l_feature_name, 2, eif_new_type(178, 0x05), 0x05);
	RTCC(arg3, 964, l_feature_name, 3, eif_new_type(962, 0x05), 0x05);
	RTCC(arg4, 964, l_feature_name, 4, eif_new_type(934, 0x05), 0x05);
	RTCC(arg5, 964, l_feature_name, 5, eif_new_type(976, 0x05), 0x05);
	RTCC(arg6, 964, l_feature_name, 6, eif_new_type(38, 0x05), 0x05);
	RTCC(arg7, 964, l_feature_name, 7, eif_new_type(945, 0x05), 0x05);
	RTCC(arg8, 964, l_feature_name, 8, eif_new_type(943, 0x05), 0x05);
	RTCC(arg9, 964, l_feature_name, 9, eif_new_type(941, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg9 = (EIF_BOOLEAN) RTS_OU (Current, arg9);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8 || uarg9;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg9);
		RTS_RS (Current, arg8);
		RTS_RS (Current, arg7);
		RTS_RS (Current, arg6);
		RTS_RS (Current, arg5);
		RTS_RS (Current, arg4);
		RTS_RS (Current, arg3);
		RTS_RS (Current, arg2);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5653, 0xF80003A3, 0); /* angle_pid */
	tr1 = RTLNSMART(RTWCT(5653, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(5395, Dtype(tr1), tp1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5653, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5649, 0xF80003C2, 0); /* go_to_goal_sig */
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(5649, dtype)) = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5650, 0xF8000026, 0); /* stop_sig */
	RTAR(Current, arg6);
	*(EIF_REFERENCE *)(Current + RTWA(5650, dtype)) = (EIF_REFERENCE) RTCCL(arg6);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5654, 0xF80003D0, 0); /* range_group */
	RTAR(Current, arg5);
	*(EIF_REFERENCE *)(Current + RTWA(5654, dtype)) = (EIF_REFERENCE) RTCCL(arg5);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5651, 0xF800004E, 0); /* odometry_sig */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5651, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5652, 0xF80000B2, 0); /* diff_drive */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(5652, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5648, 0xF80003AF, 0); /* go_to_goal_parameters */
	RTAR(Current, arg8);
	*(EIF_REFERENCE *)(Current + RTWA(5648, dtype)) = (EIF_REFERENCE) RTCCL(arg8);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5656, 0xF80003A6, 0); /* obstacle_avoidance_sig */
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + RTWA(5656, dtype)) = (EIF_REFERENCE) RTCCL(arg4);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5655, 0xF80003AD, 0); /* obstacle_avoidance_parameters */
	RTAR(Current, arg9);
	*(EIF_REFERENCE *)(Current + RTWA(5655, dtype)) = (EIF_REFERENCE) RTCCL(arg9);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(11);
	RTEE;
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_BEHAVIOUR}.start */
void F965_7929 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,loc2);
	RTLR(10,loc3);
	RTLR(11,loc4);
	RTLR(12,loc5);
	RTLR(13,ur4);
	RTLR(14,ur5);
	RTLIU(15);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 964, Current, 5, 0, 13594);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(964, Current, 13594);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80003C9, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(969, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5648, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	ur3 = RTCCL(tr4);
	RTS_AC (3, tr1, tp1);
	RTS_AS (ur3x, it_r, SK_REF, 3, tp1);
	RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5715, Dtype(tr1), tp1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80003C9, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(969, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5648, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	ur3 = RTCCL(tr4);
	RTS_AC (3, tr1, tp1);
	RTS_AS (ur3x, it_r, SK_REF, 3, tp1);
	RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5715, Dtype(tr1), tp1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF80003CD, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(973, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	RTS_AC (2, tr1, tp1);
	RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5732, Dtype(tr1), tp1);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0xF80003CD, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(973, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	RTS_AC (2, tr1, tp1);
	RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5732, Dtype(tr1), tp1);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(Current, 5, 0xF80003CD, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(973, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	RTS_AC (2, tr1, tp1);
	RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5732, Dtype(tr1), tp1);
	RTNHOOK(5,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5647, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	ur3 = RTCCL(loc3);
	ur4 = RTCCL(loc4);
	ur5 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5646, dtype))(Current, ur1x, ur2x, ur3x, ur4x, ur5x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ub1
}

/* {GO_TO_GOAL_BEHAVIOUR}.stop */
void F965_7930 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 0, 13595);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(964, Current, 13595);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5647, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {GO_TO_GOAL_BEHAVIOUR}.sep_start */
void F965_7931 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "sep_start";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
#define arg5 arg5x.it_r
	EIF_BOOLEAN uarg5;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 5, 13596);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(964, Current, 13596);
	RTCC(arg1, 964, l_feature_name, 1, eif_new_type(969, 0x05), 0x05);
	RTCC(arg2, 964, l_feature_name, 2, eif_new_type(969, 0x05), 0x05);
	RTCC(arg3, 964, l_feature_name, 3, eif_new_type(973, 0x05), 0x05);
	RTCC(arg4, 964, l_feature_name, 4, eif_new_type(973, 0x05), 0x05);
	RTCC(arg5, 964, l_feature_name, 5, eif_new_type(973, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg5);
		RTS_RS (Current, arg4);
		RTS_RS (Current, arg3);
		RTS_RS (Current, arg2);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,7,241,0xFF05,969,0xFF05,962,0xFF05,38,0xFF05,78,0xFF05,178,0xFF05,931,0xFF05,943,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 8, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
	RTAR(tr1,arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5652, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+5)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5653, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+6)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5648, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+7)->it_r = tr2;
	RTAR(tr1,tr2);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,969,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A970_36, (EIF_POINTER)(0),5716, 0, 0, 1, -1, tr1, 0);
	}
	RTS_PID (tr2) = RTS_PID (tr1) = RTS_PID (arg1);
	ur1 = RTCCL(tr2);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (1, arg1, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(1173, "repeat_until_stop_requested", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "repeat_until_stop_requested", arg1))(arg1, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,5,241,0xFF05,969,0xFF05,962,0xFF05,38,0xFF05,178,0xFF05,943,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 6, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = arg2;
	RTAR(tr1,arg2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5652, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5648, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+5)->it_r = tr2;
	RTAR(tr1,tr2);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,969,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A970_37, (EIF_POINTER)(0),5717, 0, 0, 1, -1, tr1, 0);
	}
	RTS_PID (tr2) = RTS_PID (tr1) = RTS_PID (arg2);
	ur1 = RTCCL(tr2);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(1173, "repeat_until_stop_requested", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "repeat_until_stop_requested", arg2))(arg2, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_BEHAVIOUR}.sep_stop */
void F965_7932 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "sep_stop";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_b
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 2, 13597);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(964, Current, 13597);
	RTCC(arg1, 964, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	ub1 = arg2;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (1, arg1, tp1);
		RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
		RTS_CP(784, "set_stop_requested", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(784, "set_stop_requested", arg1))(arg1, ub1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(4);
	RTEE;
#undef ub1
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_BEHAVIOUR}.go_to_goal_parameters */
EIF_TYPED_VALUE F965_7933 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5648,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_BEHAVIOUR}.go_to_goal_sig */
EIF_TYPED_VALUE F965_7934 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5649,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_BEHAVIOUR}.stop_sig */
EIF_TYPED_VALUE F965_7935 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5650,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_BEHAVIOUR}.odometry_sig */
EIF_TYPED_VALUE F965_7936 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5651,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_BEHAVIOUR}.diff_drive */
EIF_TYPED_VALUE F965_7937 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5652,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_BEHAVIOUR}.angle_pid */
EIF_TYPED_VALUE F965_7938 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5653,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_BEHAVIOUR}.range_group */
EIF_TYPED_VALUE F965_7939 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5654,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_BEHAVIOUR}.obstacle_avoidance_parameters */
EIF_TYPED_VALUE F965_7940 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5655,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_BEHAVIOUR}.obstacle_avoidance_sig */
EIF_TYPED_VALUE F965_7941 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5656,Dtype(Current)));
	return r;
}


void EIF_Minit965 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
