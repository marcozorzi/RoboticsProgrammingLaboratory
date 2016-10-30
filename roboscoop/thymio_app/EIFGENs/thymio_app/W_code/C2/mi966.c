/*
 * Code for class MISSION_PLANNER_BEHAVIOUR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F966_7942(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F966_7943(EIF_REFERENCE);
extern void F966_7944(EIF_REFERENCE);
extern void F966_7945(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F966_7946(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F966_7947(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7948(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7949(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7950(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7951(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7952(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7953(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7954(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7955(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7956(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7957(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7958(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7959(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7960(EIF_REFERENCE);
extern EIF_TYPED_VALUE F966_7961(EIF_REFERENCE);
extern void EIF_Minit966(void);
extern EIF_REFERENCE _A971_36();
extern EIF_REFERENCE _A975_97();
extern EIF_REFERENCE _A975_100();
extern EIF_REFERENCE _A976_72();
extern EIF_REFERENCE _A975_98();

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

/* {MISSION_PLANNER_BEHAVIOUR}.make_with_attributes */
void F966_7942 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
{
	GTCX
	char *l_feature_name = "make_with_attributes";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
#define arg10 arg10x.it_r
	EIF_BOOLEAN uarg10;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
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
	RTLR(10,arg10);
	RTLR(11,tr1);
	RTLR(12,loc1);
	RTLR(13,tr2);
	RTLR(14,ur1);
	RTLIU(15);
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
	RTLU(SK_REF,&arg10);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 965, Current, 1, 10, 13601);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(965, Current, 13601);
	RTCC(arg1, 965, l_feature_name, 1, eif_new_type(962, 0x05), 0x05);
	RTCC(arg2, 965, l_feature_name, 2, eif_new_type(934, 0x05), 0x05);
	RTCC(arg3, 965, l_feature_name, 3, eif_new_type(949, 0x05), 0x05);
	RTCC(arg4, 965, l_feature_name, 4, eif_new_type(78, 0x05), 0x05);
	RTCC(arg5, 965, l_feature_name, 5, eif_new_type(38, 0x05), 0x05);
	RTCC(arg6, 965, l_feature_name, 6, eif_new_type(178, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,337,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg7, 965, l_feature_name, 7, typres0, 0x05);
	}
	RTCC(arg8, 965, l_feature_name, 8, eif_new_type(93, 0x05), 0x05);
	RTCC(arg9, 965, l_feature_name, 9, eif_new_type(950, 0x05), 0x05);
	RTCC(arg10, 965, l_feature_name, 10, eif_new_type(25, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg9 = (EIF_BOOLEAN) RTS_OU (Current, arg9);
	uarg10 = (EIF_BOOLEAN) RTS_OU (Current, arg10);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8 || uarg9 || uarg10;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg10);
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
	RTDBGAA(Current, dtype, 5661, 0xF80003C2, 0); /* go_to_goal_sig */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5661, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5665, 0xF80003A6, 0); /* obstacle_avoidance_signaler */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(5665, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5662, 0xF8000026, 0); /* stop_sig */
	RTAR(Current, arg5);
	*(EIF_REFERENCE *)(Current + RTWA(5662, dtype)) = (EIF_REFERENCE) RTCCL(arg5);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5663, 0xF8000026, 0); /* loc_stop_sig */
	tr1 = RTLNSMART(RTWCT(5663, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(782, Dtype(tr1), tp1);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5663, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5668, 0xF80000B2, 0); /* differential_drive */
	RTAR(Current, arg6);
	*(EIF_REFERENCE *)(Current + RTWA(5668, dtype)) = (EIF_REFERENCE) RTCCL(arg6);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5660, 0xF80003B5, 0); /* robot_signaler */
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(5660, dtype)) = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5669, 0xF80003B6, 0); /* parameters */
	RTAR(Current, arg9);
	*(EIF_REFERENCE *)(Current + RTWA(5669, dtype)) = (EIF_REFERENCE) RTCCL(arg9);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5664, 0xF800004E, 0); /* odometry_sig */
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + RTWA(5664, dtype)) = (EIF_REFERENCE) RTCCL(arg4);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5667, 0xF800005D, 0); /* path_sig */
	RTAR(Current, arg8);
	*(EIF_REFERENCE *)(Current + RTWA(5667, dtype)) = (EIF_REFERENCE) RTCCL(arg8);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5666, 0xF8000151, 0); /* goals */
	RTAR(Current, arg7);
	*(EIF_REFERENCE *)(Current + RTWA(5666, dtype)) = (EIF_REFERENCE) RTCCL(arg7);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 5674, 0xF8000019, 0); /* leds */
	RTAR(Current, arg10);
	*(EIF_REFERENCE *)(Current + RTWA(5674, dtype)) = (EIF_REFERENCE) RTCCL(arg10);
	RTHOOK(12);
	RTDBGAL(Current, 1, 0xF80003B6, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5669, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	{
		int uarg;
		int uarg1 = RTS_OU (Current, loc1);
		RTS_SD;
		uarg = uarg1;
		if (uarg) {
			RTS_SRC (Current);
			if (uarg1) RTS_RS (Current, loc1);
			RTS_RW (Current);
		}
		RTHOOK(13);
		RTDBGAA(Current, dtype, 5670, 0xF80003A9, 0); /* localization_parameters */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc1)) && !(EIF_IS_PASSIVE (loc1))) {
			RTS_AC (0, loc1, tp1);
			RTS_CF(5587, "localization_parameters", loc1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5587, "localization_parameters", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5670, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(14);
	RTDBGAA(Current, dtype, 5671, 0xF80003A4, 0); /* object_recognition_publisher */
	tr1 = RTLNSMART(RTWCT(5671, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5450, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5403, Dtype(tr1), tp1);
	RTNHOOK(14,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5671, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	RTDBGAA(Current, dtype, 5672, 0xF80003C1, 0); /* object_recognition_subscriber */
	tr1 = RTLNSMART(RTWCT(5672, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5452, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5621, Dtype(tr1), tp1);
	RTNHOOK(15,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5672, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	RTDBGAA(Current, dtype, 5673, 0xF80003C0, 0); /* human_detector */
	tr1 = RTLNSMART(RTWCT(5673, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5453, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5617, Dtype(tr1), tp1);
	RTNHOOK(16,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5673, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef ur1
#undef arg10
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

/* {MISSION_PLANNER_BEHAVIOUR}.start */
void F966_7943 (EIF_REFERENCE Current)
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLR(11,ur4);
	RTLR(12,ur5);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 965, Current, 5, 0, 13602);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(965, Current, 13602);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80003CE, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(974, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5747, Dtype(tr1), tp1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80003CE, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(974, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5747, Dtype(tr1), tp1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0xF80003CE, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(974, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5747, Dtype(tr1), tp1);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0xF80003CF, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(975, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5768, Dtype(tr1), tp1);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(Current, 5, 0xF80003CA, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(970, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5721, Dtype(tr1), tp1);
	RTNHOOK(5,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	ur3 = RTCCL(loc3);
	ur4 = RTCCL(loc4);
	ur5 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5658, dtype))(Current, ur1x, ur2x, ur3x, ur4x, ur5x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
}

/* {MISSION_PLANNER_BEHAVIOUR}.stop */
void F966_7944 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 965, Current, 0, 0, 13603);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(965, Current, 13603);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5659, dtype))(Current, ur1x, ub1x);
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

/* {MISSION_PLANNER_BEHAVIOUR}.sep_start */
void F966_7945 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
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
	
	RTEAA(l_feature_name, 965, Current, 0, 5, 13604);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(965, Current, 13604);
	RTCC(arg1, 965, l_feature_name, 1, eif_new_type(974, 0x05), 0x05);
	RTCC(arg2, 965, l_feature_name, 2, eif_new_type(974, 0x05), 0x05);
	RTCC(arg3, 965, l_feature_name, 3, eif_new_type(974, 0x05), 0x05);
	RTCC(arg4, 965, l_feature_name, 4, eif_new_type(975, 0x05), 0x05);
	RTCC(arg5, 965, l_feature_name, 5, eif_new_type(970, 0x05), 0x05);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,8,241,0xFF05,974,0xFF05,949,0xFF05,178,0xFF05,962,0xFF05,38,0xFF05,78,0xFF05,93,0xFF05,950,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 9, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
	RTAR(tr1,arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5660, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5668, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5661, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+5)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5664, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+6)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5667, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+7)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5669, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+8)->it_r = tr2;
	RTAR(tr1,tr2);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,974,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A975_97, (EIF_POINTER)(0),5748, 0, 0, 1, -1, tr1, 0);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,5,241,0xFF05,974,0xFF05,949,0xFF05,934,0xFF05,38,0xFF05,950,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 6, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = arg2;
	RTAR(tr1,arg2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5660, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5665, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5669, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+5)->it_r = tr2;
	RTAR(tr1,tr2);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,974,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A975_98, (EIF_POINTER)(0),5749, 0, 0, 1, -1, tr1, 0);
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
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,10,241,0xFF05,974,0xFF05,949,0xFF05,962,0xFF05,78,0xFF05,337,0xFF01,53,0xFF05,38,0xFF05,178,0xFF05,932,0xFF05,961,0xFF05,937,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 11, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = arg3;
	RTAR(tr1,arg3);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5660, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5661, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5664, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5666, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+5)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+6)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5668, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+7)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5671, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+8)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5672, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+9)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+10)->it_r = tr2;
	RTAR(tr1,tr2);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,974,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A975_100, (EIF_POINTER)(0),5751, 0, 0, 1, -1, tr1, 0);
	}
	RTS_PID (tr2) = RTS_PID (tr1) = RTS_PID (arg3);
	ur1 = RTCCL(tr2);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (1, arg3, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(1173, "repeat_until_stop_requested", arg3, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "repeat_until_stop_requested", arg3))(arg3, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,6,241,0xFF05,975,0xFF05,949,0xFF05,178,0xFF05,78,0xFF05,38,0xFF05,937,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 7, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = arg4;
	RTAR(tr1,arg4);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5660, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5668, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5664, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5663, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+5)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+6)->it_r = tr2;
	RTAR(tr1,tr2);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,975,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A976_72, (EIF_POINTER)(0),5769, 0, 0, 1, -1, tr1, 0);
	}
	RTS_PID (tr2) = RTS_PID (tr1) = RTS_PID (arg4);
	ur1 = RTCCL(tr2);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
		RTS_AC (1, arg4, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(1173, "repeat_until_stop_requested", arg4, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg4));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "repeat_until_stop_requested", arg4))(arg4, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,5,241,0xFF05,970,0xFF05,38,0xFF05,949,0xFF05,960,0xFF05,25,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 6, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = arg5;
	RTAR(tr1,arg5);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5660, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5673, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5674, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	((EIF_TYPED_VALUE *)tr1+5)->it_r = tr2;
	RTAR(tr1,tr2);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,305,0xFF01,970,0xFF01,0xFFF9,0,241,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A971_36, (EIF_POINTER)(0),5722, 0, 0, 1, -1, tr1, 0);
	}
	RTS_PID (tr2) = RTS_PID (tr1) = RTS_PID (arg5);
	ur1 = RTCCL(tr2);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (1, arg5, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CP(1173, "repeat_until_stop_requested", arg5, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "repeat_until_stop_requested", arg5))(arg5, ur1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
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

/* {MISSION_PLANNER_BEHAVIOUR}.sep_stop */
void F966_7946 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
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
	
	RTEAA(l_feature_name, 965, Current, 0, 2, 13605);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(965, Current, 13605);
	RTCC(arg1, 965, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
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

/* {MISSION_PLANNER_BEHAVIOUR}.robot_signaler */
EIF_TYPED_VALUE F966_7947 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5660,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.go_to_goal_sig */
EIF_TYPED_VALUE F966_7948 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5661,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.stop_sig */
EIF_TYPED_VALUE F966_7949 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5662,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.loc_stop_sig */
EIF_TYPED_VALUE F966_7950 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5663,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.odometry_sig */
EIF_TYPED_VALUE F966_7951 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5664,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.obstacle_avoidance_signaler */
EIF_TYPED_VALUE F966_7952 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5665,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.goals */
EIF_TYPED_VALUE F966_7953 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5666,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.path_sig */
EIF_TYPED_VALUE F966_7954 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5667,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.differential_drive */
EIF_TYPED_VALUE F966_7955 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5668,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.parameters */
EIF_TYPED_VALUE F966_7956 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5669,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.localization_parameters */
EIF_TYPED_VALUE F966_7957 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5670,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.object_recognition_publisher */
EIF_TYPED_VALUE F966_7958 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5671,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.object_recognition_subscriber */
EIF_TYPED_VALUE F966_7959 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5672,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.human_detector */
EIF_TYPED_VALUE F966_7960 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5673,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_BEHAVIOUR}.leds */
EIF_TYPED_VALUE F966_7961 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5674,Dtype(Current)));
	return r;
}


void EIF_Minit966 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
