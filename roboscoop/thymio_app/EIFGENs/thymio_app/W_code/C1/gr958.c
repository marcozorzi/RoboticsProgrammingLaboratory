/*
 * Code for class GRID_CONNECTIVITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F958_7863(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F958_7864(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F958_7865(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F958_7866(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F958_7867(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7868(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7869(EIF_REFERENCE);
extern void F958_7870(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit958(void);

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

/* {GRID_CONNECTIVITY}.make */
void F958_7863 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 1, 13483);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(957, Current, 13483);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5603, 0x10000000, 1); /* kind */
	*(EIF_INTEGER_32 *)(Current + RTWA(5603, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GRID_CONNECTIVITY}.connect */
void F958_7864 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "connect";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 957, Current, 2, 1, 13484);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13484);
	RTCC(arg1, 957, l_feature_name, 1, eif_new_type(82, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(5);
			ur1 = RTCCL(arg1);
			ui4_1 = loc1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5604, dtype))(Current, ur1x, ui4_1x, ui4_2x);
			RTHOOK(6);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
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
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {GRID_CONNECTIVITY}.save_values */
void F958_7865 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "save_values";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 2, 13485);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13485);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* max_x */
	*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5602, 0x10000000, 1); /* max_y */
	*(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype)) = (EIF_INTEGER_32) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {GRID_CONNECTIVITY}.remove_obstacles_from_graph */
void F958_7866 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "remove_obstacles_from_graph";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_r
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_8 ti1_1;
	RTCDT;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 957, Current, 2, 2, 13486);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13486);
	RTCC(arg1, 957, l_feature_name, 1, eif_new_type(82, 0x05), 0x05);
	RTCC(arg2, 957, l_feature_name, 2, eif_new_type(173, 0x05), 0x05);
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
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(5);
			ui4_1 = loc1;
			ui4_2 = loc2;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (2, arg2, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1911, "occupancy", arg2, tp1, ui1_1x);
				ti1_1 = (ui1_1x.it_i1);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1911, "occupancy", arg2))(arg2, ui4_1x, ui4_2x)).it_i1);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(5,1);
			ti4_3 = (EIF_INTEGER_32) ti1_1;
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg2)) && !(EIF_IS_PASSIVE (arg2))) {
				RTS_AC (0, arg2, tp1);
				RTS_CF(1913, "occupancy_threshold", arg2, tp1, ui4_1x);
				ti4_4 = (ui4_1x.it_i4);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg2));
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1913, "occupancy_threshold", arg2))(arg2)).it_i4);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			if ((EIF_BOOLEAN) (ti4_3 > ti4_4)) {
				RTHOOK(6);
				ui4_1 = loc1;
				ui4_2 = loc2;
				ui4_3 = ((EIF_INTEGER_32) 1L);
				if ((EIF_IS_DIFFERENT_PROCESSOR (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
					RTS_AC (3, arg1, tp1);
					RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
					RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
					RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
					RTS_CP(1291, "add_obstacle_by_index", arg1, tp1);
				} else {
					RTS_IMPERSONATE (RTS_PID(arg1));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1291, "add_obstacle_by_index", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x);
					RTS_IMPERSONATE (RTS_PID(Current));
				}
			}
			RTHOOK(7);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(8);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
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
	RTLO(6);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui1_1
#undef arg2
#undef arg1
}

/* {GRID_CONNECTIVITY}.max_x */
EIF_TYPED_VALUE F958_7867 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5601,Dtype(Current)));
	return r;
}


/* {GRID_CONNECTIVITY}.max_y */
EIF_TYPED_VALUE F958_7868 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5602,Dtype(Current)));
	return r;
}


/* {GRID_CONNECTIVITY}.kind */
EIF_TYPED_VALUE F958_7869 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5603,Dtype(Current)));
	return r;
}


/* {GRID_CONNECTIVITY}.connect_nodes */
void F958_7870 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "connect_nodes";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 3, 13490);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13490);
	RTCC(arg1, 957, l_feature_name, 1, eif_new_type(82, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTCT(NULL, EX_PRE);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype));
	RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 8L))), label_1);
	RTCK;
	RTJB;
label_1:
	RTCF;
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype));
	if ((EIF_BOOLEAN) (arg2 < ti4_1)) {
		RTHOOK(3);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(3,1);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ui4_2 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 0L));
		ui4_3 = ((EIF_INTEGER_32) 1L);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur1 = RTCCL(tr2);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (1, tr1, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(1296, "connect", tr1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", tr1))(tr1, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(5);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(5,1);
		ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		ui4_2 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 0L));
		ui4_3 = ((EIF_INTEGER_32) 1L);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur1 = RTCCL(tr2);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (1, tr1, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(1296, "connect", tr1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", tr1))(tr1, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype));
	if ((EIF_BOOLEAN) (arg3 < ti4_1)) {
		RTHOOK(7);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(7,1);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 0L));
		ui4_2 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
		ui4_3 = ((EIF_INTEGER_32) 1L);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur1 = RTCCL(tr2);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (1, tr1, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(1296, "connect", tr1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", tr1))(tr1, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(9);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		RTNHOOK(9,1);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 0L));
		ui4_2 = (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L));
		ui4_3 = ((EIF_INTEGER_32) 1L);
		if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
			RTS_AC (3, arg1, tp1);
			RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
			RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
			RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
			RTS_CF(1289, "node_at", arg1, tp1, up1x);
			tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTS_IMPERSONATE (RTS_PID(arg1));
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
		ur1 = RTCCL(tr2);
		if ((EIF_IS_DIFFERENT_PROCESSOR (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
			RTS_AC (1, tr1, tp1);
			RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
			RTS_CP(1296, "connect", tr1, tp1);
		} else {
			RTS_IMPERSONATE (RTS_PID(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", tr1))(tr1, ur1x);
			RTS_IMPERSONATE (RTS_PID(Current));
		}
	}
	RTHOOK(10);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L))) {
		RTHOOK(11);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 < ti4_1) && (EIF_BOOLEAN) (arg3 < ti4_2))) {
			RTHOOK(12);
			ui4_1 = arg2;
			ui4_2 = arg3;
			ui4_3 = ((EIF_INTEGER_32) 1L);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (3, arg1, tp1);
				RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1289, "node_at", arg1, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(12,1);
			ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
			ui4_2 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
			ui4_3 = ((EIF_INTEGER_32) 1L);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (3, arg1, tp1);
				RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1289, "node_at", arg1, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur1 = RTCCL(tr2);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (1, tr1, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(1296, "connect", tr1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", tr1))(tr1, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
		RTHOOK(13);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 < ti4_1) && (EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(14);
			ui4_1 = arg2;
			ui4_2 = arg3;
			ui4_3 = ((EIF_INTEGER_32) 1L);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (3, arg1, tp1);
				RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1289, "node_at", arg1, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(14,1);
			ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
			ui4_2 = (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L));
			ui4_3 = ((EIF_INTEGER_32) 1L);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (3, arg1, tp1);
				RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1289, "node_at", arg1, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur1 = RTCCL(tr2);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (1, tr1, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(1296, "connect", tr1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", tr1))(tr1, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
		RTHOOK(15);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg3 < ti4_1))) {
			RTHOOK(16);
			ui4_1 = arg2;
			ui4_2 = arg3;
			ui4_3 = ((EIF_INTEGER_32) 1L);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (3, arg1, tp1);
				RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1289, "node_at", arg1, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(16,1);
			ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
			ui4_2 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
			ui4_3 = ((EIF_INTEGER_32) 1L);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (3, arg1, tp1);
				RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1289, "node_at", arg1, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur1 = RTCCL(tr2);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (1, tr1, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(1296, "connect", tr1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", tr1))(tr1, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
		RTHOOK(17);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(18);
			ui4_1 = arg2;
			ui4_2 = arg3;
			ui4_3 = ((EIF_INTEGER_32) 1L);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (3, arg1, tp1);
				RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1289, "node_at", arg1, tp1, up1x);
				tr1 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			RTNHOOK(18,1);
			ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
			ui4_2 = (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L));
			ui4_3 = ((EIF_INTEGER_32) 1L);
			if ((EIF_IS_DIFFERENT_PROCESSOR_FOR_QUERY (Current, arg1)) && !(EIF_IS_PASSIVE (arg1))) {
				RTS_AC (3, arg1, tp1);
				RTS_AA (ui4_3x, it_i4, SK_INT32, 3, tp1);
				RTS_AA (ui4_2x, it_i4, SK_INT32, 2, tp1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1, tp1);
				RTS_CF(1289, "node_at", arg1, tp1, up1x);
				tr2 = (up1x, (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTS_IMPERSONATE (RTS_PID(arg1));
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1289, "node_at", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
			ur1 = RTCCL(tr2);
			if ((EIF_IS_DIFFERENT_PROCESSOR (Current, tr1)) && !(EIF_IS_PASSIVE (tr1))) {
				RTS_AC (1, tr1, tp1);
				RTS_AS (ur1x, it_r, SK_REF, 1, tp1);
				RTS_CP(1296, "connect", tr1, tp1);
			} else {
				RTS_IMPERSONATE (RTS_PID(tr1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1296, "connect", tr1))(tr1, ur1x);
				RTS_IMPERSONATE (RTS_PID(Current));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit958 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
