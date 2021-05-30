/*
 * Code for class WEL_TCN_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1050_10052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1050_10053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1050_10054(EIF_REFERENCE);
extern void EIF_Minit1050(void);

#ifdef __cplusplus
}
#endif

#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TCN_CONSTANTS}.tcn_keydown */
EIF_TYPED_VALUE F1050_10052 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcn_keydown";
	RTEX;
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
	
	RTEAA(l_feature_name, 1049, Current, 0, 0, 16399);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1049, Current, 16399);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TCN_KEYDOWN;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TCN_CONSTANTS}.tcn_selchange */
EIF_TYPED_VALUE F1050_10053 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcn_selchange";
	RTEX;
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
	
	RTEAA(l_feature_name, 1049, Current, 0, 0, 16400);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1049, Current, 16400);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TCN_SELCHANGE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TCN_CONSTANTS}.tcn_selchanging */
EIF_TYPED_VALUE F1050_10054 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcn_selchanging";
	RTEX;
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
	
	RTEAA(l_feature_name, 1049, Current, 0, 0, 16401);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1049, Current, 16401);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TCN_SELCHANGING;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1050 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
