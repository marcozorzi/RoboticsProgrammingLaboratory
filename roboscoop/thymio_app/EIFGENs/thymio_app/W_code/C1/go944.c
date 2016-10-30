/*
 * Code for class GO_TO_GOAL_PARAMETERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F944_7745(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7746(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7747(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7748(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7749(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7750(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7751(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7752(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7753(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7754(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7755(EIF_REFERENCE);
extern EIF_TYPED_VALUE F944_7756(EIF_REFERENCE);
extern void F944_7757(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7758(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7759(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7760(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7761(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7762(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7763(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7764(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7765(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7766(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7767(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F944_7768(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit944(void);

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

/* {GO_TO_GOAL_PARAMETERS}.goal_threshold */
EIF_TYPED_VALUE F944_7745 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5490,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.heading_pid_kp */
EIF_TYPED_VALUE F944_7746 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5491,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.heading_pid_ki */
EIF_TYPED_VALUE F944_7747 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5492,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.heading_pid_kd */
EIF_TYPED_VALUE F944_7748 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5493,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.heading_pid_delta_t */
EIF_TYPED_VALUE F944_7749 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5494,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.heading_pid_windup_threshold */
EIF_TYPED_VALUE F944_7750 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5495,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.cruise_velocity */
EIF_TYPED_VALUE F944_7751 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5496,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.cruise_velocity_threshold */
EIF_TYPED_VALUE F944_7752 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5497,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.approach_velocity */
EIF_TYPED_VALUE F944_7753 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5498,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.approach_velocity_threshold */
EIF_TYPED_VALUE F944_7754 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5499,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.change_goal_threshold */
EIF_TYPED_VALUE F944_7755 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5500,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.jump_n_points_after_obstacle */
EIF_TYPED_VALUE F944_7756 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5501,Dtype(Current)));
	return r;
}


/* {GO_TO_GOAL_PARAMETERS}.set_goal_threshold */
void F944_7757 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_goal_threshold";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13375);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13375);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5490, 0x20000000, 1); /* goal_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5490, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_heading_pid_kp */
void F944_7758 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_heading_pid_kp";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13376);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13376);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5491, 0x20000000, 1); /* heading_pid_kp */
	*(EIF_REAL_64 *)(Current + RTWA(5491, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_heading_pid_ki */
void F944_7759 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_heading_pid_ki";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13377);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13377);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5492, 0x20000000, 1); /* heading_pid_ki */
	*(EIF_REAL_64 *)(Current + RTWA(5492, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_heading_pid_kd */
void F944_7760 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_heading_pid_kd";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13378);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13378);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5493, 0x20000000, 1); /* heading_pid_kd */
	*(EIF_REAL_64 *)(Current + RTWA(5493, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_heading_pid_delta_t */
void F944_7761 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_heading_pid_delta_t";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13379);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13379);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5494, 0x20000000, 1); /* heading_pid_delta_t */
	*(EIF_REAL_64 *)(Current + RTWA(5494, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_heading_pid_windup_threshold */
void F944_7762 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_heading_pid_windup_threshold";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13380);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13380);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5495, 0x20000000, 1); /* heading_pid_windup_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5495, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_cruise_velocity */
void F944_7763 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_cruise_velocity";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13381);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13381);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5496, 0x20000000, 1); /* cruise_velocity */
	*(EIF_REAL_64 *)(Current + RTWA(5496, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_cruise_velocity_threshold */
void F944_7764 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_cruise_velocity_threshold";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13382);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13382);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5497, 0x20000000, 1); /* cruise_velocity_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5497, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_approach_velocity */
void F944_7765 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_approach_velocity";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13383);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13383);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5498, 0x20000000, 1); /* approach_velocity */
	*(EIF_REAL_64 *)(Current + RTWA(5498, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_approach_velocity_threshold */
void F944_7766 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_approach_velocity_threshold";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13384);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13384);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5499, 0x20000000, 1); /* approach_velocity_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5499, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_change_goal_threshold */
void F944_7767 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_change_goal_threshold";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13385);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13385);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5500, 0x20000000, 1); /* change_goal_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5500, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {GO_TO_GOAL_PARAMETERS}.set_jump_n_points_after_obstacle */
void F944_7768 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_jump_n_points_after_obstacle";
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
	
	RTEAA(l_feature_name, 943, Current, 0, 1, 13386);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(943, Current, 13386);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5501, 0x10000000, 1); /* jump_n_points_after_obstacle */
	*(EIF_INTEGER_32 *)(Current + RTWA(5501, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

void EIF_Minit944 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
