/*
 * Code for class APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F978_8088(EIF_REFERENCE);
extern void EIF_Minit978(void);

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

/* {APP}.make */
void F978_8088 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(21);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc5);
	RTLR(7,loc3);
	RTLR(8,loc8);
	RTLR(9,loc4);
	RTLR(10,tr3);
	RTLR(11,ur2);
	RTLR(12,ur3);
	RTLR(13,loc7);
	RTLR(14,loc9);
	RTLR(15,loc10);
	RTLR(16,loc11);
	RTLR(17,loc6);
	RTLR(18,tr4);
	RTLR(19,ur4);
	RTLR(20,loc12);
	RTLIU(21);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 977, Current, 12, 0, 13757);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(977, Current, 13757);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H("started \012",9,1723010570);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800001D, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(193, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2548, "roboscoop_node", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2520, dtype))(Current, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF800001C, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(28, 0x05).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(567, Dtype(tr1), tp1);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3747, dtype))(Current, ur1x);
	RTHOOK(6);
	RTDBGAL(Current, 5, 0xF80003B5, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(949, 0x05).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(32, Dtype(tr1), tp1);
	RTNHOOK(6,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(Current, 3, 0xF80003B6, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(950, 0x05).id);
	RTS_PA (tr1);
	RTS_AC (0, tr1, tp1);
	RTS_CC(5574, Dtype(tr1), tp1);
	RTNHOOK(7,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(Current, 1, 0xF80003B6, 0, 0); /* loc8 */
	loc8 = (EIF_REFERENCE) RTCCL(loc3);
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
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3713, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2813, "argument", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(9,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4878, "to_string_8", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, loc8)) && !(EIF_IS_PASSIVE (loc8))) {
			RTS_AC (1, loc8, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(5575, "initialize", loc8, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc8));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5575, "initialize", loc8))(loc8, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTHOOK(10);
		RTDBGAL(Current, 4, 0xF80003C8, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(968, 0x05).id);
		RTS_PA (tr1);
		ur1 = RTCCL(loc3);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc8)) && !(EIF_IS_PASSIVE (loc8))) {
			RTS_AC (0, loc8, tp1);
			RTS_CF(5579, "general_parameters", loc8, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc8));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(10,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
			RTS_AC (0, tr2, tp1);
			RTS_CF(5531, "objects_point_msg", tr2, tp1, up1x);
			tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr2));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5531, "objects_point_msg", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur2 = RTCCL(tr3);
		ur3 = RTCCL(loc5);
		RTS_AC (3, tr1, tp1);
		RTS_AS (ur3x, it_r, SK_REF, 3, tp1);
		RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CC(5695, Dtype(tr1), tp1);
		RTNHOOK(10,2);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		RTDBGAL(Current, 7, 0xF80003C6, 0, 0); /* loc7 */
		tr1 = RTLN(eif_new_type(966, 0x05).id);
		RTS_PA (tr1);
		ur1 = RTCCL(loc5);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc8)) && !(EIF_IS_PASSIVE (loc8))) {
			RTS_AC (0, loc8, tp1);
			RTS_CF(5587, "localization_parameters", loc8, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc8));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5587, "localization_parameters", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur2 = RTCCL(tr2);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc8)) && !(EIF_IS_PASSIVE (loc8))) {
			RTS_AC (0, loc8, tp1);
			RTS_CF(5579, "general_parameters", loc8, tp1, up1x);
			tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc8));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur3 = RTCCL(tr3);
		RTS_AC (3, tr1, tp1);
		RTS_AS (ur3x, it_r, SK_REF, 3, tp1);
		RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CC(5675, Dtype(tr1), tp1);
		RTNHOOK(11,1);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(12);
	RTDBGAL(Current, 2, 0xF80003C8, 0, 0); /* loc9 */
	loc9 = (EIF_REFERENCE) RTCCL(loc4);
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
		RTHOOK(13);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, loc9)) && !(EIF_IS_PASSIVE (loc9))) {
			RTS_AC (0, loc9, tp1);
			RTS_CP(5698, "start", loc9, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc9));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5698, "start", loc9))(loc9);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(14);
	RTDBGAL(Current, 3, 0xF80003C6, 0, 0); /* loc10 */
	loc10 = (EIF_REFERENCE) RTCCL(loc7);
	{
		int uarg;
		int uarg1 = RTS_OU (Current, loc10);
		RTS_SD;
		uarg = uarg1;
		if (uarg) {
			RTS_SRC (Current);
			if (uarg1) RTS_RS (Current, loc10);
			RTS_RW (Current);
		}
		RTHOOK(15);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, loc10)) && !(EIF_IS_PASSIVE (loc10))) {
			RTS_AC (0, loc10, tp1);
			RTS_CP(1395, "start", loc10, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc10));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1395, "start", loc10))(loc10);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(16);
	RTDBGAL(Current, 4, 0xF80003B6, 0, 0); /* loc11 */
	loc11 = (EIF_REFERENCE) RTCCL(loc3);
	{
		int uarg;
		int uarg1 = RTS_OU (Current, loc11);
		RTS_SD;
		uarg = uarg1;
		if (uarg) {
			RTS_SRC (Current);
			if (uarg1) RTS_RS (Current, loc11);
			RTS_RW (Current);
		}
		RTHOOK(17);
		RTDBGAL(Current, 6, 0xF80003C7, 0, 0); /* loc6 */
		tr1 = RTLN(eif_new_type(967, 0x05).id);
		RTS_PA (tr1);
		ur1 = RTCCL(loc5);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc11)) && !(EIF_IS_PASSIVE (loc11))) {
			RTS_AC (0, loc11, tp1);
			RTS_CF(5579, "general_parameters", loc11, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc11));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(17,1);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, tr2)) && !(EIF_IS_PASSIVE (tr2))) {
			RTS_AC (0, tr2, tp1);
			RTS_CF(5530, "goals_point_msg", tr2, tp1, up1x);
			tr3 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr2));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5530, "goals_point_msg", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur2 = RTCCL(tr3);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc11)) && !(EIF_IS_PASSIVE (loc11))) {
			RTS_AC (0, loc11, tp1);
			RTS_CF(5579, "general_parameters", loc11, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc11));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5579, "general_parameters", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur3 = RTCCL(tr2);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, loc11)) && !(EIF_IS_PASSIVE (loc11))) {
			RTS_AC (0, loc11, tp1);
			RTS_CF(5585, "path_planning_parameters", loc11, tp1, up1x);
			tr4 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc11));
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5585, "path_planning_parameters", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur4 = RTCCL(tr4);
		RTS_AC (4, tr1, tp1);
		RTS_AS (ur4x, it_r, SK_REF, 4, tp1);
		RTS_AS (ur3x, it_r, SK_REF, 3, tp1);
		RTS_AS (ur2x, it_r, SK_REF, 2, tp1);
		RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
		RTS_CC(5685, Dtype(tr1), tp1);
		RTNHOOK(17,2);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(18);
	RTDBGAL(Current, 5, 0xF80003C7, 0, 0); /* loc12 */
	loc12 = (EIF_REFERENCE) RTCCL(loc6);
	{
		int uarg;
		int uarg1 = RTS_OU (Current, loc12);
		RTS_SD;
		uarg = uarg1;
		if (uarg) {
			RTS_SRC (Current);
			if (uarg1) RTS_RS (Current, loc12);
			RTS_RW (Current);
		}
		RTHOOK(19);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, loc12)) && !(EIF_IS_PASSIVE (loc12))) {
			RTS_AC (0, loc12, tp1);
			RTS_CP(1395, "start", loc12, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(loc12));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1395, "start", loc12))(loc12);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		if (uarg) RTS_SRD (Current);
	}
	RTHOOK(20);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(20,1);
	tr2 = RTMS_EX_H("OK OK \012",7,437910794);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(431, "put_string", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
}

void EIF_Minit978 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
