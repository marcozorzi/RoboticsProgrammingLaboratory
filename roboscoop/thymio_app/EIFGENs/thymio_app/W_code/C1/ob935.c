/*
 * Code for class OBSTACLE_AVOIDANCE_SIGNALER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F935_7666(EIF_REFERENCE);
extern EIF_TYPED_VALUE F935_7667(EIF_REFERENCE);
extern EIF_TYPED_VALUE F935_7668(EIF_REFERENCE);
extern EIF_TYPED_VALUE F935_7669(EIF_REFERENCE);
extern void F935_7670(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F935_7671(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F935_7672(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F935_7673(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F935_7674(EIF_REFERENCE);
extern void EIF_Minit935(void);

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

/* {OBSTACLE_AVOIDANCE_SIGNALER}.is_boundary_following */
EIF_TYPED_VALUE F935_7666 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5411,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_SIGNALER}.is_recover_obstacle */
EIF_TYPED_VALUE F935_7667 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5412,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_SIGNALER}.is_transition_to_goal */
EIF_TYPED_VALUE F935_7668 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5413,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_SIGNALER}.is_goal_unreachable */
EIF_TYPED_VALUE F935_7669 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5414,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_SIGNALER}.set_is_boundary_following */
void F935_7670 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_boundary_following";
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
	
	RTEAA(l_feature_name, 934, Current, 0, 1, 13293);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(934, Current, 13293);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5411, 0x04000000, 1); /* is_boundary_following */
	*(EIF_BOOLEAN *)(Current + RTWA(5411, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {OBSTACLE_AVOIDANCE_SIGNALER}.set_is_transition_to_goal */
void F935_7671 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_transition_to_goal";
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
	
	RTEAA(l_feature_name, 934, Current, 0, 1, 13294);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(934, Current, 13294);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5413, 0x04000000, 1); /* is_transition_to_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5413, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {OBSTACLE_AVOIDANCE_SIGNALER}.set_is_recover_obstacle */
void F935_7672 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_recover_obstacle";
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
	
	RTEAA(l_feature_name, 934, Current, 0, 1, 13295);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(934, Current, 13295);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5412, 0x04000000, 1); /* is_recover_obstacle */
	*(EIF_BOOLEAN *)(Current + RTWA(5412, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {OBSTACLE_AVOIDANCE_SIGNALER}.set_is_goal_unreachable */
void F935_7673 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_goal_unreachable";
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
	
	RTEAA(l_feature_name, 934, Current, 0, 1, 13296);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(934, Current, 13296);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5414, 0x04000000, 1); /* is_goal_unreachable */
	*(EIF_BOOLEAN *)(Current + RTWA(5414, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {OBSTACLE_AVOIDANCE_SIGNALER}.clear_all_states */
void F935_7674 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 934, Current, 0, 0, 13297);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(934, Current, 13297);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5411, 0x04000000, 1); /* is_boundary_following */
	*(EIF_BOOLEAN *)(Current + RTWA(5411, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5412, 0x04000000, 1); /* is_recover_obstacle */
	*(EIF_BOOLEAN *)(Current + RTWA(5412, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5413, 0x04000000, 1); /* is_transition_to_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5413, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5414, 0x04000000, 1); /* is_goal_unreachable */
	*(EIF_BOOLEAN *)(Current + RTWA(5414, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit935 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
