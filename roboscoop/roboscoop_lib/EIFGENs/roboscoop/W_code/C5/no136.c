/*
 * Code for class NO_MORE_MEMORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F136_2012(EIF_REFERENCE);
extern EIF_TYPED_VALUE F136_2013(EIF_REFERENCE);
extern void F136_2014(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F136_2015(EIF_REFERENCE);
extern void EIF_Minit136(void);

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

/* {NO_MORE_MEMORY}.code */
EIF_TYPED_VALUE F136_2012 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 135, Current, 0, 0, 1897);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(135, Current, 1897);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1708, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1128, 68))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = *(EIF_INTEGER_32 *)(Current + RTWA(1708, dtype));
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1115, 68))(Current)).it_i4);
		Result = (EIF_INTEGER_32) Result;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {NO_MORE_MEMORY}.tag */
RTOID (F136_2013)
EIF_TYPED_VALUE F136_2013 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tag";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F136_2013);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 135, Current, 0, 0, 1898);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(135, Current, 1898);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000128, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(296, 0x01).id);
	tr2 = RTMS_EX_H("No more memory.",15,1839906350);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5153, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {NO_MORE_MEMORY}.set_code */
void F136_2014 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_code";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
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
	
	RTEAA(l_feature_name, 135, Current, 0, 1, 1899);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(135, Current, 1899);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1708, 0x10000000, 1); /* internal_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1661, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(1708, dtype)) = (EIF_INTEGER_32) ti4_1;
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

/* {NO_MORE_MEMORY}.internal_code */
EIF_TYPED_VALUE F136_2015 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1708,Dtype(Current)));
	return r;
}


void EIF_Minit136 (void)
{
	GTCX
	RTOTS (2013,F136_2013)
}


#ifdef __cplusplus
}
#endif
