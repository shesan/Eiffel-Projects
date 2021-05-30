/*
 * Code for class EV_WEL_FONT_ENUMERATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1389_14750(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1389_14751(EIF_REFERENCE);
static EIF_TYPED_VALUE F1389_14752_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1389_14752(EIF_REFERENCE);
static EIF_TYPED_VALUE F1389_14753_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1389_14753(EIF_REFERENCE);
extern void F1389_14754(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE F1389_14755_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1389_14755(EIF_REFERENCE);
extern void EIF_Minit1389(void);

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

/* {EV_WEL_FONT_ENUMERATOR_IMP}.is_font_face_supported */
EIF_TYPED_VALUE F1389_14750 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_font_face_supported";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1388, Current, 0, 1, 21398);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1388, Current, 21398);
	RTCC(arg1, 1388, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_face_name_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12226, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4701, "as_string_32", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2209, "has", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_WEL_FONT_ENUMERATOR_IMP}.font_faces */
EIF_TYPED_VALUE F1389_14751 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "font_faces";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1388, Current, 1, 0, 21399);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1388, Current, 21399);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12229, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 12229, 0xF800010E, 0); /* internal_font_faces */
		tr1 = RTLNSMART(RTWCT(12229, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 20L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(2,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(12229, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 12227, 0xF800019C, 0); /* text_metrics */
		tr1 = RTLNSMART(RTWCT(12227, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 20L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(12227, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 12228, 0xF800019C, 0); /* log_fonts */
		tr1 = RTLNSMART(RTWCT(12228, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 20L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(12228, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12229, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", tr1))(tr1);
		RTHOOK(6);
		RTDBGAL(1, 0xF800057E, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1406, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(6,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12354, "get", loc1))(loc1);
		RTHOOK(8);
		ur1 = RTCCL(loc1);
		ur2 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12214, dtype))(Current, ur1x, ur2x);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12355, "release", loc1))(loc1);
	}
	RTHOOK(10);
	RTDBGAL(0, 0xF800010E, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12229, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {EV_WEL_FONT_ENUMERATOR_IMP}.text_metrics */
static EIF_TYPED_VALUE F1389_14752_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "text_metrics";
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
	
	RTEAA(l_feature_name, 1388, Current, 0, 0, 21400);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1388, Current, 21400);
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

EIF_TYPED_VALUE F1389_14752 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12227,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(12227, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1389_14752_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(12227,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WEL_FONT_ENUMERATOR_IMP}.log_fonts */
static EIF_TYPED_VALUE F1389_14753_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "log_fonts";
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
	
	RTEAA(l_feature_name, 1388, Current, 0, 0, 21401);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1388, Current, 21401);
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

EIF_TYPED_VALUE F1389_14753 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12228,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(12228, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1389_14753_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(12228,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WEL_FONT_ENUMERATOR_IMP}.action */
void F1389_14754 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "action";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1388, Current, 1, 3, 21402);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1388, Current, 21402);
	RTCC(arg1, 1388, l_feature_name, 1, eif_new_type(1483, 0x01), 0x01);
	RTCC(arg2, 1388, l_feature_name, 2, eif_new_type(1484, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("elf_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("elf_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12254, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("tm_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("tm_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12254, "exists", arg2))(arg2)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(1, 0xF80000EE, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13857, "log_font", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13956, "face_name", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12229, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		if (RTAL & CK_CHECK) {
			RTHOOK(7);
			RTCT("internal_font_faces /= Void", EX_CHECK);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12229, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	} else {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12229, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ur1 = RTCCL(loc1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2209, "has", tr1))(tr1, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12229, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12227, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		if (RTAL & CK_CHECK) {
			RTHOOK(11);
			RTCT("text_metrics /= Void", EX_CHECK);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12227, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	} else {
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12227, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg2))(arg2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", tr1))(tr1, ur1x, ur2x);
	}
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12228, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		if (RTAL & CK_CHECK) {
			RTHOOK(14);
			RTCT("log_fonts /= Void", EX_CHECK);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12228, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	} else {
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12228, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13857, "log_font", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2255, "put", tr1))(tr1, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_WEL_FONT_ENUMERATOR_IMP}.internal_font_faces */
static EIF_TYPED_VALUE F1389_14755_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_font_faces";
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
	
	RTEAA(l_feature_name, 1388, Current, 0, 0, 21403);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1388, Current, 21403);
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

EIF_TYPED_VALUE F1389_14755 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12229,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(12229, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1389_14755_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(12229,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1389 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
