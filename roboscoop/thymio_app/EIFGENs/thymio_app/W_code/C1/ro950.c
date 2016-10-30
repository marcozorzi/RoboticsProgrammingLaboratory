/*
 * Code for class ROBOT_SIGNALER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F950_7800(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7801(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7802(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7803(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7804(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7805(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7806(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7807(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7808(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7811(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7812(EIF_REFERENCE);
extern EIF_TYPED_VALUE F950_7813(EIF_REFERENCE);
extern void F950_7814(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7815(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7816(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7817(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7818(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7819(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7820(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7821(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7822(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7823(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7824(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7825(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7826(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7827(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F950_7828(EIF_REFERENCE);
extern void EIF_Minit950(void);

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

/* {ROBOT_SIGNALER}.is_object_recognition_activated */
EIF_TYPED_VALUE F950_7800 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5545,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_object_recognition_done */
EIF_TYPED_VALUE F950_7801 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5546,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_go_to_goal_required */
EIF_TYPED_VALUE F950_7802 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5547,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_at_goal */
EIF_TYPED_VALUE F950_7803 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5548,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_finding_path */
EIF_TYPED_VALUE F950_7804 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5549,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_publishing_path */
EIF_TYPED_VALUE F950_7805 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5550,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_path_ready */
EIF_TYPED_VALUE F950_7806 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5551,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_go_to_goal */
EIF_TYPED_VALUE F950_7807 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5552,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_go_to_goal_started */
EIF_TYPED_VALUE F950_7808 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5553,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_obstacle_avoidance */
EIF_TYPED_VALUE F950_7809 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5554,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_obstacle_avoidance_done */
EIF_TYPED_VALUE F950_7810 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5555,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_stop_requested */
EIF_TYPED_VALUE F950_7811 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5556,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_localized */
EIF_TYPED_VALUE F950_7812 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5557,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.is_done_exploring */
EIF_TYPED_VALUE F950_7813 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5558,Dtype(Current)));
	return r;
}


/* {ROBOT_SIGNALER}.set_is_object_recognition_activated */
void F950_7814 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_object_recognition_activated";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13427);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13427);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5545, 0x04000000, 1); /* is_object_recognition_activated */
	*(EIF_BOOLEAN *)(Current + RTWA(5545, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_object_recognition_done */
void F950_7815 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_object_recognition_done";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13428);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13428);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5546, 0x04000000, 1); /* is_object_recognition_done */
	*(EIF_BOOLEAN *)(Current + RTWA(5546, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_go_to_goal_required */
void F950_7816 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_go_to_goal_required";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13429);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13429);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5547, 0x04000000, 1); /* is_go_to_goal_required */
	*(EIF_BOOLEAN *)(Current + RTWA(5547, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_at_goal */
void F950_7817 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13430);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13430);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5548, 0x04000000, 1); /* is_at_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5548, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_finding_path */
void F950_7818 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_finding_path";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13431);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13431);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5549, 0x04000000, 1); /* is_finding_path */
	*(EIF_BOOLEAN *)(Current + RTWA(5549, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_publishing_path */
void F950_7819 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_publishing_path";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13432);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13432);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5550, 0x04000000, 1); /* is_publishing_path */
	*(EIF_BOOLEAN *)(Current + RTWA(5550, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_path_ready */
void F950_7820 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_path_ready";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13433);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13433);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5551, 0x04000000, 1); /* is_path_ready */
	*(EIF_BOOLEAN *)(Current + RTWA(5551, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_go_to_goal */
void F950_7821 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_go_to_goal";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13434);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13434);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5552, 0x04000000, 1); /* is_go_to_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5552, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_go_to_goal_started */
void F950_7822 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_go_to_goal_started";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13435);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13435);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5553, 0x04000000, 1); /* is_go_to_goal_started */
	*(EIF_BOOLEAN *)(Current + RTWA(5553, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_obstacle_avoidance */
void F950_7823 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_obstacle_avoidance";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13436);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13436);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5554, 0x04000000, 1); /* is_obstacle_avoidance */
	*(EIF_BOOLEAN *)(Current + RTWA(5554, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_obstacle_avoidance_done */
void F950_7824 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_obstacle_avoidance_done";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13437);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13437);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5555, 0x04000000, 1); /* is_obstacle_avoidance_done */
	*(EIF_BOOLEAN *)(Current + RTWA(5555, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_stop_requested */
void F950_7825 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_stop_requested";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13438);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13438);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5556, 0x04000000, 1); /* is_stop_requested */
	*(EIF_BOOLEAN *)(Current + RTWA(5556, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_localized */
void F950_7826 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_localized";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13439);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13439);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5557, 0x04000000, 1); /* is_localized */
	*(EIF_BOOLEAN *)(Current + RTWA(5557, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.set_is_done_exploring */
void F950_7827 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_done_exploring";
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
	
	RTEAA(l_feature_name, 949, Current, 0, 1, 13440);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(949, Current, 13440);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5558, 0x04000000, 1); /* is_done_exploring */
	*(EIF_BOOLEAN *)(Current + RTWA(5558, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {ROBOT_SIGNALER}.clear_all_states */
void F950_7828 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 949, Current, 0, 0, 13441);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(949, Current, 13441);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5552, 0x04000000, 1); /* is_go_to_goal */
	*(EIF_BOOLEAN *)(Current + RTWA(5552, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5554, 0x04000000, 1); /* is_obstacle_avoidance */
	*(EIF_BOOLEAN *)(Current + RTWA(5554, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5549, 0x04000000, 1); /* is_finding_path */
	*(EIF_BOOLEAN *)(Current + RTWA(5549, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5550, 0x04000000, 1); /* is_publishing_path */
	*(EIF_BOOLEAN *)(Current + RTWA(5550, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5545, 0x04000000, 1); /* is_object_recognition_activated */
	*(EIF_BOOLEAN *)(Current + RTWA(5545, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5547, 0x04000000, 1); /* is_go_to_goal_required */
	*(EIF_BOOLEAN *)(Current + RTWA(5547, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5555, 0x04000000, 1); /* is_obstacle_avoidance_done */
	*(EIF_BOOLEAN *)(Current + RTWA(5555, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5556, 0x04000000, 1); /* is_stop_requested */
	*(EIF_BOOLEAN *)(Current + RTWA(5556, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit950 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
