/*
 * Code for class EV_POPUP_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1610_18648(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1610_18649(EIF_REFERENCE);
extern void F1610_18650(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1610_18651(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1610_18652(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1610_18653(EIF_REFERENCE);
extern void F1610_18654(EIF_REFERENCE);
extern void EIF_Minit1610(void);

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

/* {EV_POPUP_WINDOW}.make_with_shadow */
void F1610_18648 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_with_shadow";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1609, Current, 0, 0, 26053);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1609, Current, 26053);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 15721, 0x04000000, 1); /* has_shadow */
	*(EIF_BOOLEAN *)(Current + RTWA(15721, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("has_shadow_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(15721, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_POPUP_WINDOW}.has_shadow */
EIF_TYPED_VALUE F1610_18649 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(15721,Dtype(Current)));
	return r;
}


/* {EV_POPUP_WINDOW}.disconnect_from_window_manager */
void F1610_18650 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disconnect_from_window_manager";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1609, Current, 0, 0, 26055);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1609, Current, 26055);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15165, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_is_show_requested", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15592, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15166, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16841, "disconnect_from_window_manager", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_POPUP_WINDOW}.user_can_resize_default_state */
EIF_TYPED_VALUE F1610_18651 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "user_can_resize_default_state";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1609, Current, 0, 0, 26056);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1609, Current, 26056);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_POPUP_WINDOW}.is_border_enabled_default_state */
EIF_TYPED_VALUE F1610_18652 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_border_enabled_default_state";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1609, Current, 0, 0, 26057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1609, Current, 26057);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_POPUP_WINDOW}.implementation */
EIF_TYPED_VALUE F1610_18653 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15166,Dtype(Current)));
	return r;
}


/* {EV_POPUP_WINDOW}.create_implementation */
void F1610_18654 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_implementation";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1609, Current, 0, 0, 26059);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1609, Current, 26059);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(15721, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 15166, 0xF80006BC, 0); /* implementation */
		tr1 = RTLN(eif_new_type(1937, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(16842, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(15166, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 15166, 0xF80006BC, 0); /* implementation */
		tr1 = RTLN(eif_new_type(1937, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(16039, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(15166, dtype)) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("implementation_created", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15166, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

void EIF_Minit1610 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
