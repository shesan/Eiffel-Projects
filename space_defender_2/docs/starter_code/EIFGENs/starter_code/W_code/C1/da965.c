/*
 * Code for class DATE_TIME_TOOLS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F965_7251(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7252(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7253(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7254(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7255(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7256(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7257(EIF_REFERENCE);
extern EIF_TYPED_VALUE F965_7258(EIF_REFERENCE);
extern void EIF_Minit965(void);

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

/* {DATE_TIME_TOOLS}.name */
RTOID (F965_7251)


EIF_TYPED_VALUE F965_7251 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F965_7251,13554,RTMS_EX_H("English",7,257590376));
}

/* {DATE_TIME_TOOLS}.days_text */
RTOID (F965_7252)
EIF_TYPED_VALUE F965_7252 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "days_text";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F965_7252);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 0, 13554);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(964, Current, 13554);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800014E, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 7L);
	{
		static EIF_TYPE_INDEX typarr0[] = {356,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 7L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("SUN",3,5461326);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("MON",3,5066574);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("TUE",3,5526853);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("WED",3,5719364);
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("THU",3,5523541);
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("FRI",3,4608585);
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("SAT",3,5456212);
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {DATE_TIME_TOOLS}.months_text */
RTOID (F965_7253)
EIF_TYPED_VALUE F965_7253 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "months_text";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F965_7253);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 0, 13555);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(964, Current, 13555);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800014E, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {356,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 12L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("JAN",3,4866382);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("FEB",3,4605250);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("MAR",3,5062994);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("APR",3,4280402);
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("MAY",3,5063001);
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("JUN",3,4871502);
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("JUL",3,4871500);
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("AUG",3,4281671);
	*((EIF_REFERENCE *)tr2+7) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("SEP",3,5457232);
	*((EIF_REFERENCE *)tr2+8) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("OCT",3,5194580);
	*((EIF_REFERENCE *)tr2+9) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("NOV",3,5132118);
	*((EIF_REFERENCE *)tr2+10) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("DEC",3,4474179);
	*((EIF_REFERENCE *)tr2+11) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {DATE_TIME_TOOLS}.long_days_text */
RTOID (F965_7254)
EIF_TYPED_VALUE F965_7254 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "long_days_text";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F965_7254);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 0, 13548);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(964, Current, 13548);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800014E, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 7L);
	{
		static EIF_TYPE_INDEX typarr0[] = {356,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 7L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("SUNDAY",6,1476933465);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("MONDAY",6,1465090905);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("TUESDAY",7,893616985);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("WEDNESDAY",9,121636953);
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("THURSDAY",8,1315712089);
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("FRIDAY",6,1367465305);
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("SATURDAY",8,2068505689);
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {DATE_TIME_TOOLS}.long_months_text */
RTOID (F965_7255)
EIF_TYPED_VALUE F965_7255 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "long_months_text";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F965_7255);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 964, Current, 0, 0, 13549);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(964, Current, 13549);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800014E, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {356,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 12L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("JANUARY",7,149521497);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("FEBRUARY",8,1946023513);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("MARCH",5,1096501576);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("APRIL",5,1348069196);
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("MAY",3,5063001);
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("JUNE",4,1247104581);
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("JULY",4,1247104089);
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("AUGUST",6,1325222228);
	*((EIF_REFERENCE *)tr2+7) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("SEPTEMBER",9,1541548626);
	*((EIF_REFERENCE *)tr2+8) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("OCTOBER",7,422001234);
	*((EIF_REFERENCE *)tr2+9) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("NOVEMBER",8,443658322);
	*((EIF_REFERENCE *)tr2+10) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("DECEMBER",8,1813273426);
	*((EIF_REFERENCE *)tr2+11) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {DATE_TIME_TOOLS}.date_default_format_string */
RTOID (F965_7256)


EIF_TYPED_VALUE F965_7256 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F965_7256,13551,RTMS_EX_H("[0]mm/[0]dd/yyyy",16,1621628025));
}

/* {DATE_TIME_TOOLS}.time_default_format_string */
RTOID (F965_7257)


EIF_TYPED_VALUE F965_7257 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F965_7257,13552,RTMS_EX_H("hh12:[0]mi:[0]ss.ff3 AM",23,629041741));
}

/* {DATE_TIME_TOOLS}.default_format_string */
RTOID (F965_7258)


EIF_TYPED_VALUE F965_7258 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F965_7258,13553,RTMS_EX_H("[0]mm/[0]dd/yyyy hh12:[0]mi:[0]ss.ff3 AM",40,2104244301));
}

void EIF_Minit965 (void)
{
	GTCX
	RTOTS (7251,F965_7251)
	RTOTS (7252,F965_7252)
	RTOTS (7253,F965_7253)
	RTOTS (7254,F965_7254)
	RTOTS (7255,F965_7255)
	RTOTS (7256,F965_7256)
	RTOTS (7257,F965_7257)
	RTOTS (7258,F965_7258)
}


#ifdef __cplusplus
}
#endif
