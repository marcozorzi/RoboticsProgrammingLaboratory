/*
 * Code for class GO_TO_GOAL_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F970_8006(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F970_8007(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F970_8008(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F970_8009(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F970_8010(EIF_REFERENCE);
extern EIF_TYPED_VALUE F970_8011(EIF_REFERENCE);
extern void EIF_Minit970(void);

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

/* {GO_TO_GOAL_CONTROLLER}.make */
void F970_8006 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ur8_5x = {{0}, SK_REAL64};
#define ur8_5 ur8_5x.it_r8
	EIF_TYPED_VALUE ur8_6x = {{0}, SK_REAL64};
#define ur8_6 ur8_6x.it_r8
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 969, Current, 0, 3, 13675);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(969, Current, 13675);
	RTCC(arg1, 969, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	RTCC(arg2, 969, l_feature_name, 2, eif_new_type(78, 0x05), 0x05);
	RTCC(arg3, 969, l_feature_name, 3, eif_new_type(943, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg = uarg1 || uarg2 || uarg3;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg3);
		RTS_RS (Current, arg2);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1174, 0xF8000026, 0); /* stop_signaler */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1174, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5720, 0x20000000, 1); /* last_time */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(1266, "timestamp", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1266, "timestamp", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	*(EIF_REAL_64 *)(Current + RTWA(5720, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5719, 0xF80003A1, 0); /* pid_param_rotate */
	tr1 = RTLNSMART(RTWCT(5719, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5491, "heading_pid_kp", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5491, "heading_pid_kp", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5492, "heading_pid_ki", arg3, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5492, "heading_pid_ki", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5493, "heading_pid_kd", arg3, tp1, ur8_3x);
		tr8_3 = (ur8_3x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5493, "heading_pid_kd", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_3 = tr8_3;
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_4 = tr8_4;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5494, "heading_pid_delta_t", arg3, tp1, ur8_5x);
		tr8_5 = (ur8_5x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5494, "heading_pid_delta_t", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_5 = tr8_5;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5495, "heading_pid_windup_threshold", arg3, tp1, ur8_6x);
		tr8_6 = (ur8_6x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5495, "heading_pid_windup_threshold", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_6 = tr8_6;
	RTS_AC (6, tr1, tp1);
	RTS_AA (ur8_6x, it_r8, SK_REAL64, 6, tp1);
	RTS_AA (ur8_5x, it_r8, SK_REAL64, 5, tp1);
	RTS_AA (ur8_4x, it_r8, SK_REAL64, 4, tp1);
	RTS_AA (ur8_3x, it_r8, SK_REAL64, 3, tp1);
	RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
	RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
	RTS_CC(5380, Dtype(tr1), tp1);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5719, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
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
#undef ur8_3
#undef ur8_4
#undef ur8_5
#undef ur8_6
#undef arg3
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_CONTROLLER}.going_to_goal */
void F970_8007 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "going_to_goal";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
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
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,arg5);
	RTLR(6,arg6);
	RTLR(7,tr1);
	RTLR(8,tr2);
	RTLR(9,ur1);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	
	RTEAA(l_feature_name, 969, Current, 2, 6, 13676);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(969, Current, 13676);
	RTCC(arg1, 969, l_feature_name, 1, eif_new_type(962, 0x05), 0x05);
	RTCC(arg2, 969, l_feature_name, 2, eif_new_type(38, 0x05), 0x05);
	RTCC(arg3, 969, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 969, l_feature_name, 4, eif_new_type(178, 0x05), 0x05);
	RTCC(arg5, 969, l_feature_name, 5, eif_new_type(931, 0x05), 0x05);
	RTCC(arg6, 969, l_feature_name, 6, eif_new_type(943, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg6 = (EIF_BOOLEAN) RTS_OU (Current, arg6);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5 || uarg6;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
		if (uarg) {
			RTS_SRC (Current);
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
			RTS_CF(5636, "is_going_to_goal", arg1, tp1, ub1x);
			tb3 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5636, "is_going_to_goal", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5637, "is_at_goal", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5637, "is_at_goal", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(783, "is_stop_requested", arg2, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg2))(arg2)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		has_wait_condition = uarg1 || uarg2;
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
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5636, "is_going_to_goal", arg1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5636, "is_going_to_goal", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5628, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5628, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(4);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5626, "set_is_going_to_goal", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5626, "set_is_going_to_goal", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (
			WDBG(969, (char *) 0)
		) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = RTMS_EX_H("GOING TO GOAL\012",14,1334225930);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1266, "timestamp", arg3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1266, "timestamp", arg3))(arg3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc1 = (EIF_REAL_64) tr8_1;
	RTHOOK(7);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5720, dtype));
	ur8_1 = loc1;
	tb1 = tr8_1 == ur8_1;
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(8);
		RTDBGAL(Current, 2, 0x20000000, 1, 0); /* loc2 */
		loc2 = *(EIF_REAL_64 *)(Current + RTWA(5720, dtype));
		loc2 = (EIF_REAL_64) (EIF_REAL_64) (loc1 - loc2);
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5720, 0x20000000, 1); /* last_time */
		*(EIF_REAL_64 *)(Current + RTWA(5720, dtype)) = (EIF_REAL_64) loc1;
		RTHOOK(10);
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
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1267, "theta", arg3, tp1, ur8_3x);
			tr8_3 = (ur8_3x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg3))(arg3)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_3 = tr8_3;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ur8_3x, it_r8, SK_REAL64, 3, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(5629, "compute_error", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5629, "compute_error", arg1))(arg1, ur8_1x, ur8_2x, ur8_3x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5640, "theta_error", arg1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5640, "theta_error", arg1))(arg1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		ur8_2 = loc2;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (3, arg5, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 3, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 2, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5397, "update_pid_parameters", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5397, "update_pid_parameters", arg5))(arg5, ur1x, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (1, arg5, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5396, "calc_output", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5396, "calc_output", arg5))(arg5, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(13);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5638, "distance_error", arg1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5638, "distance_error", arg1))(arg1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		ur1 = RTCCL(arg6);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5718, dtype))(Current, ur8_1x, ur1x)).it_r8);
		ur8_1 = tr8_1;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(5399, "output", arg5, tp1, ur8_2x);
			tr8_2 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5399, "output", arg5))(arg5)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = tr8_2;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
			RTS_AC (2, arg4, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(1948, "set_velocity", arg4, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg4))(arg4, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ub1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_CONTROLLER}.at_goal */
void F970_8008 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "at_goal";
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
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 969, Current, 0, 4, 13677);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(969, Current, 13677);
	RTCC(arg1, 969, l_feature_name, 1, eif_new_type(962, 0x05), 0x05);
	RTCC(arg2, 969, l_feature_name, 2, eif_new_type(38, 0x05), 0x05);
	RTCC(arg3, 969, l_feature_name, 3, eif_new_type(178, 0x05), 0x05);
	RTCC(arg4, 969, l_feature_name, 4, eif_new_type(943, 0x05), 0x05);
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
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(783, "is_stop_requested", arg2, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		has_wait_condition = uarg2;
		RTTE((EIF_BOOLEAN) !tb1, label_1);
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
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5638, "distance_error", arg1, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5638, "distance_error", arg1))(arg1)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
		RTS_AC (0, arg4, tp1);
		RTS_CF(5490, "goal_threshold", arg4, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg4));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5490, "goal_threshold", arg4))(arg4)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5628, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5628, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(4);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5627, "set_is_at_goal", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5627, "set_is_at_goal", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(5);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CP(1949, "stop", arg3, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1949, "stop", arg3))(arg3);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(6);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (1, arg2, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(784, "set_stop_requested", arg2, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(784, "set_stop_requested", arg2))(arg2, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = RTMS_EX_H("AT GOAL\012",8,737103370);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_CONTROLLER}.compute_velocity */
EIF_TYPED_VALUE F970_8009 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "compute_velocity";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
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
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 969, Current, 0, 2, 13678);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(969, Current, 13678);
	RTCC(arg2, 969, l_feature_name, 2, eif_new_type(943, 0x05), 0x05);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg = uarg2;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg2);
		RTS_RW (Current);
	}
	RTHOOK(1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5497, "cruise_velocity_threshold", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5497, "cruise_velocity_threshold", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) (arg1 > tr8_1)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(5496, "cruise_velocity", arg2, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5496, "cruise_velocity", arg2))(arg2)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		Result = (EIF_REAL_64) tr8_1;
	} else {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(5499, "approach_velocity_threshold", arg2, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5499, "approach_velocity_threshold", arg2))(arg2)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) (arg1 > tr8_1)) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(5498, "approach_velocity", arg2, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5498, "approach_velocity", arg2))(arg2)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			Result = (EIF_REAL_64) tr8_1;
		} else {
			RTHOOK(5);
			RTDBGAL(Current, 0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) arg1;
		}
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_CONTROLLER}.pid_param_rotate */
EIF_TYPED_VALUE F970_8010 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5719,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_CONTROLLER}.last_time */
EIF_TYPED_VALUE F970_8011 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5720,Dtype(Current)));
	return r;
}


void EIF_Minit970 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
