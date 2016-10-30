/*
 * Code for class OBSTACLE_AVOIDANCE_PARAMETERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F942_7726(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_7727(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_7728(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_7729(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_7730(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_7731(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_7732(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_7733(EIF_REFERENCE);
extern EIF_TYPED_VALUE F942_7734(EIF_REFERENCE);
extern void F942_7735(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_7736(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_7737(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_7738(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_7739(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_7740(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_7741(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_7742(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F942_7743(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit942(void);

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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.boundary_following_speed */
EIF_TYPED_VALUE F942_7726 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5471,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.desired_distance_from_wall */
EIF_TYPED_VALUE F942_7727 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5472,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.recover_turning_power_max */
EIF_TYPED_VALUE F942_7728 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5473,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.recover_turning_power_increment */
EIF_TYPED_VALUE F942_7729 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5474,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.recover_turning_power_power */
EIF_TYPED_VALUE F942_7730 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5475,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.recover_turning_power_multiplicator */
EIF_TYPED_VALUE F942_7731 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5476,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.recover_local_angular_speed_threshold */
EIF_TYPED_VALUE F942_7732 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5477,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.recover_local_anti_collision_forward_speed */
EIF_TYPED_VALUE F942_7733 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5478,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.recover_local_anti_collision_angular_speed_multiplicator */
EIF_TYPED_VALUE F942_7734 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5479,Dtype(Current)));
	return r;
}


/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_boundary_following_speed */
void F942_7735 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_boundary_following_speed";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13358);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13358);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5471, 0x20000000, 1); /* boundary_following_speed */
	*(EIF_REAL_64 *)(Current + RTWA(5471, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_desired_distance_from_wall */
void F942_7736 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_desired_distance_from_wall";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13359);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13359);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5472, 0x20000000, 1); /* desired_distance_from_wall */
	*(EIF_REAL_64 *)(Current + RTWA(5472, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_recover_turning_power_max */
void F942_7737 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recover_turning_power_max";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13360);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13360);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5473, 0x20000000, 1); /* recover_turning_power_max */
	*(EIF_REAL_64 *)(Current + RTWA(5473, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_recover_turning_power_increment */
void F942_7738 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recover_turning_power_increment";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13361);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13361);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5474, 0x20000000, 1); /* recover_turning_power_increment */
	*(EIF_REAL_64 *)(Current + RTWA(5474, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_recover_turning_power_power */
void F942_7739 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recover_turning_power_power";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13362);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13362);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5475, 0x20000000, 1); /* recover_turning_power_power */
	*(EIF_REAL_64 *)(Current + RTWA(5475, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_recover_turning_power_multiplicator */
void F942_7740 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recover_turning_power_multiplicator";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13363);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13363);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5476, 0x20000000, 1); /* recover_turning_power_multiplicator */
	*(EIF_REAL_64 *)(Current + RTWA(5476, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_recover_local_angular_speed_threshold */
void F942_7741 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recover_local_angular_speed_threshold";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13364);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13364);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5477, 0x20000000, 1); /* recover_local_angular_speed_threshold */
	*(EIF_REAL_64 *)(Current + RTWA(5477, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_recover_local_anti_collision_forward_speed */
void F942_7742 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recover_local_anti_collision_forward_speed";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13365);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13365);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5478, 0x20000000, 1); /* recover_local_anti_collision_forward_speed */
	*(EIF_REAL_64 *)(Current + RTWA(5478, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {OBSTACLE_AVOIDANCE_PARAMETERS}.set_recover_local_anti_collision_angular_speed_multiplicator */
void F942_7743 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recover_local_anti_collision_angular_speed_multiplicator";
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
	
	RTEAA(l_feature_name, 941, Current, 0, 1, 13366);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(941, Current, 13366);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5479, 0x20000000, 1); /* recover_local_anti_collision_angular_speed_multiplicator */
	*(EIF_REAL_64 *)(Current + RTWA(5479, Dtype(Current))) = (EIF_REAL_64) arg1;
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

void EIF_Minit942 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
