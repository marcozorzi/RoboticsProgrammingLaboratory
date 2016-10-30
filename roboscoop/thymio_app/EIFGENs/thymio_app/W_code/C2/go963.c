/*
 * Code for class GO_TO_GOAL_SIGNALER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F963_7906(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F963_7907(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F963_7908(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F963_7909(EIF_REFERENCE);
extern void F963_7910(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F963_7911(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F963_7912(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7913(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7914(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7915(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7916(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7917(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7918(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7919(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7920(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7921(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7922(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7923(EIF_REFERENCE);
extern void EIF_Minit963(void);

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

/* {GO_TO_GOAL_SIGNALER}.make */
void F963_7906 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 962, Current, 0, 2, 13534);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(962, Current, 13534);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5633, 0x20000000, 1); /* x_goal */
	*(EIF_REAL_64 *)(Current + RTWA(5633, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5634, 0x20000000, 1); /* y_goal */
	*(EIF_REAL_64 *)(Current + RTWA(5634, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5638, 0x20000000, 1); /* distance_error */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4407, 258))(Current)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(5638, dtype)) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_SIGNALER}.set_is_going_to_goal */
void F963_7907 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_going_to_goal";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 962, Current, 0, 1, 13535);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(962, Current, 13535);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5636, 0x04000000, 1); /* is_going_to_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5636, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {GO_TO_GOAL_SIGNALER}.set_is_at_goal */
void F963_7908 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_at_goal";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 962, Current, 0, 1, 13536);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(962, Current, 13536);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5637, 0x04000000, 1); /* is_at_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5637, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {GO_TO_GOAL_SIGNALER}.clear_all_states */
void F963_7909 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clear_all_states";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 962, Current, 0, 0, 13537);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(962, Current, 13537);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5636, 0x04000000, 1); /* is_going_to_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5636, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5637, 0x04000000, 1); /* is_at_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5637, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {GO_TO_GOAL_SIGNALER}.compute_error */
void F963_7910 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "compute_error";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 962, Current, 0, 3, 13538);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(962, Current, 13538);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5638, 0x20000000, 1); /* distance_error */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5633, dtype));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5634, dtype));
	ur8_2 = tr8_2;
	ur8_3 = arg1;
	ur8_4 = arg2;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1939, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
	ur8_1 = tr8_1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1902, dtype))(Current, ur8_1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(5638, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5635, 0x20000000, 1); /* theta_goal */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5634, dtype));
	ur8_1 = (EIF_REAL_64) (tr8_1 - arg2);
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5633, dtype));
	ur8_2 = (EIF_REAL_64) (tr8_2 - arg1);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1938, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(5635, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5635, dtype));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5639, dtype));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) ((EIF_REAL_64) (tr8_1 - tr8_2) > tr8_3)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5632, 0x10000000, 1); /* counter */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5632, dtype)))++;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 5641, 0x04000000, 1); /* found */
		*(EIF_BOOLEAN *)(Current + RTWA(5641, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(6);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5635, dtype));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5639, dtype));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) -1L));
		if ((EIF_BOOLEAN) ((EIF_REAL_64) (tr8_1 - tr8_2) < tr8_3)) {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5632, 0x10000000, 1); /* counter */
			(*(EIF_INTEGER_32 *)(Current + RTWA(5632, dtype)))--;
			RTHOOK(8);
			RTDBGAA(Current, dtype, 5641, 0x04000000, 1); /* found */
			*(EIF_BOOLEAN *)(Current + RTWA(5641, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5639, 0x20000000, 1); /* previous_theta */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5635, dtype));
	*(EIF_REAL_64 *)(Current + RTWA(5639, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5635, 0x20000000, 1); /* theta_goal */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5635, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1876, dtype))(Current)).it_r8);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5632, dtype));
	tr8_4 = (EIF_REAL_64) (ti4_1);
	*(EIF_REAL_64 *)(Current + RTWA(5635, dtype)) = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) ((EIF_REAL_64) (tr8_2 * tr8_3) * tr8_4));
	RTHOOK(11);
	RTDBGAA(Current, dtype, 5640, 0x20000000, 1); /* theta_error */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5635, dtype));
	*(EIF_REAL_64 *)(Current + RTWA(5640, dtype)) = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - arg3);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 5641, 0x04000000, 1); /* found */
	*(EIF_BOOLEAN *)(Current + RTWA(5641, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef arg3
#undef arg2
#undef arg1
}

/* {GO_TO_GOAL_SIGNALER}.set_goal */
void F963_7911 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_goal";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 962, Current, 0, 2, 13539);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(962, Current, 13539);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5633, 0x20000000, 1); /* x_goal */
	*(EIF_REAL_64 *)(Current + RTWA(5633, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5634, 0x20000000, 1); /* y_goal */
	*(EIF_REAL_64 *)(Current + RTWA(5634, dtype)) = (EIF_REAL_64) arg2;
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

/* {GO_TO_GOAL_SIGNALER}.update_min_distance */
void F963_7912 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_min_distance";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 962, Current, 0, 0, 13540);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(962, Current, 13540);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5638, dtype));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(5642, dtype));
	if ((EIF_BOOLEAN) (tr8_1 < tr8_2)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 5642, 0x20000000, 1); /* min_distance */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5638, dtype));
		*(EIF_REAL_64 *)(Current + RTWA(5642, dtype)) = (EIF_REAL_64) tr8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {GO_TO_GOAL_SIGNALER}.counter */
EIF_TYPED_VALUE F963_7913 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5632,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.x_goal */
EIF_TYPED_VALUE F963_7914 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5633,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.y_goal */
EIF_TYPED_VALUE F963_7915 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5634,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.theta_goal */
EIF_TYPED_VALUE F963_7916 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5635,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.is_going_to_goal */
EIF_TYPED_VALUE F963_7917 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5636,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.is_at_goal */
EIF_TYPED_VALUE F963_7918 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5637,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.distance_error */
EIF_TYPED_VALUE F963_7919 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5638,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.previous_theta */
EIF_TYPED_VALUE F963_7920 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5639,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.theta_error */
EIF_TYPED_VALUE F963_7921 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5640,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.found */
EIF_TYPED_VALUE F963_7922 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5641,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_SIGNALER}.min_distance */
EIF_TYPED_VALUE F963_7923 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5642,Dtype(Current)));
	return r;
}


void EIF_Minit963 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
