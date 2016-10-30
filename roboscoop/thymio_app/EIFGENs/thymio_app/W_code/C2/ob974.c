/*
 * Code for class OBSTACLE_AVOIDANCE_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F974_8023(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F974_8024(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F974_8025(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F974_8026(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F974_8027(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8028(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8029(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8030(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8031(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8032(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8033(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8034(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8035(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8036(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_8037(EIF_REFERENCE);
extern void EIF_Minit974(void);

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

/* {OBSTACLE_AVOIDANCE_CONTROLLER}.make */
void F974_8023 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
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
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 973, Current, 0, 2, 13701);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 13701);
	RTCC(arg1, 973, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	RTCC(arg2, 973, l_feature_name, 2, eif_new_type(78, 0x05), 0x05);
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
	RTDBGAA(Current, dtype, 1174, 0xF8000026, 0); /* stop_signaler */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1174, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5741, 0xF8000035, 0); /* obstacle_position */
	tr1 = RTLNSMART(RTWCT(5741, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(806, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5741, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5740, 0xF80003CC, 0); /* obstacle_sig */
	tr1 = RTLNSMART(RTWCT(5740, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5725, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5740, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5746, 0x04000000, 1); /* left_radius */
	*(EIF_BOOLEAN *)(Current + RTWA(5746, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5744, 0x04000000, 1); /* same_obstacle */
	*(EIF_BOOLEAN *)(Current + RTWA(5744, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
#undef arg2
#undef arg1
}

/* {OBSTACLE_AVOIDANCE_CONTROLLER}.boundary_following */
void F974_8024 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "boundary_following";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
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
	EIF_BOOLEAN tb4;
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
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 973, Current, 1, 7, 13702);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 13702);
	RTCC(arg1, 973, l_feature_name, 1, eif_new_type(934, 0x05), 0x05);
	RTCC(arg2, 973, l_feature_name, 2, eif_new_type(962, 0x05), 0x05);
	RTCC(arg3, 973, l_feature_name, 3, eif_new_type(38, 0x05), 0x05);
	RTCC(arg4, 973, l_feature_name, 4, eif_new_type(78, 0x05), 0x05);
	RTCC(arg5, 973, l_feature_name, 5, eif_new_type(976, 0x05), 0x05);
	RTCC(arg6, 973, l_feature_name, 6, eif_new_type(178, 0x05), 0x05);
	RTCC(arg7, 973, l_feature_name, 7, eif_new_type(941, 0x05), 0x05);
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
		tb3 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(1416, "is_obstacle_in_front", arg5, tp1, ub1x);
			tb4 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1416, "is_obstacle_in_front", arg5))(arg5)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5413, "is_transition_to_goal", arg1, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5413, "is_transition_to_goal", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5414, "is_goal_unreachable", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5414, "is_goal_unreachable", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(783, "is_stop_requested", arg3, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg3))(arg3)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		has_wait_condition = uarg5 || uarg1 || uarg3;
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
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5411, "is_boundary_following", arg1, tp1, ub1x);
		tb2 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5411, "is_boundary_following", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (!(EIF_BOOLEAN) !tb2) {
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5412, "is_recover_obstacle", arg1, tp1, ub1x);
			tb2 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5412, "is_recover_obstacle", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5412, "is_recover_obstacle", arg1, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5412, "is_recover_obstacle", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CF(1263, "x", arg4, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg4))(arg4)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_1 = tr8_1;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CF(1264, "y", arg4, tp1, ur8_2x);
				tr8_2 = (ur8_2x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg4))(arg4)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_2 = tr8_2;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CF(1267, "theta", arg4, tp1, ur8_3x);
				tr8_3 = (ur8_3x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg4))(arg4)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur8_3 = tr8_3;
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (3, arg2, tp1);
				RTS_AA (ur8_3x, it_r8, SK_REAL64, 3, tp1);
				RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
				RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
				RTS_CP(5629, "compute_error", arg2, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5629, "compute_error", arg2))(arg2, ur8_1x, ur8_2x, ur8_3x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTHOOK(5);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CP(5631, "update_min_distance", arg2, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5631, "update_min_distance", arg2))(arg2);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
		RTHOOK(6);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5419, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5419, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(7);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5415, "set_is_boundary_following", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5415, "set_is_boundary_following", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (
			WDBG(973, (char *) 0)
		) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			tr2 = RTMS_EX_H("BOUNDARY FOLLOWING\012",19,1758339082);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(9);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(5775, "is_only_one_front_sensor_active", arg5, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5775, "is_only_one_front_sensor_active", arg5))(arg5)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(10);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (0, arg7, tp1);
			RTS_CF(5471, "boundary_following_speed", arg7, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5471, "boundary_following_speed", arg7))(arg7)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (0, arg7, tp1);
			RTS_CF(5472, "desired_distance_from_wall", arg7, tp1, ur8_2x);
			tr8_2 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5472, "desired_distance_from_wall", arg7))(arg7)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = tr8_2;
		ur1 = RTCCL(arg5);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5727, "compute_two_sensor_angular_speed", tr1))(tr1, ur8_2x, ur1x)).it_r8);
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
	} else {
		RTHOOK(11);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CP(5778, "save_last_sensor_active", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5778, "save_last_sensor_active", arg5))(arg5);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(12);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (0, arg7, tp1);
			RTS_CF(5471, "boundary_following_speed", arg7, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5471, "boundary_following_speed", arg7))(arg7)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (0, arg7, tp1);
			RTS_CF(5472, "desired_distance_from_wall", arg7, tp1, ur8_2x);
			tr8_2 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5472, "desired_distance_from_wall", arg7))(arg7)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = tr8_2;
		ur1 = RTCCL(arg5);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5726, "compute_one_sensor_angular_speed", tr1))(tr1, ur8_2x, ur1x)).it_r8);
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
	}
	RTHOOK(13);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
		RTS_AC (0, arg4, tp1);
		RTS_CF(1263, "x", arg4, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg4));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1263, "x", arg4))(arg4)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
		RTS_AC (0, arg4, tp1);
		RTS_CF(1264, "y", arg4, tp1, ur8_2x);
		tr8_2 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg4));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1264, "y", arg4))(arg4)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = tr8_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
		RTS_AC (0, arg4, tp1);
		RTS_CF(1267, "theta", arg4, tp1, ur8_3x);
		tr8_3 = (ur8_3x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg4));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1267, "theta", arg4))(arg4)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_3 = tr8_3;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (3, arg2, tp1);
		RTS_AA (ur8_3x, it_r8, SK_REAL64, 3, tp1);
		RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
		RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
		RTS_CP(5629, "compute_error", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5629, "compute_error", arg2))(arg2, ur8_1x, ur8_2x, ur8_3x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(14);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5638, "distance_error", arg2, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5638, "distance_error", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5642, "min_distance", arg2, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5642, "min_distance", arg2))(arg2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
		RTHOOK(15);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5416, "set_is_transition_to_goal", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5416, "set_is_transition_to_goal", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(16);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CP(5631, "update_min_distance", arg2, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5631, "update_min_distance", arg2))(arg2);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
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
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {OBSTACLE_AVOIDANCE_CONTROLLER}.recover_obstacle */
void F974_8025 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "recover_obstacle";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
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
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	RTLU(SK_REAL64, &loc1);
	
	RTEAA(l_feature_name, 973, Current, 1, 5, 13703);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 13703);
	RTCC(arg1, 973, l_feature_name, 1, eif_new_type(934, 0x05), 0x05);
	RTCC(arg2, 973, l_feature_name, 2, eif_new_type(38, 0x05), 0x05);
	RTCC(arg3, 973, l_feature_name, 3, eif_new_type(976, 0x05), 0x05);
	RTCC(arg4, 973, l_feature_name, 4, eif_new_type(178, 0x05), 0x05);
	RTCC(arg5, 973, l_feature_name, 5, eif_new_type(941, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (Current, arg2);
	uarg3 = (EIF_BOOLEAN) RTS_OU (Current, arg3);
	uarg4 = (EIF_BOOLEAN) RTS_OU (Current, arg4);
	uarg5 = (EIF_BOOLEAN) RTS_OU (Current, arg5);
	uarg = uarg1 || uarg2 || uarg3 || uarg4 || uarg5;
	RTIV(Current, RTAL);
	for (;;) {
		int has_wait_condition = 0;
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
		RTCT(NULL, EX_PRE);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
			RTS_AC (0, arg3, tp1);
			RTS_CF(1416, "is_obstacle_in_front", arg3, tp1, ub1x);
			tb3 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg3));
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1416, "is_obstacle_in_front", arg3))(arg3)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) !tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5411, "is_boundary_following", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5411, "is_boundary_following", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = tb3;
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
		has_wait_condition = uarg3 || uarg1 || uarg2;
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
		RTS_CF(5412, "is_recover_obstacle", arg1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5412, "is_recover_obstacle", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		ub1 = (EIF_BOOLEAN) 0;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5417, "set_is_recover_obstacle", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5417, "set_is_recover_obstacle", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(4);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5416, "set_is_transition_to_goal", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5416, "set_is_transition_to_goal", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(5);
		RTDBGAA(Current, dtype, 5736, 0x20000000, 1); /* turning_power */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		*(EIF_REAL_64 *)(Current + RTWA(5736, dtype)) = (EIF_REAL_64) tr8_1;
		if (
			WDBG(973, (char *) 0)
		) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			tr2 = RTMS_EX_H("RECOVER OBSTACLE\012",17,1657511946);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(7);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5736, dtype));
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(5473, "recover_turning_power_max", arg5, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5473, "recover_turning_power_max", arg5))(arg5)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5736, 0x20000000, 1); /* turning_power */
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(5474, "recover_turning_power_increment", arg5, tp1, ur8_1x);
			tr8_2 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5474, "recover_turning_power_increment", arg5))(arg5)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		(*(EIF_REAL_64 *)(Current + RTWA(5736, dtype))) += tr8_2;
	}
	RTHOOK(9);
	RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5736, dtype));
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(5475, "recover_turning_power_power", arg5, tp1, ur8_1x);
		tr8_2 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5475, "recover_turning_power_power", arg5))(arg5)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_2;
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = tr8_1;
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4428, "power", tr1))(tr1, ur8_1x)).it_r8);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(5476, "recover_turning_power_multiplicator", arg5, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5476, "recover_turning_power_multiplicator", arg5))(arg5)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (tr8_2 * tr8_1);
	RTHOOK(10);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
		RTS_AC (0, arg5, tp1);
		RTS_CF(5477, "recover_local_angular_speed_threshold", arg5, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg5));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5477, "recover_local_angular_speed_threshold", arg5))(arg5)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_BOOLEAN) (loc1 < tr8_1)) {
		RTHOOK(11);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(5478, "recover_local_anti_collision_forward_speed", arg5, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5478, "recover_local_anti_collision_forward_speed", arg5))(arg5)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ur1 = RTCCL(arg3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5728, "get_wall_position", tr1))(tr1, ur1x)).it_i4);
		tr8_2 = (EIF_REAL_64) ((EIF_INTEGER_32) -ti4_1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(5479, "recover_local_anti_collision_angular_speed_multiplicator", arg5, tp1, ur8_2x);
			tr8_3 = (ur8_2x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5479, "recover_local_anti_collision_angular_speed_multiplicator", arg5))(arg5)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_2 = (EIF_REAL_64) (tr8_2 * tr8_3);
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
	} else {
		RTHOOK(12);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (0, arg5, tp1);
			RTS_CF(5471, "boundary_following_speed", arg5, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5471, "boundary_following_speed", arg5))(arg5)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		ur1 = RTCCL(arg3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5728, "get_wall_position", tr1))(tr1, ur1x)).it_i4);
		tr8_2 = (EIF_REAL_64) (ti4_1);
		ur8_2 = (EIF_REAL_64) (tr8_2 * loc1);
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
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {OBSTACLE_AVOIDANCE_CONTROLLER}.transition_to_goal */
void F974_8026 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "transition_to_goal";
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
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
	
	RTEAA(l_feature_name, 973, Current, 0, 6, 13704);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 13704);
	RTCC(arg1, 973, l_feature_name, 1, eif_new_type(934, 0x05), 0x05);
	RTCC(arg2, 973, l_feature_name, 2, eif_new_type(38, 0x05), 0x05);
	RTCC(arg3, 973, l_feature_name, 3, eif_new_type(78, 0x05), 0x05);
	RTCC(arg4, 973, l_feature_name, 4, eif_new_type(976, 0x05), 0x05);
	RTCC(arg5, 973, l_feature_name, 5, eif_new_type(178, 0x05), 0x05);
	RTCC(arg6, 973, l_feature_name, 6, eif_new_type(941, 0x05), 0x05);
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
		tb3 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CF(5412, "is_recover_obstacle", arg1, tp1, ub1x);
			tb4 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5412, "is_recover_obstacle", arg1))(arg1)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_BOOLEAN) !tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5413, "is_transition_to_goal", arg1, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5413, "is_transition_to_goal", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(5414, "is_goal_unreachable", arg1, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5414, "is_goal_unreachable", arg1))(arg1)).it_b);
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
		RTS_CF(5411, "is_boundary_following", arg1, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5411, "is_boundary_following", arg1))(arg1)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(3);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5419, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5419, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(4);
		ub1 = (EIF_BOOLEAN) 1;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (1, arg1, tp1);
			RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
			RTS_CP(5416, "set_is_transition_to_goal", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5416, "set_is_transition_to_goal", arg1))(arg1, ub1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (
			WDBG(973, (char *) 0)
		) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = RTMS_EX_H("TRANSITION TO GOAL\012",19,645371914);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(6);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
		RTS_AC (0, arg4, tp1);
		RTS_CF(1416, "is_obstacle_in_front", arg4, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg4));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1416, "is_obstacle_in_front", arg4))(arg4)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
		RTHOOK(7);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (0, arg6, tp1);
			RTS_CF(5471, "boundary_following_speed", arg6, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5471, "boundary_following_speed", arg6))(arg6)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ur1 = RTCCL(arg4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5728, "get_wall_position", tr1))(tr1, ur1x)).it_i4);
		tr8_2 = (EIF_REAL_64) ((EIF_INTEGER_32) -ti4_1);
		ur8_2 = tr8_2;
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
			RTS_AC (2, arg5, tp1);
			RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
			RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
			RTS_CP(1948, "set_velocity", arg5, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg5));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1948, "set_velocity", arg5))(arg5, ur8_1x, ur8_2x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(8);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (0, arg1, tp1);
			RTS_CP(5419, "clear_all_states", arg1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5419, "clear_all_states", arg1))(arg1);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
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
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ub1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {OBSTACLE_AVOIDANCE_CONTROLLER}.turning_power */
EIF_TYPED_VALUE F974_8027 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5736,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.obst_wall_heading */
EIF_TYPED_VALUE F974_8028 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5737,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.starting_x */
EIF_TYPED_VALUE F974_8029 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5738,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.starting_y */
EIF_TYPED_VALUE F974_8030 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5739,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.obstacle_sig */
EIF_TYPED_VALUE F974_8031 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5740,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.obstacle_position */
EIF_TYPED_VALUE F974_8032 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5741,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.last_boundary_following_state */
EIF_TYPED_VALUE F974_8033 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5742,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.last_recover_obstacle_state */
EIF_TYPED_VALUE F974_8034 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5743,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.same_obstacle */
EIF_TYPED_VALUE F974_8035 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5744,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.last_recover_state */
EIF_TYPED_VALUE F974_8036 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5745,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_CONTROLLER}.left_radius */
EIF_TYPED_VALUE F974_8037 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5746,Dtype(Current)));
	return r;
}


void EIF_Minit974 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
