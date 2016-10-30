/*
 * Code for class PATH_PLANNING_SIGNALER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F936_7675(EIF_REFERENCE);
extern EIF_TYPED_VALUE F936_7676(EIF_REFERENCE);
extern EIF_TYPED_VALUE F936_7677(EIF_REFERENCE);
extern EIF_TYPED_VALUE F936_7678(EIF_REFERENCE);
extern void F936_7679(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F936_7680(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F936_7681(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F936_7682(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F936_7683(EIF_REFERENCE);
extern void EIF_Minit936(void);

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

/* {PATH_PLANNING_SIGNALER}.is_grid_ready */
EIF_TYPED_VALUE F936_7675 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5420,Dtype(Current)));
	return r;
}


/* {PATH_PLANNING_SIGNALER}.is_finding_path */
EIF_TYPED_VALUE F936_7676 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5421,Dtype(Current)));
	return r;
}


/* {PATH_PLANNING_SIGNALER}.is_publishing_path */
EIF_TYPED_VALUE F936_7677 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5422,Dtype(Current)));
	return r;
}


/* {PATH_PLANNING_SIGNALER}.is_path_ready */
EIF_TYPED_VALUE F936_7678 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5423,Dtype(Current)));
	return r;
}


/* {PATH_PLANNING_SIGNALER}.set_is_finding_path */
void F936_7679 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 935, Current, 0, 1, 13302);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(935, Current, 13302);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5421, 0x04000000, 1); /* is_finding_path */
	*(EIF_BOOLEAN *)(Current + RTWA(5421, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {PATH_PLANNING_SIGNALER}.set_is_publishing_path */
void F936_7680 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 935, Current, 0, 1, 13303);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(935, Current, 13303);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5422, 0x04000000, 1); /* is_publishing_path */
	*(EIF_BOOLEAN *)(Current + RTWA(5422, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {PATH_PLANNING_SIGNALER}.set_is_path_ready */
void F936_7681 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 935, Current, 0, 1, 13304);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(935, Current, 13304);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5423, 0x04000000, 1); /* is_path_ready */
	*(EIF_BOOLEAN *)(Current + RTWA(5423, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {PATH_PLANNING_SIGNALER}.set_is_grid_ready */
void F936_7682 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_grid_ready";
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
	
	RTEAA(l_feature_name, 935, Current, 0, 1, 13305);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(935, Current, 13305);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5420, 0x04000000, 1); /* is_grid_ready */
	*(EIF_BOOLEAN *)(Current + RTWA(5420, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {PATH_PLANNING_SIGNALER}.clear_all_states */
void F936_7683 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 935, Current, 0, 0, 13306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(935, Current, 13306);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5421, 0x04000000, 1); /* is_finding_path */
	*(EIF_BOOLEAN *)(Current + RTWA(5421, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5422, 0x04000000, 1); /* is_publishing_path */
	*(EIF_BOOLEAN *)(Current + RTWA(5422, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5423, 0x04000000, 1); /* is_path_ready */
	*(EIF_BOOLEAN *)(Current + RTWA(5423, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit936 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
