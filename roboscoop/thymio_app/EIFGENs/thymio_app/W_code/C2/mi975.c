/*
 * Code for class MISSION_PLANNER_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F975_8038(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F975_8039(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F975_8040(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F975_8041(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F975_8042(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8043(EIF_REFERENCE);
extern EIF_TYPED_VALUE F975_8044(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F975_8045(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F975_8046(EIF_REFERENCE);
extern EIF_TYPED_VALUE F975_8047(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F975_8049(EIF_REFERENCE);
extern EIF_TYPED_VALUE F975_8050(EIF_REFERENCE);
extern EIF_TYPED_VALUE F975_8051(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8052(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8053(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8054(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8055(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8056(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8057(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F975_8058(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit975(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISSION_PLANNER_CONTROLLER}.make */
void F975_8038 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 1, 13707);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(974, Current, 13707);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1174, 0xF8000026, 0); /* stop_signaler */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1174, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5757, 0xF80001A0, 0); /* poses_x */
	tr1 = RTLNSMART(RTWCT(5757, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5757, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5758, 0xF80001A0, 0); /* poses_y */
	tr1 = RTLNSMART(RTWCT(5758, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5758, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.check_goal */
void F975_8039 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "check_goal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(10,ur1);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 974, Current, 2, 7, 13708);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(974, Current, 13708);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(949, 0x05), 0x05);
	RTCC(arg2, 974, l_feature_name, 2, eif_new_type(178, 0x05), 0x05);
	RTCC(arg3, 974, l_feature_name, 3, eif_new_type(962, 0x05), 0x05);
	RTCC(arg4, 974, l_feature_name, 4, eif_new_type(38, 0x05), 0x05);
	RTCC(arg5, 974, l_feature_name, 5, eif_new_type(78, 0x05), 0x05);
	RTCC(arg6, 974, l_feature_name, 6, eif_new_type(93, 0x05), 0x05);
	RTCC(arg7, 974, l_feature_name, 7, eif_new_type(950, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
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
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5557, "is_localized", arg1, tp1, ub1x);
			tb3 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5557, "is_localized", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (0, arg6, tp1);
				RTS_CF(1409, "data", arg6, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1409, "data", arg6))(arg6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(1,1);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (0, tr1, tp1);
				RTS_CF(946, "poses", tr1, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(946, "poses", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(1,2);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
				RTS_AC (0, tr2, tp1);
				RTS_CF(2199, "count", tr2, tp1, ui4_1x);
				ti4_1 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr2));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr2))(tr2)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5556, "is_stop_requested", arg1, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5556, "is_stop_requested", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		has_wait_condition = uarg1 || uarg6;
		RTTE(tb1, label_1);
		RTCK;
		has_wait_condition = 0;
		RTJB;
label_1:
		if (!has_wait_condition) break;
		RTCK;
		RTS_SRF (Current);
	}
	RTCF;
body:;
	RTHOOK(2);
	tb1 = '\0';
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
		RTS_AC (0, arg6, tp1);
		RTS_CF(1409, "data", arg6, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg6));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1409, "data", arg6))(arg6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(2,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(946, "poses", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(946, "poses", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(2,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(2199, "count", tr2, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr2))(tr2)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5551, "is_path_ready", arg1, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5551, "is_path_ready", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(3);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5565, "set_is_path_ready", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5565, "set_is_path_ready", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(4);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5553, "is_go_to_goal_started", arg1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5553, "is_go_to_goal_started", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5567, "set_is_go_to_goal_started", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5567, "set_is_go_to_goal_started", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (0, arg6, tp1);
				RTS_CF(1409, "data", arg6, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1409, "data", arg6))(arg6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(7,1);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (0, tr1, tp1);
				RTS_CF(946, "poses", tr1, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(946, "poses", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(7,2);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
				RTS_AC (0, tr2, tp1);
				RTS_CF(2199, "count", tr2, tp1, ui4_1x);
				ti4_1 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr2));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr2))(tr2)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ur1 = RTCCL(arg6);
			ui4_1 = loc1;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5760, dtype))(Current, ur1x, ui4_1x)).it_r8);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CF(5579, "general_parameters", arg7, tp1, up2x);
				tr2 = (up2x, (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", arg7))(arg7)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(8,2);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
				RTS_AC (0, tr2, tp1);
				RTS_CF(5517, "x_start", tr2, tp1, ur8_1x);
				tr8_2 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr2));
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5517, "x_start", tr2))(tr2)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2303, "force", tr1))(tr1, ur8_1x);
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ur1 = RTCCL(arg6);
			ui4_1 = loc1;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5764, dtype))(Current, ur1x, ui4_1x)).it_r8);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CF(5579, "general_parameters", arg7, tp1, up2x);
				tr2 = (up2x, (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", arg7))(arg7)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(9,2);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
				RTS_AC (0, tr2, tp1);
				RTS_CF(5518, "y_start", tr2, tp1, ur8_1x);
				tr8_2 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr2));
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5518, "y_start", tr2))(tr2)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2303, "force", tr1))(tr1, ur8_1x);
			RTHOOK(10);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5755, dtype))(Current);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2236, "finish", tr1))(tr1);
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2236, "finish", tr1))(tr1);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2188, "item", tr1))(tr1)).it_r8);
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,2);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2188, "item", tr1))(tr1)).it_r8);
		ur8_2 = tr8_2;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (2, arg3, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(5630, "set_goal", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5630, "set_goal", arg3))(arg3, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2193, "remove", tr1))(tr1);
		RTHOOK(16);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2193, "remove", tr1))(tr1);
		RTHOOK(17);
		ub1 = (EIF_BOOLEAN) 0;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (1, arg3, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5627, "set_is_at_goal", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5627, "set_is_at_goal", arg3))(arg3, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(18);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5554, "is_obstacle_avoidance", arg1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5554, "is_obstacle_avoidance", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(19);
		ub1 = (EIF_BOOLEAN) 0;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (1, arg3, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5626, "set_is_going_to_goal", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5626, "set_is_going_to_goal", arg3))(arg3, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(20);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5555, "is_obstacle_avoidance_done", arg1, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5555, "is_obstacle_avoidance_done", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb1) {
			RTHOOK(21);
			ub1 = (EIF_BOOLEAN) 0;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (1, arg1, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(5569, "set_is_obstacle_avoidance_done", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5569, "set_is_obstacle_avoidance_done", arg1))(arg1, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(22);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CF(5581, "go_to_goal_parameters", arg7, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5581, "go_to_goal_parameters", arg7))(arg7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(22,1);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (0, tr1, tp1);
				RTS_CF(5501, "jump_n_points_after_obstacle", tr1, tp1, ui4_1x);
				ti4_2 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5501, "jump_n_points_after_obstacle", tr1))(tr1)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			loc2 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(23);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(23,1);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr1))(tr1)).it_i4);
			if ((EIF_BOOLEAN) (ti4_2 > (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)))) {
				RTHOOK(24);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(25);
					if ((EIF_BOOLEAN) (loc1 > loc2)) break;
					RTHOOK(26);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5755, dtype))(Current);
					RTHOOK(27);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				}
			}
		}
		RTHOOK(28);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (1, arg3, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5626, "set_is_going_to_goal", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5626, "set_is_going_to_goal", arg3))(arg3, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(29);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5547, "is_go_to_goal_required", arg1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5547, "is_go_to_goal_required", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(30);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (1, arg3, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5626, "set_is_going_to_goal", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5626, "set_is_going_to_goal", arg3))(arg3, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(31);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5573, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(32);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5566, "set_is_go_to_goal", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5566, "set_is_go_to_goal", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(33);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5545, "is_object_recognition_activated", arg1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5545, "is_object_recognition_activated", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(34);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CP(1949, "stop", arg2, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg2))(arg2);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(35);
		ub1 = (EIF_BOOLEAN) 0;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (1, arg3, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5626, "set_is_going_to_goal", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5626, "set_is_going_to_goal", arg3))(arg3, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(36);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(1263, "x", arg5, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg5))(arg5)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(1264, "y", arg5, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg5))(arg5)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(1267, "theta", arg5, tp1, ur8_3x);
		tr8_3 = (ur8_3x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg5))(arg5)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_3 = tr8_3;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (3, arg3, tp1);
		RTS_AA (ur8_3x, it_r8, SK_REAL64, 3, tp1);
		RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CP(5629, "compute_error", arg3, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5629, "compute_error", arg3))(arg3, ur8_1x, ur8_2x, ur8_3x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(37);
	tb1 = '\0';
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5638, "distance_error", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5638, "distance_error", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
		RTS_AC (0, arg7, tp1);
		RTS_CF(5581, "go_to_goal_parameters", arg7, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg7));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5581, "go_to_goal_parameters", arg7))(arg7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(37,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(5500, "change_goal_threshold", tr1, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5500, "change_goal_threshold", tr1))(tr1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(37,2);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", tr1))(tr1)).it_i4);
		tb1 = (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(38);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(38,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2236, "finish", tr1))(tr1);
		RTHOOK(39);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(39,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2236, "finish", tr1))(tr1);
		RTHOOK(40);
		ur1 = RTCCL(arg3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(40,1);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2188, "item", tr1))(tr1)).it_r8);
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(40,2);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2188, "item", tr1))(tr1)).it_r8);
		ur8_2 = tr8_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5754, dtype))(Current, ur1x, ur8_1x, ur8_2x);
		RTHOOK(41);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(1263, "x", arg5, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg5))(arg5)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(1264, "y", arg5, tp1, ur8_2x);
			tr8_2 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg5))(arg5)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = tr8_2;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(1267, "theta", arg5, tp1, ur8_3x);
			tr8_3 = (ur8_3x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg5))(arg5)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_3 = tr8_3;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (3, arg3, tp1);
			RTS_AA (ur8_3x, it_r8, SK_REAL64, 3, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(5629, "compute_error", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5629, "compute_error", arg3))(arg3, ur8_1x, ur8_2x, ur8_3x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(42);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(42,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2193, "remove", tr1))(tr1);
		RTHOOK(43);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(43,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2193, "remove", tr1))(tr1);
	}
	RTHOOK(44);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5637, "is_at_goal", arg3, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5637, "is_at_goal", arg3))(arg3)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(45);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5573, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(46);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5570, "set_is_stop_requested", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5570, "set_is_stop_requested", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(47);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5562, "set_is_at_goal", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5562, "set_is_at_goal", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(48);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
			RTS_AC (1, arg4, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(784, "set_stop_requested", arg4, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(784, "set_stop_requested", arg4))(arg4, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(49);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ub1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.obstacle_avoidance */
void F975_8040 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "obstacle_avoidance";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
#define arg4 arg4x.it_r
	EIF_BOOLEAN uarg4;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 4, 13709);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13709);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(949, 0x05), 0x05);
	RTCC(arg2, 974, l_feature_name, 2, eif_new_type(934, 0x05), 0x05);
	RTCC(arg3, 974, l_feature_name, 3, eif_new_type(38, 0x05), 0x05);
	RTCC(arg4, 974, l_feature_name, 4, eif_new_type(950, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg = uarg1 || uarg2 || uarg3 || uarg4;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
			RTS_RS (Current, arg4);
			RTS_RS (Current, arg3);
			RTS_RS (Current, arg2);
			RTS_RS (Current, arg1);
			RTS_RW (Current);
		}
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		if ((EIF_BOOLEAN) 0) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5551, "is_path_ready", arg1, tp1, ub1x);
				tb5 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5551, "is_path_ready", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb4 = tb5;
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5557, "is_localized", arg1, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5557, "is_localized", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5545, "is_object_recognition_activated", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5545, "is_object_recognition_activated", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5556, "is_stop_requested", arg1, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5556, "is_stop_requested", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		has_wait_condition = uarg1;
		RTTE(tb1, label_1);
		RTCK;
		has_wait_condition = 0;
		RTJB;
label_1:
		if (!has_wait_condition) break;
		RTCK;
		RTS_SRF (Current);
	}
	RTCF;
body:;
	RTHOOK(2);
	tb1 = '\01';
	tb2 = '\01';
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5413, "is_transition_to_goal", arg2, tp1, ub1x);
		tb3 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5413, "is_transition_to_goal", arg2))(arg2)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (!tb3) {
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(5411, "is_boundary_following", arg2, tp1, ub1x);
			tb3 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5411, "is_boundary_following", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tb2 = tb3;
	}
	if (!tb2) {
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(5412, "is_recover_obstacle", arg2, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5412, "is_recover_obstacle", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5568, "set_is_obstacle_avoidance", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5568, "set_is_obstacle_avoidance", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(4);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5554, "is_obstacle_avoidance", arg1, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5554, "is_obstacle_avoidance", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb1) {
			RTHOOK(5);
			ub1 = (EIF_BOOLEAN) 1;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (1, arg1, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(5569, "set_is_obstacle_avoidance_done", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5569, "set_is_obstacle_avoidance_done", arg1))(arg1, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
		RTHOOK(6);
		ub1 = (EIF_BOOLEAN) 0;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5568, "set_is_obstacle_avoidance", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5568, "set_is_obstacle_avoidance", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(6);
	RTEE;
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.start_object_recognition */
void F975_8041 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "start_object_recognition";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
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
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(16);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,arg7);
	RTLR(8,arg8);
	RTLR(9,loc6);
	RTLR(10,tr1);
	RTLR(11,loc7);
	RTLR(12,loc8);
	RTLR(13,ur1);
	RTLR(14,ur2);
	RTLR(15,loc9);
	RTLIU(16);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU(SK_REF,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 974, Current, 9, 8, 13710);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(974, Current, 13710);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(949, 0x05), 0x05);
	RTCC(arg2, 974, l_feature_name, 2, eif_new_type(962, 0x05), 0x05);
	RTCC(arg3, 974, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,337,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 974, l_feature_name, 4, typres0, 0x05);
	}
	RTCC(arg5, 974, l_feature_name, 5, eif_new_type(38, 0x05), 0x05);
	RTCC(arg6, 974, l_feature_name, 6, eif_new_type(178, 0x05), 0x05);
	RTCC(arg7, 974, l_feature_name, 7, eif_new_type(932, 0x05), 0x05);
	RTCC(arg8, 974, l_feature_name, 8, eif_new_type(961, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg7 = (EIF_BOOLEAN) RTS_OU (Current, arg7);
	uarg8 = (EIF_BOOLEAN) RTS_OU (Current, arg8);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6 || uarg7 || uarg8;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
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
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		if ((EIF_BOOLEAN) 0) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5557, "is_localized", arg1, tp1, ub1x);
				tb6 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5557, "is_localized", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb5 = tb6;
		}
		if (tb5) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5551, "is_path_ready", arg1, tp1, ub1x);
				tb5 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5551, "is_path_ready", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb4 = tb5;
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5546, "is_object_recognition_done", arg1, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5546, "is_object_recognition_done", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5554, "is_obstacle_avoidance", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5554, "is_obstacle_avoidance", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5556, "is_stop_requested", arg1, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5556, "is_stop_requested", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		has_wait_condition = uarg1;
		RTTE(tb1, label_1);
		RTCK;
		has_wait_condition = 0;
		RTJB;
label_1:
		if (!has_wait_condition) break;
		RTCK;
		RTS_SRF (Current);
	}
	RTCF;
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80003C1, 0, 0); /* loc6 */
	loc6 = (EIF_REFERENCE) RTCCL(arg8);
	{
		int uarg;
		int uarg1 = RTS_OU (Current, loc6);
		RTS_SD;
		uarg = uarg1;
		if (uarg) {
			RTS_SRC (Current);
			if (uarg1) RTS_RS (Current, loc6);
			RTS_RW (Current);
		}
		RTHOOK(3);
		RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc6)) && !(EIF_IS_PASSIVE (loc6))) {
			RTS_AC (0, loc6, tp1);
			RTS_CF(5622, "value", loc6, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc6));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5622, "value", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(3,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(5595, "data", tr1, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5595, "data", tr1))(tr1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc4 = (EIF_BOOLEAN) tb1;
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5545, "is_object_recognition_activated", arg1, tp1, ub1x);
		tb2 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5545, "is_object_recognition_activated", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !loc4;
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF80003C1, 0, 0); /* loc7 */
		loc7 = (EIF_REFERENCE) RTCCL(arg8);
		{
			int uarg;
			int uarg1 = RTS_OU (Current, loc7);
			RTS_SD;
			uarg = uarg1;
			if (uarg) {
				RTS_SRC (Current);
				if (uarg1) RTS_RS (Current, loc7);
				RTS_RW (Current);
			}
			RTHOOK(6);
			RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc7)) && !(EIF_IS_PASSIVE (loc7))) {
				RTS_AC (0, loc7, tp1);
				RTS_CF(5622, "value", loc7, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(loc7));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5622, "value", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(6,1);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (0, tr1, tp1);
				RTS_CF(5595, "data", tr1, tp1, ub1x);
				tb1 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5595, "data", tr1))(tr1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			loc4 = (EIF_BOOLEAN) tb1;
			if (uarg) RTS_SRD (Current);
		}
		RTHOOK(7);
		if ((EIF_BOOLEAN) !loc4) {
			RTHOOK(8);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CP(5573, "clear_all_states", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg1))(arg1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(9);
			ub1 = (EIF_BOOLEAN) 0;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (1, arg1, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(5559, "set_is_object_recognition_activated", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5559, "set_is_object_recognition_activated", arg1))(arg1, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(10);
			ub1 = (EIF_BOOLEAN) 1;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (1, arg1, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(5561, "set_is_go_to_goal_required", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5561, "set_is_go_to_goal_required", arg1))(arg1, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(11);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CP(2221, "start", arg4, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2221, "start", arg4))(arg4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(12);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CP(2193, "remove", arg4, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2193, "remove", arg4))(arg4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
	}
	RTHOOK(13);
	RTDBGAL(Current, 3, 0xF8000151, 0, 0); /* loc8 */
	loc8 = (EIF_REFERENCE) RTCCL(arg4);
	{
		int uarg;
		int uarg1 = RTS_OU (Current, loc8);
		RTS_SD;
		uarg = uarg1;
		if (uarg) {
			RTS_SRC (Current);
			if (uarg1) RTS_RS (Current, loc8);
			RTS_RW (Current);
		}
		RTHOOK(14);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc8)) && !(EIF_IS_PASSIVE (loc8))) {
			RTS_AC (0, loc8, tp1);
			RTS_CF(2199, "count", loc8, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc8));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", loc8))(loc8)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc5 = (EIF_INTEGER_32) ti4_1;
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(15);
	if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 1L))) {
		RTHOOK(16);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5573, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(17);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5560, "set_is_object_recognition_done", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5560, "set_is_object_recognition_done", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(18);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5566, "set_is_go_to_goal", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5566, "set_is_go_to_goal", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(19);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (1, arg2, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5626, "set_is_going_to_goal", arg2, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5626, "set_is_going_to_goal", arg2))(arg2, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(20);
	RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) (EIF_REAL_64) 0.3;
	RTHOOK(21);
	RTDBGAL(Current, 3, 0x20000000, 1, 0); /* loc3 */
	ur1 = RTCCL(arg3);
	ur2 = RTCCL(arg4);
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5756, dtype))(Current, ur1x, ur2x)).it_r8);
	RTHOOK(22);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) (loc3 < loc2)) {
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5546, "is_object_recognition_done", arg1, tp1, ub1x);
			tb3 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5546, "is_object_recognition_done", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5545, "is_object_recognition_activated", arg1, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5545, "is_object_recognition_activated", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(23);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		ur8_1 = tr8_1;
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		ur8_2 = tr8_2;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (2, arg6, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(1948, "set_velocity", arg6, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg6))(arg6, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(24);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CP(5628, "clear_all_states", arg2, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5628, "clear_all_states", arg2))(arg2);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(25);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5573, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(26);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5559, "set_is_object_recognition_activated", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5559, "set_is_object_recognition_activated", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(27);
		RTDBGAL(Current, 4, 0xF80003A4, 0, 0); /* loc9 */
		loc9 = (EIF_REFERENCE) RTCCL(arg7);
		{
			int uarg;
			int uarg1 = RTS_OU (Current, loc9);
			RTS_SD;
			uarg = uarg1;
			if (uarg) {
				RTS_SRC (Current);
				if (uarg1) RTS_RS (Current, loc9);
				RTS_RW (Current);
			}
			RTHOOK(28);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, loc9)) && !(EIF_IS_PASSIVE (loc9))) {
				RTS_AC (0, loc9, tp1);
				RTS_CP(5405, "publish_message", loc9, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(loc9));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5405, "publish_message", loc9))(loc9);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if (uarg) RTS_SRD (Current);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(19);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef ub1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.check_goal_recognition */
void F975_8042 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "check_goal_recognition";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(17);
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
	RTLR(10,loc4);
	RTLR(11,tr1);
	RTLR(12,loc3);
	RTLR(13,tr2);
	RTLR(14,ur1);
	RTLR(15,tr3);
	RTLR(16,loc5);
	RTLIU(17);
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
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 974, Current, 5, 9, 13711);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(974, Current, 13711);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(949, 0x05), 0x05);
	RTCC(arg2, 974, l_feature_name, 2, eif_new_type(962, 0x05), 0x05);
	RTCC(arg3, 974, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,337,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 974, l_feature_name, 4, typres0, 0x05);
	}
	RTCC(arg5, 974, l_feature_name, 5, eif_new_type(38, 0x05), 0x05);
	RTCC(arg6, 974, l_feature_name, 6, eif_new_type(178, 0x05), 0x05);
	RTCC(arg7, 974, l_feature_name, 7, eif_new_type(932, 0x05), 0x05);
	RTCC(arg8, 974, l_feature_name, 8, eif_new_type(961, 0x05), 0x05);
	RTCC(arg9, 974, l_feature_name, 9, eif_new_type(937, 0x05), 0x05);
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
	RTDBGAL(Current, 1, 0xF80003C1, 0, 0); /* loc4 */
	loc4 = (EIF_REFERENCE) RTCCL(arg8);
	{
		int uarg;
		int uarg1 = RTS_OU (Current, loc4);
		RTS_SD;
		uarg = uarg1;
		if (uarg) {
			RTS_SRC (Current);
			if (uarg1) RTS_RS (Current, loc4);
			RTS_RW (Current);
		}
		RTHOOK(2);
		RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc4)) && !(EIF_IS_PASSIVE (loc4))) {
			RTS_AC (0, loc4, tp1);
			RTS_CF(5622, "value", loc4, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc4));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5622, "value", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(2,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(5595, "data", tr1, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5595, "data", tr1))(tr1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc2 = (EIF_BOOLEAN) tb1;
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5545, "is_object_recognition_activated", arg1, tp1, ub1x);
		tb2 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5545, "is_object_recognition_activated", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb2) {
		tb1 = loc2;
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 3, 0xF80003A4, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(932, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5452, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5403, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5406, "publish_flag", loc3))(loc3, ub1x);
		RTHOOK(6);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5573, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(7);
		ub1 = (EIF_BOOLEAN) 0;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5559, "set_is_object_recognition_activated", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5559, "set_is_object_recognition_activated", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(8);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5561, "set_is_go_to_goal_required", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5561, "set_is_go_to_goal_required", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(9);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
			RTS_AC (0, arg4, tp1);
			RTS_CP(2221, "start", arg4, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2221, "start", arg4))(arg4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(10);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
			RTS_AC (0, arg4, tp1);
			RTS_CP(2193, "remove", arg4, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2193, "remove", arg4))(arg4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(11);
		RTDBGAA(Current, dtype, 5752, 0x04000000, 1); /* done */
		*(EIF_BOOLEAN *)(Current + RTWA(5752, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(12);
		RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
		ur1 = RTCCL(arg4);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1263, "x", arg3, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg3))(arg3)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1264, "y", arg3, tp1, ur8_2x);
			tr8_2 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg3))(arg3)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = tr8_2;
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5753, dtype))(Current, ur1x, ur8_1x, ur8_2x)).it_r8);
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		tr2 = RTMS_EX_H("min dist: ",10,1712113440);
		tr3 = c_outr64(loc1);
		ur1 = RTCCL(tr3);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr2 = RTMS_EX_H("\012",1,10);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
		RTHOOK(14);
		tb1 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg9)) && !(EIF_IS_PASSIVE (arg9))) {
			RTS_AC (0, arg9, tp1);
			RTS_CF(5459, "object_distance_threshold", arg9, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg9));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5459, "object_distance_threshold", arg9))(arg9)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (loc1 < tr8_1)) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5752, dtype));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(15);
			RTDBGAA(Current, dtype, 5752, 0x04000000, 1); /* done */
			*(EIF_BOOLEAN *)(Current + RTWA(5752, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(16);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_1 = tr8_1;
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_2 = tr8_2;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (2, arg6, tp1);
				RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
				RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
				RTS_CP(1948, "set_velocity", arg6, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg6))(arg6, ur8_1x, ur8_2x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(17);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CP(5628, "clear_all_states", arg2, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5628, "clear_all_states", arg2))(arg2);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(18);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CP(5573, "clear_all_states", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg1))(arg1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(19);
			ub1 = (EIF_BOOLEAN) 1;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (1, arg1, tp1);
				RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
				RTS_CP(5559, "set_is_object_recognition_activated", arg1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5559, "set_is_object_recognition_activated", arg1))(arg1, ub1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(20);
			RTDBGAL(Current, 2, 0xF80003A4, 0, 0); /* loc5 */
			loc5 = (EIF_REFERENCE) RTCCL(arg7);
			{
				int uarg;
				int uarg1 = RTS_OU (Current, loc5);
				RTS_SD;
				uarg = uarg1;
				if (uarg) {
					RTS_SRC (Current);
					if (uarg1) RTS_RS (Current, loc5);
					RTS_RW (Current);
				}
				RTHOOK(21);
				if ((EIF_IS_DIFFERENT_PROCESSOR (Current, loc5)) && !(EIF_IS_PASSIVE (loc5))) {
					RTS_AC (0, loc5, tp1);
					RTS_CP(5405, "publish_message", loc5, tp1);
				} else {
					RTS_IMPERSONATE (RTS_PID(loc5));
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5405, "publish_message", loc5))(loc5);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
				if (uarg) RTS_SRD (Current);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
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

/* {MISSION_PLANNER_CONTROLLER}.done */
EIF_TYPED_VALUE F975_8043 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5752,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_CONTROLLER}.compute_closest_object */
EIF_TYPED_VALUE F975_8044 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "compute_closest_object";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	
	RTEAA(l_feature_name, 974, Current, 3, 3, 13713);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(974, Current, 13713);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,337,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 974, l_feature_name, 1, typres0, 0x05);
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4407, 258))(Current)).it_r8);
	loc2 = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(2199, "count", arg1, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", arg1))(arg1)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(Current, 3, 0x20000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2183, "at", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(4,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(898, "x", tr1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", tr1))(tr1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		ui4_1 = loc1;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2183, "at", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(4,2);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(899, "y", tr1, tp1, ur8_2x);
			tr8_2 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", tr1))(tr1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = tr8_2;
		ur8_3 = arg2;
		ur8_4 = arg3;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1939, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
		ur8_1 = tr8_1;
		loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1902, dtype))(Current, ur8_1x)).it_r8);
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 < loc2)) {
			RTHOOK(6);
			RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
			loc2 = (EIF_REAL_64) loc3;
		}
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(8);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.change_goal */
void F975_8045 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "change_goal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 3, 13714);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13714);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(962, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	ur8_1 = arg2;
	ur8_2 = arg3;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (2, arg1, tp1);
		RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CP(5630, "set_goal", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5630, "set_goal", arg1))(arg1, ur8_1x, ur8_2x);
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
	RTLO(5);
	RTEE;
#undef ur8_1
#undef ur8_2
#undef arg3
#undef arg2
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.remove_last_pose */
void F975_8046 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_last_pose";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 0, 13715);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(974, Current, 13715);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2236, "finish", tr1))(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2236, "finish", tr1))(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5757, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2193, "remove", tr1))(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5758, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2193, "remove", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {MISSION_PLANNER_CONTROLLER}.find_min_error */
EIF_TYPED_VALUE F975_8047 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "find_min_error";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_INT32, &loc8);
	
	RTEAA(l_feature_name, 974, Current, 8, 2, 13716);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(974, Current, 13716);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(78, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,337,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 974, l_feature_name, 2, typres0, 0x05);
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg = uarg1 || uarg2;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg2);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 5, 0x20000000, 1, 0); /* loc5 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1263, "x", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc5 = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAL(Current, 6, 0x20000000, 1, 0); /* loc6 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(1264, "y", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc6 = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
	loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(2199, "count", arg2, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", arg2))(arg2)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (loc8 > ti4_1)) break;
		RTHOOK(5);
		RTDBGAL(Current, 3, 0x20000000, 1, 0); /* loc3 */
		ui4_1 = loc8;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (1, arg2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2183, "at", arg2, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg2))(arg2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(5,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(898, "x", tr1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", tr1))(tr1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc3 = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		RTDBGAL(Current, 4, 0x20000000, 1, 0); /* loc4 */
		ui4_1 = loc8;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (1, arg2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2183, "at", arg2, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg2))(arg2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(6,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(899, "y", tr1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", tr1))(tr1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		loc4 = (EIF_REAL_64) tr8_1;
		RTHOOK(7);
		RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
		ur8_1 = loc3;
		ur8_2 = loc4;
		ur8_3 = loc5;
		ur8_4 = loc6;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1939, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
		ur8_1 = tr8_1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1902, dtype))(Current, ur8_1x)).it_r8);
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(9);
			RTDBGAL(Current, 7, 0x20000000, 1, 0); /* loc7 */
			loc7 = (EIF_REAL_64) loc2;
		} else {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 < loc7)) {
				RTHOOK(11);
				RTDBGAL(Current, 7, 0x20000000, 1, 0); /* loc7 */
				loc7 = (EIF_REAL_64) loc2;
			}
		}
		RTHOOK(12);
		RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
		loc8++;
	}
	RTHOOK(13);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) loc7;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
#undef arg2
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.poses_x */
EIF_TYPED_VALUE F975_8048 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5757,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_CONTROLLER}.poses_y */
EIF_TYPED_VALUE F975_8049 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5758,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_CONTROLLER}.count */
EIF_TYPED_VALUE F975_8050 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5759,Dtype(Current)));
	return r;
}


/* {MISSION_PLANNER_CONTROLLER}.get_x */
EIF_TYPED_VALUE F975_8051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_x";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_i4
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 2, 13720);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13720);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(93, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	ui4_1 = arg2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (1, arg1, tp1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
		RTS_CF(1411, "pose_i_th", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1411, "pose_i_th", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr1);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5761, Dtype(Current)))(Current, ur1x)).it_r8);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.get_pose_ith_x */
EIF_TYPED_VALUE F975_8052 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_pose_ith_x";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 1, 13721);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13721);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(59, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(941, "pose", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(941, "pose", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr1);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5762, Dtype(Current)))(Current, ur1x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.get_position_x */
EIF_TYPED_VALUE F975_8053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_position_x";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 1, 13722);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13722);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(45, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(830, "position", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr1);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5763, Dtype(Current)))(Current, ur1x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.get_final_x */
EIF_TYPED_VALUE F975_8054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_final_x";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 1, 13723);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13723);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(53, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(898, "x", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.get_y */
EIF_TYPED_VALUE F975_8055 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_y";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_i4
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 2, 13724);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13724);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(93, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	ui4_1 = arg2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (1, arg1, tp1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
		RTS_CF(1411, "pose_i_th", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1411, "pose_i_th", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr1);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5765, Dtype(Current)))(Current, ur1x)).it_r8);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.get_pose_ith_y */
EIF_TYPED_VALUE F975_8056 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_pose_ith_y";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 1, 13725);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13725);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(59, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(941, "pose", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(941, "pose", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr1);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5766, Dtype(Current)))(Current, ur1x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.get_position_y */
EIF_TYPED_VALUE F975_8057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_position_y";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 1, 13726);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13726);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(45, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(830, "position", arg1, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(830, "position", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur1 = RTCCL(tr1);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5767, Dtype(Current)))(Current, ur1x)).it_r8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {MISSION_PLANNER_CONTROLLER}.get_final_y */
EIF_TYPED_VALUE F975_8058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_final_y";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 974, Current, 0, 1, 13727);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(974, Current, 13727);
	RTCC(arg1, 974, l_feature_name, 1, eif_new_type(53, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(899, "y", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

void EIF_Minit975 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
