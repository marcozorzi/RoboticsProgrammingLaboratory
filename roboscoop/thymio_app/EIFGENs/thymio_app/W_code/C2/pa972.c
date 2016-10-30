/*
 * Code for class PATH_PLANNING_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F972_8014(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F972_8015(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit972(void);

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

/* {PATH_PLANNING_CONTROLLER}.make */
void F972_8014 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 971, Current, 0, 1, 13683);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(971, Current, 13683);
	RTCC(arg1, 971, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 1174, 0xF8000026, 0); /* stop_signaler */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1174, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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
#undef arg1
}

/* {PATH_PLANNING_CONTROLLER}.find_path */
void F972_8015 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "find_path";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(24);
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
	RTLR(10,loc11);
	RTLR(11,loc9);
	RTLR(12,loc16);
	RTLR(13,loc17);
	RTLR(14,loc14);
	RTLR(15,loc15);
	RTLR(16,loc10);
	RTLR(17,ur1);
	RTLR(18,ur2);
	RTLR(19,loc13);
	RTLR(20,loc12);
	RTLR(21,ur3);
	RTLR(22,ur4);
	RTLR(23,tr3);
	RTLIU(24);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_REF,&arg6);
	RTLU(SK_REF,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	
	RTEAA(l_feature_name, 971, Current, 17, 7, 13684);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 13684);
	RTCC(arg1, 971, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	RTCC(arg2, 971, l_feature_name, 2, eif_new_type(949, 0x05), 0x05);
	RTCC(arg3, 971, l_feature_name, 3, eif_new_type(173, 0x05), 0x05);
	RTCC(arg4, 971, l_feature_name, 4, eif_new_type(933, 0x05), 0x05);
	RTCC(arg5, 971, l_feature_name, 5, eif_new_type(53, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,337,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg6, 971, l_feature_name, 6, typres0, 0x05);
	}
	RTCC(arg7, 971, l_feature_name, 7, eif_new_type(939, 0x05), 0x05);
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
		tb4 = '\0';
		tb5 = '\0';
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
			RTS_AC (0, arg2, tp1);
			RTS_CF(5558, "is_done_exploring", arg2, tp1, ub1x);
			tb6 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5558, "is_done_exploring", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (tb6) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
				RTS_AC (0, arg3, tp1);
				RTS_CF(1910, "state", arg3, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg3));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(1,1);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (0, tr1, tp1);
				RTS_CF(963, "data", tr1, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(963, "data", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
			tb5 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb5) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(5548, "is_at_goal", arg2, tp1, ub1x);
				tb5 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5548, "is_at_goal", arg2))(arg2)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (0, arg1, tp1);
				RTS_CF(783, "is_stop_requested", arg1, tp1, ub1x);
				tb4 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(783, "is_stop_requested", arg1))(arg1)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(5550, "is_publishing_path", arg2, tp1, ub1x);
				tb3 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5550, "is_publishing_path", arg2))(arg2)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(5551, "is_path_ready", arg2, tp1, ub1x);
				tb2 = (ub1x.it_b);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5551, "is_path_ready", arg2))(arg2)).it_b);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		has_wait_condition = uarg2 || uarg3 || uarg1;
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
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CF(5548, "is_at_goal", arg2, tp1, ub1x);
		tb1 = (ub1x.it_b);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5548, "is_at_goal", arg2))(arg2)).it_b);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if (tb1) {
	}
	RTHOOK(3);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CP(5573, "clear_all_states", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg2))(arg2);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(4);
	ub1 = (EIF_BOOLEAN) 1;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
		RTS_CP(5563, "set_is_finding_path", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5563, "set_is_finding_path", arg2))(arg2, ub1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(5);
	RTDBGAL(Current, 11, 0xF80003BD, 0, 0); /* loc11 */
	tr1 = RTLN(eif_new_type(957, 0x01).id);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
		RTS_AC (0, arg7, tp1);
		RTS_CF(5466, "connection", arg7, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg7));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5466, "connection", arg7))(arg7)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5598, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(5,1);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 9, 0xF80003A2, 0, 0); /* loc9 */
	tr1 = RTLN(eif_new_type(930, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(Current, 16, 0xF8000144, 0, 0); /* loc16 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,324,0xFF01,239,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(7,1);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(Current, 17, 0xF8000144, 0, 0); /* loc17 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,324,0xFF01,239,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3901, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(8,1);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(Current, 14, 0xF80003BB, 0, 0); /* loc14 */
	tr1 = RTLN(eif_new_type(955, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5592, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	loc14 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(Current, 15, 0xF80003B8, 0, 0); /* loc15 */
	tr1 = RTLN(eif_new_type(952, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5589, Dtype(tr1)))(tr1);
	RTNHOOK(10,1);
	loc15 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	RTDBGAL(Current, 1, 0x20000000, 1, 0); /* loc1 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1910, "state", arg3, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(11,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(11,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(819, "resolution", tr2, tp1, ur4_1x);
		tr4_1 = (ur4_1x.it_r4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(819, "resolution", tr2))(tr2)).it_r4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr8_1 = (EIF_REAL_64) (tr4_1);
	loc1 = (EIF_REAL_64) tr8_1;
	RTHOOK(12);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1910, "state", arg3, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(12,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(12,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(820, "width", tr2, tp1, uu4_1x);
		tu4_1 = (uu4_1x.it_n4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(820, "width", tr2))(tr2)).it_n4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(12,3);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(13);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(1910, "state", arg3, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1910, "state", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(13,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(962, "info", tr1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(962, "info", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(13,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(821, "height", tr2, tp1, uu4_1x);
		tu4_1 = (uu4_1x.it_n4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(821, "height", tr2))(tr2)).it_n4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(13,3);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(14);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
		RTS_AC (0, arg7, tp1);
		RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg7));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) ((EIF_REAL_64) (loc3) /  (EIF_REAL_64) (ti4_1));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4422, "floor", tr1))(tr1)).it_i4);
	ui4_1 = ti4_2;
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
		RTS_AC (0, arg7, tp1);
		RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_2x);
		ti4_1 = (ui4_2x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg7));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	tr1 = RTLN(eif_new_type(258, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) ((EIF_REAL_64) (loc2) /  (EIF_REAL_64) (ti4_1));
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4422, "floor", tr1))(tr1)).it_i4);
	ui4_2 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5599, "save_values", loc11))(loc11, ui4_1x, ui4_2x);
	RTHOOK(15);
	RTDBGAL(Current, 10, 0xF8000052, 0, 0); /* loc10 */
	ur1 = RTCCL(arg3);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
		RTS_AC (0, arg7, tp1);
		RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg7));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ui4_1 = ti4_1;
	ur2 = RTCCL(loc11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5393, "build", loc9))(loc9, ur1x, ui4_1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	ur1 = RTCCL(arg3);
	ur2 = RTCCL(loc10);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
		RTS_AC (0, arg7, tp1);
		RTS_CF(5464, "inflation_radius", arg7, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg7));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5464, "inflation_radius", arg7))(arg7)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_1 = tr8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5394, "start", loc9))(loc9, ur1x, ur2x, ur8_1x);
	RTHOOK(17);
	RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
		RTS_AC (0, arg6, tp1);
		RTS_CF(2199, "count", arg6, tp1, ui4_1x);
		ti4_1 = (ui4_1x.it_i4);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg6));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", arg6))(arg6)).it_i4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc8 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(18);
		if ((EIF_BOOLEAN) (loc8 < ((EIF_INTEGER_32) 1L))) break;
		RTHOOK(19);
		if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(20);
			RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (0, arg5, tp1);
				RTS_CF(898, "x", arg5, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", arg5))(arg5)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_1x);
				ti4_1 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tr8_2 = (EIF_REAL_64) (ti4_1);
			tr1 = RTLN(eif_new_type(258, 0x00).id);
			*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) (loc1 * tr8_2))));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4422, "floor", tr1))(tr1)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(21);
			RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg5)) && !(EIF_IS_PASSIVE (arg5))) {
				RTS_AC (0, arg5, tp1);
				RTS_CF(899, "y", arg5, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg5));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", arg5))(arg5)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_1x);
				ti4_1 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tr8_2 = (EIF_REAL_64) (ti4_1);
			tr1 = RTLN(eif_new_type(258, 0x00).id);
			*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) (loc1 * tr8_2))));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4422, "floor", tr1))(tr1)).it_i4);
			loc7 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(22);
			RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
			ui4_1 = (EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 1L));
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (1, arg6, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(2183, "at", arg6, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg6))(arg6, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(22,1);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (0, tr1, tp1);
				RTS_CF(898, "x", tr1, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", tr1))(tr1)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_1x);
				ti4_1 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tr8_2 = (EIF_REAL_64) (ti4_1);
			tr1 = RTLN(eif_new_type(258, 0x00).id);
			*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) (loc1 * tr8_2))));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4422, "floor", tr1))(tr1)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(23);
			RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
			ui4_1 = (EIF_INTEGER_32) (loc8 - ((EIF_INTEGER_32) 1L));
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
				RTS_AC (1, arg6, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(2183, "at", arg6, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg6));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg6))(arg6, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(23,1);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (0, tr1, tp1);
				RTS_CF(899, "y", tr1, tp1, ur8_1x);
				tr8_1 = (ur8_1x.it_r8);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", tr1))(tr1)).it_r8);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
				RTS_AC (0, arg7, tp1);
				RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_1x);
				ti4_1 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg7));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			tr8_2 = (EIF_REAL_64) (ti4_1);
			tr1 = RTLN(eif_new_type(258, 0x00).id);
			*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) (loc1 * tr8_2))));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4422, "floor", tr1))(tr1)).it_i4);
			loc7 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(24);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		ui4_1 = loc8;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (1, arg6, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2183, "at", arg6, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg6))(arg6, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(24,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(898, "x", tr1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", tr1))(tr1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (0, arg7, tp1);
			RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tr8_2 = (EIF_REAL_64) (ti4_1);
		tr1 = RTLN(eif_new_type(258, 0x00).id);
		*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) (loc1 * tr8_2))));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4422, "floor", tr1))(tr1)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(25);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		ui4_1 = loc8;
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg6)) && !(EIF_IS_PASSIVE (arg6))) {
			RTS_AC (1, arg6, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(2183, "at", arg6, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg6));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg6))(arg6, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(25,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (0, tr1, tp1);
			RTS_CF(899, "y", tr1, tp1, ur8_1x);
			tr8_1 = (ur8_1x.it_r8);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", tr1))(tr1)).it_r8);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg7)) && !(EIF_IS_PASSIVE (arg7))) {
			RTS_AC (0, arg7, tp1);
			RTS_CF(5465, "scaling_factor", arg7, tp1, ui4_1x);
			ti4_1 = (ui4_1x.it_i4);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg7));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5465, "scaling_factor", arg7))(arg7)).it_i4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		tr8_2 = (EIF_REAL_64) (ti4_1);
		tr1 = RTLN(eif_new_type(258, 0x00).id);
		*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) ((EIF_REAL_64) (loc1 * tr8_2))));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4422, "floor", tr1))(tr1)).it_i4);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(26);
		RTDBGAL(Current, 13, 0xF80000EF, 0, 0); /* loc13 */
		ui4_1 = loc4;
		ui4_2 = loc5;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", loc10))(loc10, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc13 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(27);
		RTDBGAL(Current, 12, 0xF80000EF, 0, 0); /* loc12 */
		ui4_1 = loc6;
		ui4_2 = loc7;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", loc10))(loc10, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc12 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(28);
		ur1 = RTCCL(loc14);
		ur2 = RTCCL(loc12);
		ur3 = RTCCL(loc13);
		ur4 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5588, "search_path", loc15))(loc15, ur1x, ur2x, ur3x, ur4x);
		RTHOOK(29);
		ur1 = RTCCL(loc16);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2304, "append", loc17))(loc17, ur1x);
		RTHOOK(30);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2156, "wipe_out", loc16))(loc16);
		RTHOOK(31);
		RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
		loc8--;
	}
	RTHOOK(32);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", loc17))(loc17)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(33);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(33,1);
		tr2 = RTMS_EX_H("GOAL UNREACHABLE! \012",19,1257184266);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	} else {
		RTHOOK(34);
		ur1 = RTCCL(loc17);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
			RTS_AC (1, arg4, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5410, "publish_path", arg4, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5410, "publish_path", arg4))(arg4, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (
			WDBG(971, (char *) 0)
		) {
			RTHOOK(35);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(35,1);
			tr2 = RTMS_EX_H("path_total size: ",17,92612384);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2199, "count", loc17))(loc17)).it_i4);
			RTNHOOK(35,2);
			tr3 = c_outi(ti4_1);
			ur1 = RTCCL(tr3);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr2 = RTMS_EX_H(" \012",2,8202);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
			RTHOOK(36);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(36,1);
			tr2 = RTMS_EX_H("Path published \012",16,25091338);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(37);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CP(5573, "clear_all_states", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5573, "clear_all_states", arg2))(arg2);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(38);
	ub1 = (EIF_BOOLEAN) 1;
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AA (ub1x, it_b, SK_BOOL, 1, tp1);
		RTS_CP(5565, "set_is_path_ready", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5565, "set_is_path_ready", arg2))(arg2, ub1x);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(26);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur8_1
#undef ur4_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef ub1
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit972 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
