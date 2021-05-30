/*
 * Code for class WEL_SC_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1046_10016(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10017(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10018(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10019(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10020(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10021(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10022(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10023(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10024(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10025(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10026(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10027(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10028(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10029(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10030(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10031(EIF_REFERENCE);
extern void EIF_Minit1046(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SC_CONSTANTS}.sc_size */
EIF_TYPED_VALUE F1046_10016 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_size";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16363);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16363);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SIZE;
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

/* {WEL_SC_CONSTANTS}.sc_move */
EIF_TYPED_VALUE F1046_10017 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_move";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16364);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16364);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOVE;
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

/* {WEL_SC_CONSTANTS}.sc_minimize */
EIF_TYPED_VALUE F1046_10018 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_minimize";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16365);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16365);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MINIMIZE;
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

/* {WEL_SC_CONSTANTS}.sc_maximize */
EIF_TYPED_VALUE F1046_10019 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_maximize";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16366);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16366);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MAXIMIZE;
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

/* {WEL_SC_CONSTANTS}.sc_nextwindow */
EIF_TYPED_VALUE F1046_10020 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_nextwindow";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16367);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16367);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_NEXTWINDOW;
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

/* {WEL_SC_CONSTANTS}.sc_prevwindow */
EIF_TYPED_VALUE F1046_10021 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_prevwindow";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16368);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16368);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_PREVWINDOW;
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

/* {WEL_SC_CONSTANTS}.sc_close */
EIF_TYPED_VALUE F1046_10022 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_close";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16369);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16369);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_CLOSE;
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

/* {WEL_SC_CONSTANTS}.sc_vscroll */
EIF_TYPED_VALUE F1046_10023 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_vscroll";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16370);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16370);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_VSCROLL;
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

/* {WEL_SC_CONSTANTS}.sc_hscroll */
EIF_TYPED_VALUE F1046_10024 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hscroll";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16371);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16371);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HSCROLL;
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

/* {WEL_SC_CONSTANTS}.sc_mousemenu */
EIF_TYPED_VALUE F1046_10025 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_mousemenu";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16372);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16372);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOUSEMENU;
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

/* {WEL_SC_CONSTANTS}.sc_keymenu */
EIF_TYPED_VALUE F1046_10026 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_keymenu";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16373);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16373);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_KEYMENU;
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

/* {WEL_SC_CONSTANTS}.sc_arrange */
EIF_TYPED_VALUE F1046_10027 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_arrange";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16374);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16374);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_ARRANGE;
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

/* {WEL_SC_CONSTANTS}.sc_restore */
EIF_TYPED_VALUE F1046_10028 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_restore";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16375);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16375);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_RESTORE;
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

/* {WEL_SC_CONSTANTS}.sc_tasklist */
EIF_TYPED_VALUE F1046_10029 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_tasklist";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16376);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16376);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_TASKLIST;
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

/* {WEL_SC_CONSTANTS}.sc_screensave */
EIF_TYPED_VALUE F1046_10030 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_screensave";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16377);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16377);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SCREENSAVE;
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

/* {WEL_SC_CONSTANTS}.sc_hotkey */
EIF_TYPED_VALUE F1046_10031 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hotkey";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16378);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16378);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HOTKEY;
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

void EIF_Minit1046 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
