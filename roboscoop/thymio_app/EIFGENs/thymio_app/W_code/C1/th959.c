/*
 * Code for class THYMIO_TOP_LEDS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F959_7871(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F959_7872(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F959_7873(EIF_REFERENCE);
extern void F959_7874(EIF_REFERENCE);
extern void F959_7875(EIF_REFERENCE);
extern void F959_7876(EIF_REFERENCE);
extern void F959_7877(EIF_REFERENCE);
extern void F959_7878(EIF_REFERENCE);
extern void F959_7879(EIF_REFERENCE);
extern void F959_7880(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7881(EIF_REFERENCE);
extern void EIF_Minit959(void);

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

/* {THYMIO_TOP_LEDS}.make_with_topic */
void F959_7871 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_topic";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 1, 13499);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(958, Current, 13499);
	RTCC(arg1, 958, l_feature_name, 1, eif_new_type(287, 0x05), 0x05);
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5606, 0xF8000155, 0); /* publisher */
	tr1 = RTLNSMART(RTWCT(5606, dtype, Dftype(Current)).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2540, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5606, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5606, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2542, "advertize", tr1))(tr1, ui4_1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_SRD (Current);
	}
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {THYMIO_TOP_LEDS}.set_rgb_brightness */
void F959_7872 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_rgb_brightness";
	RTEX;
#define arg1 arg1x.it_i2
#define arg2 arg2x.it_i2
#define arg3 arg3x.it_i2
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i2 = * (EIF_INTEGER_16 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i2 = * (EIF_INTEGER_16 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i2 = * (EIF_INTEGER_16 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT16,&arg1);
	RTLU(SK_INT16,&arg2);
	RTLU(SK_INT16,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 3, 13500);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13500);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5606, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTLN(eif_new_type(55, 0x01).id);
	ui2_1 = arg1;
	ui2_2 = arg2;
	ui2_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(915, Dtype(tr2)))(tr2, ui2_1x, ui2_2x, ui2_3x);
	RTNHOOK(1,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1331, "publish", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui2_1
#undef ui2_2
#undef ui2_3
#undef arg3
#undef arg2
#undef arg1
}

/* {THYMIO_TOP_LEDS}.set_to_red */
void F959_7873 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_red";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13501);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13501);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_1 = ti2_1;
	ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_2 = ti2_2;
	ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_3 = ti2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(542, Dtype(Current)))(Current, ui2_1x, ui2_2x, ui2_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
#undef ui2_2
#undef ui2_3
}

/* {THYMIO_TOP_LEDS}.set_to_green */
void F959_7874 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_green";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13491);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13491);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_1 = ti2_1;
	ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_2 = ti2_2;
	ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_3 = ti2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(542, Dtype(Current)))(Current, ui2_1x, ui2_2x, ui2_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
#undef ui2_2
#undef ui2_3
}

/* {THYMIO_TOP_LEDS}.set_to_blue */
void F959_7875 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_blue";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13492);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13492);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_1 = ti2_1;
	ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_2 = ti2_2;
	ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_3 = ti2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(542, Dtype(Current)))(Current, ui2_1x, ui2_2x, ui2_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
#undef ui2_2
#undef ui2_3
}

/* {THYMIO_TOP_LEDS}.set_to_yellow */
void F959_7876 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_yellow";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13493);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13493);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_1 = ti2_1;
	ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_2 = ti2_2;
	ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_3 = ti2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(542, Dtype(Current)))(Current, ui2_1x, ui2_2x, ui2_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
#undef ui2_2
#undef ui2_3
}

/* {THYMIO_TOP_LEDS}.set_to_magenta */
void F959_7877 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_magenta";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13494);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13494);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_1 = ti2_1;
	ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_2 = ti2_2;
	ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_3 = ti2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(542, Dtype(Current)))(Current, ui2_1x, ui2_2x, ui2_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
#undef ui2_2
#undef ui2_3
}

/* {THYMIO_TOP_LEDS}.set_to_cyan */
void F959_7878 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_cyan";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13495);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13495);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_1 = ti2_1;
	ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_2 = ti2_2;
	ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_3 = ti2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(542, Dtype(Current)))(Current, ui2_1x, ui2_2x, ui2_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
#undef ui2_2
#undef ui2_3
}

/* {THYMIO_TOP_LEDS}.set_to_white */
void F959_7879 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_white";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13496);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13496);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_1 = ti2_1;
	ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_2 = ti2_2;
	ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 32L);
	ui2_3 = ti2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(542, Dtype(Current)))(Current, ui2_1x, ui2_2x, ui2_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
#undef ui2_2
#undef ui2_3
}

/* {THYMIO_TOP_LEDS}.set_to_no_color */
void F959_7880 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_no_color";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_TYPED_VALUE ui2_3x = {{0}, SK_INT16};
#define ui2_3 ui2_3x.it_i2
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_INTEGER_16 ti2_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13497);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13497);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_1 = ti2_1;
	ti2_2 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_2 = ti2_2;
	ti2_3 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_3 = ti2_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(542, Dtype(Current)))(Current, ui2_1x, ui2_2x, ui2_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
#undef ui2_2
#undef ui2_3
}

/* {THYMIO_TOP_LEDS}.publisher */
EIF_TYPED_VALUE F959_7881 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5606,Dtype(Current)));
	return r;
}


void EIF_Minit959 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
