/*
 * Code for class EV_POPUP_WINDOW_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPED_VALUE F1725_20103_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1725_20103(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1725_20104(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1725_20105(EIF_REFERENCE);
extern void F1725_20106(EIF_REFERENCE);
extern void F1725_20107(EIF_REFERENCE);
extern void EIF_Minit1725(void);

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

/* {EV_POPUP_WINDOW_I}.interface */
static EIF_TYPED_VALUE F1725_20103_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1724, Current, 0, 0, 27181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1724, Current, 27181);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1725_20103 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16044,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(16044, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1725_20103_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(16044,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_POPUP_WINDOW_I}.is_disconnected_from_window_manager */
EIF_TYPED_VALUE F1725_20104 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16839,Dtype(Current)));
	return r;
}


/* {EV_POPUP_WINDOW_I}.has_shadow */
EIF_TYPED_VALUE F1725_20105 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16840,Dtype(Current)));
	return r;
}


/* {EV_POPUP_WINDOW_I}.disconnect_from_window_manager */
void F1725_20106 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disconnect_from_window_manager";
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
	
	RTEAA(l_feature_name, 1724, Current, 0, 0, 27184);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1724, Current, 27184);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16839, 0x04000000, 1); /* is_disconnected_from_window_manager */
	*(EIF_BOOLEAN *)(Current + RTWA(16839, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_POPUP_WINDOW_I}.initialize_with_shadow */
void F1725_20107 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_with_shadow";
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
	
	RTEAA(l_feature_name, 1724, Current, 0, 0, 27185);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1724, Current, 27185);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16840, 0x04000000, 1); /* has_shadow */
	*(EIF_BOOLEAN *)(Current + RTWA(16840, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16039, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1725 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
