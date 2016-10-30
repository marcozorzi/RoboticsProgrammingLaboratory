/*
 * Code for class LIGHT_CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F971_8012(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F971_8013(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit971(void);

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

/* {LIGHT_CONTROLLER}.make */
void F971_8012 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 970, Current, 0, 1, 13681);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(970, Current, 13681);
	RTCC(arg1, 970, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
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

/* {LIGHT_CONTROLLER}.update_lights */
void F971_8013 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "update_lights";
	RTEX;
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
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
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,arg4);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL32, &loc1);
	
	RTEAA(l_feature_name, 970, Current, 1, 4, 13682);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(970, Current, 13682);
	RTCC(arg1, 970, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
	RTCC(arg2, 970, l_feature_name, 2, eif_new_type(949, 0x05), 0x05);
	RTCC(arg3, 970, l_feature_name, 3, eif_new_type(960, 0x05), 0x05);
	RTCC(arg4, 970, l_feature_name, 4, eif_new_type(25, 0x05), 0x05);
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
			RTS_CF(5551, "is_path_ready", arg2, tp1, ub1x);
			tb1 = (ub1x.it_b);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg2));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5551, "is_path_ready", arg2))(arg2)).it_b);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		has_wait_condition = uarg2;
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
	RTDBGAL(Current, 1, 0x18000000, 1, 0); /* loc1 */
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg3)) && !(EIF_IS_PASSIVE (arg3))) {
		RTS_AC (0, arg3, tp1);
		RTS_CF(5618, "value", arg3, tp1, up1x);
		tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg3));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5618, "value", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(2,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
		RTS_AC (0, tr1, tp1);
		RTS_CF(865, "data", tr1, tp1, ur4_1x);
		tr4_1 = (ur4_1x.it_r4);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr1));
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(865, "data", tr1))(tr1)).it_r4);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	loc1 = (EIF_REAL_32) tr4_1;
	RTHOOK(3);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(loc1 == tr4_1)) {
		RTHOOK(4);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
			RTS_AC (0, arg4, tp1);
			RTS_CP(543, "set_to_red", arg4, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(543, "set_to_red", arg4))(arg4);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	} else {
		RTHOOK(5);
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN) (loc1 > tr4_1)) {
			RTHOOK(6);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CP(544, "set_to_green", arg4, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(544, "set_to_green", arg4))(arg4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		} else {
			RTHOOK(7);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg4)) && !(EIF_IS_PASSIVE (arg4))) {
				RTS_AC (0, arg4, tp1);
				RTS_CP(550, "set_to_no_color", arg4, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg4));
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(550, "set_to_no_color", arg4))(arg4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
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
	RTLO(7);
	RTEE;
#undef up1
#undef ur4_1
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit971 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
