/*
 * Code for class THYMIO_ROBOT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F969_7986(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F969_7987(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7988(EIF_REFERENCE);
extern void F969_7989(EIF_REFERENCE);
extern void F969_7990(EIF_REFERENCE);
extern void F969_7991(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F969_7992(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F969_7993(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7994(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7999(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8000(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8001(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8002(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8003(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8004(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8005(EIF_REFERENCE);
extern void EIF_Minit969(void);

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

/* {THYMIO_ROBOT}.make_with_parameters */
void F969_7986 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_with_parameters";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
#define arg3 arg3x.it_r
	EIF_BOOLEAN uarg3;
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
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	
	RTEAA(l_feature_name, 968, Current, 2, 3, 13653);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13653);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(950, 0x05), 0x05);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,337,0xFF01,53,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 968, l_feature_name, 2, typres0, 0x05);
	}
	RTCC(arg3, 968, l_feature_name, 3, eif_new_type(949, 0x05), 0x05);
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
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H("x: ",3,7879200);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
		RTS_CF(2183, "at", arg2, tp1, up2x);
		tr3 = (up2x, (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg2))(arg2, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,2);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(898, "x", tr3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(898, "x", tr3))(tr3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,3);
	tr3 = c_outr64(tr8_1);
	ur1 = RTCCL(tr3);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr2 = RTMS_EX_H(" | y: ",6,608682528);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (1, arg2, tp1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
		RTS_CF(2183, "at", arg2, tp1, up2x);
		tr3 = (up2x, (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", arg2))(arg2, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,4);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (0, tr3, tp1);
		RTS_CF(899, "y", tr3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(899, "y", tr3))(tr3)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(1,5);
	tr3 = c_outr64(tr8_1);
	ur1 = RTCCL(tr3);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr2 = RTMS_EX_H("\012",1,10);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4904, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5709, 0xF800004E, 0); /* odometry_signaler */
	tr1 = RTLNSMART(RTWCT(5709, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5454, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(1261, Dtype(tr1), tp1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5709, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5711, 0xF80003D0, 0); /* range_sensors */
	tr1 = RTLNSMART(RTWCT(5711, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5431, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5771, Dtype(tr1), tp1);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5711, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5712, 0xF80003BF, 0); /* ground_sensors */
	tr1 = RTLNSMART(RTWCT(5712, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5432, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5607, Dtype(tr1), tp1);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5712, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5713, 0xF80003C3, 0); /* diff_drive */
	tr1 = RTLNSMART(RTWCT(5713, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5430, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5643, Dtype(tr1), tp1);
	RTNHOOK(5,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5713, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5702, 0xF80003B6, 0); /* parameters */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5702, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5704, 0xF80003B5, 0); /* robot_signaler */
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + RTWA(5704, dtype)) = (EIF_REFERENCE) RTCCL(arg3);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5705, 0xF80003A7, 0); /* path_sig */
	tr1 = RTLNSMART(RTWCT(5705, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(32, Dtype(tr1), tp1);
	RTNHOOK(8,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5705, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5706, 0xF80003C2, 0); /* go_to_goal_sig */
	tr1 = RTLNSMART(RTWCT(5706, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5579, "general_parameters", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(9,1);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(5519, "x_goal", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5519, "x_goal", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(9,2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (1, tr3, tp1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
		RTS_CF(2183, "at", tr3, tp1, ur8_1x);
		tr8_1 = (ur8_1x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", tr3))(tr3, ui4_1x)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5579, "general_parameters", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(9,3);
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
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5579, "general_parameters", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(9,4);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(5520, "y_goal", tr2, tp1, up1x);
		tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5520, "y_goal", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(9,5);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr3)) && !(EIF_IS_PASSIVE (tr3))) {
		RTS_AC (1, tr3, tp1);
		RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
		RTS_CF(2183, "at", tr3, tp1, ur8_2x);
		tr8_3 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr3));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2183, "at", tr3))(tr3, ui4_1x)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CF(5579, "general_parameters", arg1, tp1, up1x);
		tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTNHOOK(9,6);
	if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
		RTS_AC (0, tr2, tp1);
		RTS_CF(5518, "y_start", tr2, tp1, ur8_2x);
		tr8_4 = (ur8_2x.it_r8);
	} else {
		RTS_IMPERSONATE (RTS_PID(tr2));
		tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5518, "y_start", tr2))(tr2)).it_r8);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	ur8_2 = (EIF_REAL_64) (tr8_3 - tr8_4);
	RTS_AC (2, tr1, tp1);
	RTS_AA (ur8_2x, it_r8, SK_REAL64, 2, tp1);
	RTS_AA (ur8_1x, it_r8, SK_REAL64, 1, tp1);
	RTS_CC(5625, Dtype(tr1), tp1);
	RTNHOOK(9,7);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5706, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5707, 0xF80003A6, 0); /* obstacle_avoidance_signaler */
	tr1 = RTLNSMART(RTWCT(5707, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(32, Dtype(tr1), tp1);
	RTNHOOK(10,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5707, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 5708, 0xF8000026, 0); /* stop_signaler */
	tr1 = RTLNSMART(RTWCT(5708, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(782, Dtype(tr1), tp1);
	RTNHOOK(11,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5708, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 5703, 0xF800005D, 0); /* path_ros */
	tr1 = RTLNSMART(RTWCT(5703, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5449, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(1408, Dtype(tr1), tp1);
	RTNHOOK(12,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5703, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	RTDBGAA(Current, dtype, 5714, 0xF80003BE, 0); /* top_leds */
	tr1 = RTLNSMART(RTWCT(5714, dtype, Dftype(Current)).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5436, 936))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	RTS_AC (1, tr1, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5605, Dtype(tr1), tp1);
	RTNHOOK(13,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5714, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	RTDBGAA(Current, dtype, 5710, 0xF8000151, 0); /* goals */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(5710, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {THYMIO_ROBOT}.robot_base_size */
EIF_TYPED_VALUE F969_7987 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 0.11;
	return r;
}

/* {THYMIO_ROBOT}.default_linear_speed */
EIF_TYPED_VALUE F969_7988 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = (EIF_REAL_64) 0.080000000000000002;
	return r;
}

/* {THYMIO_ROBOT}.start */
void F969_7989 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE up5x = {{0}, SK_POINTER};
#define up5 up5x.it_p
	EIF_TYPED_VALUE up6x = {{0}, SK_POINTER};
#define up6 up6x.it_p
	EIF_TYPED_VALUE up7x = {{0}, SK_POINTER};
#define up7 up7x.it_p
	EIF_TYPED_VALUE up8x = {{0}, SK_POINTER};
#define up8 up8x.it_p
	EIF_TYPED_VALUE up9x = {{0}, SK_POINTER};
#define up9 up9x.it_p
	EIF_TYPED_VALUE up10x = {{0}, SK_POINTER};
#define up10 up10x.it_p
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
	EIF_TYPED_VALUE ur6x = {{0}, SK_REF};
#define ur6 ur6x.it_r
	EIF_TYPED_VALUE ur7x = {{0}, SK_REF};
#define ur7 ur7x.it_r
	EIF_TYPED_VALUE ur8x = {{0}, SK_REF};
#define ur8 ur8x.it_r
	EIF_TYPED_VALUE ur9x = {{0}, SK_REF};
#define ur9 ur9x.it_r
	EIF_TYPED_VALUE ur10x = {{0}, SK_REF};
#define ur10 ur10x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(25);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,tr4);
	RTLR(9,ur3);
	RTLR(10,tr5);
	RTLR(11,ur4);
	RTLR(12,tr6);
	RTLR(13,ur5);
	RTLR(14,tr7);
	RTLR(15,ur6);
	RTLR(16,tr8);
	RTLR(17,ur7);
	RTLR(18,tr9);
	RTLR(19,ur8);
	RTLR(20,tr10);
	RTLR(21,ur9);
	RTLR(22,loc2);
	RTLR(23,tr11);
	RTLR(24,ur10);
	RTLIU(25);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 968, Current, 3, 0, 13656);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13656);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80003B6, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5702, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	{
		int uarg;
		int uarg1 = RTS_OU (Current, loc3);
		RTS_SD;
		uarg = uarg1;
		if (uarg) {
			RTS_SRC (Current);
			if (uarg1) RTS_RS (Current, loc3);
			RTS_RW (Current);
		}
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80003C4, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(964, 0x05).id);
		RTS_PA (tr1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5709, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5713, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr3);
		tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5706, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
		ur3 = RTCCL(tr4);
		tr5 = ((up4x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5707, dtype))(Current)), (((up4x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up4x.it_r = RTBU(up4x))), (up4x.type = SK_POINTER), up4x.it_r);
		ur4 = RTCCL(tr5);
		tr6 = ((up5x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up5x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up5x.it_r = RTBU(up5x))), (up5x.type = SK_POINTER), up5x.it_r);
		ur5 = RTCCL(tr6);
		tr7 = ((up6x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5708, dtype))(Current)), (((up6x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up6x.it_r = RTBU(up6x))), (up6x.type = SK_POINTER), up6x.it_r);
		ur6 = RTCCL(tr7);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc3)) && !(EIF_IS_PASSIVE (loc3))) {
			RTS_AC (0, loc3, tp1);
			RTS_CF(5579, "general_parameters", loc3, tp1, up7x);
			tr8 = (up7x, (((up7x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up7x.it_r = RTBU(up7x))), (up7x.type = SK_POINTER), up7x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc3));
			tr8 = ((up7x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", loc3))(loc3)), (((up7x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up7x.it_r = RTBU(up7x))), (up7x.type = SK_POINTER), up7x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur7 = RTCCL(tr8);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc3)) && !(EIF_IS_PASSIVE (loc3))) {
			RTS_AC (0, loc3, tp1);
			RTS_CF(5581, "go_to_goal_parameters", loc3, tp1, up7x);
			tr9 = (up7x, (((up7x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up7x.it_r = RTBU(up7x))), (up7x.type = SK_POINTER), up7x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc3));
			tr9 = ((up7x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5581, "go_to_goal_parameters", loc3))(loc3)), (((up7x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up7x.it_r = RTBU(up7x))), (up7x.type = SK_POINTER), up7x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur8 = RTCCL(tr9);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc3)) && !(EIF_IS_PASSIVE (loc3))) {
			RTS_AC (0, loc3, tp1);
			RTS_CF(5583, "obstacle_avoidance_parameters", loc3, tp1, up7x);
			tr10 = (up7x, (((up7x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up7x.it_r = RTBU(up7x))), (up7x.type = SK_POINTER), up7x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc3));
			tr10 = ((up7x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5583, "obstacle_avoidance_parameters", loc3))(loc3)), (((up7x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up7x.it_r = RTBU(up7x))), (up7x.type = SK_POINTER), up7x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur9 = RTCCL(tr10);
		RTS_AC (9, tr1, tp1);
		RTS_AS (ur9x, it_r, SK_REF, 9, tp1);
		RTS_AS (ur8x, it_r, SK_REF, 8, tp1);
		RTS_AS (ur7x, it_r, SK_REF, 7, tp1);
		RTS_AS (ur6x, it_r, SK_REF, 6, tp1);
		RTS_AS (ur5x, it_r, SK_REF, 5, tp1);
		RTS_AS (ur4x, it_r, SK_REF, 4, tp1);
		RTS_AS (ur3x, it_r, SK_REF, 3, tp1);
		RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CC(5645, Dtype(tr1), tp1);
		RTNHOOK(2,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF80003C5, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(965, 0x05).id);
	RTS_PA (tr1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5706, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5707, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5704, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	ur3 = RTCCL(tr4);
	tr5 = ((up4x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5709, dtype))(Current)), (((up4x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up4x.it_r = RTBU(up4x))), (up4x.type = SK_POINTER), up4x.it_r);
	ur4 = RTCCL(tr5);
	tr6 = ((up5x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5708, dtype))(Current)), (((up5x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up5x.it_r = RTBU(up5x))), (up5x.type = SK_POINTER), up5x.it_r);
	ur5 = RTCCL(tr6);
	tr7 = ((up6x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5713, dtype))(Current)), (((up6x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up6x.it_r = RTBU(up6x))), (up6x.type = SK_POINTER), up6x.it_r);
	ur6 = RTCCL(tr7);
	tr8 = ((up7x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5710, dtype))(Current)), (((up7x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up7x.it_r = RTBU(up7x))), (up7x.type = SK_POINTER), up7x.it_r);
	ur7 = RTCCL(tr8);
	tr9 = ((up8x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5703, dtype))(Current)), (((up8x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up8x.it_r = RTBU(up8x))), (up8x.type = SK_POINTER), up8x.it_r);
	ur8 = RTCCL(tr9);
	tr10 = ((up9x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5702, dtype))(Current)), (((up9x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up9x.it_r = RTBU(up9x))), (up9x.type = SK_POINTER), up9x.it_r);
	ur9 = RTCCL(tr10);
	tr11 = ((up10x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5714, dtype))(Current)), (((up10x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up10x.it_r = RTBU(up10x))), (up10x.type = SK_POINTER), up10x.it_r);
	ur10 = RTCCL(tr11);
	RTS_AC (10, tr1, tp1);
	RTS_AS (ur10x, it_r, SK_REF, 10, tp1);
	RTS_AS (ur9x, it_r, SK_REF, 9, tp1);
	RTS_AS (ur8x, it_r, SK_REF, 8, tp1);
	RTS_AS (ur7x, it_r, SK_REF, 7, tp1);
	RTS_AS (ur6x, it_r, SK_REF, 6, tp1);
	RTS_AS (ur5x, it_r, SK_REF, 5, tp1);
	RTS_AS (ur4x, it_r, SK_REF, 4, tp1);
	RTS_AS (ur3x, it_r, SK_REF, 3, tp1);
	RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
	RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
	RTS_CC(5657, Dtype(tr1), tp1);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef up6
#undef up7
#undef up8
#undef up9
#undef up10
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ur6
#undef ur7
#undef ur8
#undef ur9
#undef ur10
}

/* {THYMIO_ROBOT}.stop */
void F969_7990 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13657);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13657);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5708, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5701, dtype))(Current, ur1x, ub1x);
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

/* {THYMIO_ROBOT}.sep_start */
void F969_7991 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "sep_start";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 2, 13658);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13658);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(964, 0x05), 0x05);
	RTCC(arg2, 968, l_feature_name, 2, eif_new_type(965, 0x05), 0x05);
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
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
		RTS_AC (0, arg1, tp1);
		RTS_CP(1395, "start", arg1, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg1));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1395, "start", arg1))(arg1);
		RTS_IMPERSONATE (RTS_PID(Current));
	}
	RTHOOK(2);
	if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
		RTS_AC (0, arg2, tp1);
		RTS_CP(1395, "start", arg2, tp1);
	} else {
		RTS_IMPERSONATE (RTS_PID(arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1395, "start", arg2))(arg2);
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {THYMIO_ROBOT}.sep_stop */
void F969_7992 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
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
	
	RTEAA(l_feature_name, 968, Current, 0, 2, 13659);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13659);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(38, 0x05), 0x05);
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

/* {THYMIO_ROBOT}.parameters */
EIF_TYPED_VALUE F969_7993 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5702,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.path_ros */
EIF_TYPED_VALUE F969_7994 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5703,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.robot_signaler */
EIF_TYPED_VALUE F969_7995 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5704,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.path_sig */
EIF_TYPED_VALUE F969_7996 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5705,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.go_to_goal_sig */
EIF_TYPED_VALUE F969_7997 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5706,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.obstacle_avoidance_signaler */
EIF_TYPED_VALUE F969_7998 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5707,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.stop_signaler */
EIF_TYPED_VALUE F969_7999 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5708,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.odometry_signaler */
EIF_TYPED_VALUE F969_8000 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5709,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.goals */
EIF_TYPED_VALUE F969_8001 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5710,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.range_sensors */
EIF_TYPED_VALUE F969_8002 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5711,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.ground_sensors */
EIF_TYPED_VALUE F969_8003 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5712,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.diff_drive */
EIF_TYPED_VALUE F969_8004 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5713,Dtype(Current)));
	return r;
}


/* {THYMIO_ROBOT}.top_leds */
EIF_TYPED_VALUE F969_8005 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5714,Dtype(Current)));
	return r;
}


void EIF_Minit969 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
