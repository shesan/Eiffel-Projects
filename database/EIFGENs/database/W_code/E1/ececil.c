#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(864, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A139_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F139_7136)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A159_97 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2226, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A159_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3070, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A159_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3071, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* DBT_OVERRIDE10 dbt_override10 */
void _A969_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5121, "dbt_override10", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_OVERRIDE9 dbt_override9 */
void _A970_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5122, "dbt_override9", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_OVERRIDE8 dbt_override8 */
void _A971_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5123, "dbt_override8", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_OVERRIDE7 dbt_override7 */
void _A972_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5124, "dbt_override7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_OVERRIDE6 dbt_override6 */
void _A973_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5125, "dbt_override6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_OVERRIDE5 dbt_override5 */
void _A974_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5126, "dbt_override5", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_HAS_KEY7 dbt_has_key7 */
EIF_TYPED_VALUE _A975_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5127, "dbt_has_key7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_HAS_KEY6 dbt_has_key6 */
EIF_TYPED_VALUE _A976_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5128, "dbt_has_key6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_HAS_KEY5 dbt_has_key5 */
void _A977_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5129, "dbt_has_key5", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_HAS_KEY4 dbt_has_key4 */
void _A978_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5130, "dbt_has_key4", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_HAS_KEY3 dbt_has_key3 */
void _A979_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5131, "dbt_has_key3", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_DELETE8 dbt_delete8 */
EIF_TYPED_VALUE _A980_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5132, "dbt_delete8", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_DELETE7 dbt_delete7 */
EIF_TYPED_VALUE _A981_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5133, "dbt_delete7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_DELETE6 dbt_delete6 */
void _A982_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5134, "dbt_delete6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_DELETE5 dbt_delete5 */
void _A983_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5135, "dbt_delete5", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_DELETE4 dbt_delete4 */
void _A984_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5136, "dbt_delete4", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_DELETE3 dbt_delete3 */
void _A985_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5137, "dbt_delete3", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_SEARCH5 dbt_search5 */
EIF_TYPED_VALUE _A986_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "dbt_search5", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_SEARCH4 dbt_search4 */
void _A987_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5139, "dbt_search4", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_SEARCH3 dbt_search3 */
void _A988_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5140, "dbt_search3", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_COUNT4 dbt_count4 */
EIF_TYPED_VALUE _A989_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5141, "dbt_count4", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_COUNT3 dbt_count3 */
void _A990_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5142, "dbt_count3", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_COUNT2 dbt_count2 */
void _A991_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5143, "dbt_count2", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INSERT9 dbt_insert9 */
void _A992_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5144, "dbt_insert9", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INSERT8 dbt_insert8 */
void _A993_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5145, "dbt_insert8", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INSERT7 dbt_insert7 */
void _A994_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5146, "dbt_insert7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INSERT6 dbt_insert6 */
void _A995_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5147, "dbt_insert6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INSERT5 dbt_insert5 */
EIF_TYPED_VALUE _A996_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5148, "dbt_insert5", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_MODEL12 dbt_model12 */
void _A997_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5149, "dbt_model12", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_MODEL11 dbt_model11 */
void _A998_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5150, "dbt_model11", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_MODEL10 dbt_model10 */
void _A999_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5151, "dbt_model10", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_MODEL9 dbt_model9 */
void _A1000_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5152, "dbt_model9", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_MODEL8 dbt_model8 */
EIF_TYPED_VALUE _A1001_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5153, "dbt_model8", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_MODEL6 dbt_model6 */
EIF_TYPED_VALUE _A1002_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5154, "dbt_model6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_MODEL4 dbt_model4 */
EIF_TYPED_VALUE _A1003_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5155, "dbt_model4", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_MODEL2 dbt_model2 */
EIF_TYPED_VALUE _A1004_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5156, "dbt_model2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_2 dbt_iterator1 */
EIF_TYPED_VALUE _A1005_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5159, "dbt_iterator1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_2 dbt_iterator5 */
EIF_TYPED_VALUE _A1005_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5158, "dbt_iterator5", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_inner_join1 */
EIF_TYPED_VALUE _A1006_126 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5201, "dbt_inner_join1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_inner_join2 */
EIF_TYPED_VALUE _A1006_125 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5200, "dbt_inner_join2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_inner_join3 */
EIF_TYPED_VALUE _A1006_124 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5199, "dbt_inner_join3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_inner_join4 */
EIF_TYPED_VALUE _A1006_123 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5198, "dbt_inner_join4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_interval_image1 */
EIF_TYPED_VALUE _A1006_121 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5196, "dbt_interval_image1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_interval_image2 */
EIF_TYPED_VALUE _A1006_120 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5195, "dbt_interval_image2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_interval_image3 */
EIF_TYPED_VALUE _A1006_119 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5194, "dbt_interval_image3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_common_key_db1 */
EIF_TYPED_VALUE _A1006_117 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5192, "dbt_common_key_db1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_common_key_db2 */
EIF_TYPED_VALUE _A1006_116 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5191, "dbt_common_key_db2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_common_key_db3 */
EIF_TYPED_VALUE _A1006_115 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5190, "dbt_common_key_db3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_common_key_db4 */
EIF_TYPED_VALUE _A1006_114 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5189, "dbt_common_key_db4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_override1 */
EIF_TYPED_VALUE _A1006_112 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5187, "dbt_override1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_override2 */
EIF_TYPED_VALUE _A1006_111 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5186, "dbt_override2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_override3 */
EIF_TYPED_VALUE _A1006_110 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5185, "dbt_override3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_override4 */
EIF_TYPED_VALUE _A1006_109 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5184, "dbt_override4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_has_key1 */
EIF_TYPED_VALUE _A1006_107 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5182, "dbt_has_key1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_has_key2 */
EIF_TYPED_VALUE _A1006_106 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5181, "dbt_has_key2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_delete1 */
EIF_TYPED_VALUE _A1006_104 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5179, "dbt_delete1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_delete2 */
EIF_TYPED_VALUE _A1006_103 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5178, "dbt_delete2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_search1 */
EIF_TYPED_VALUE _A1006_101 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5176, "dbt_search1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_search2 */
EIF_TYPED_VALUE _A1006_100 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5175, "dbt_search2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_count1 */
EIF_TYPED_VALUE _A1006_98 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5173, "dbt_count1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_insert1 */
EIF_TYPED_VALUE _A1006_96 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5171, "dbt_insert1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_insert2 */
EIF_TYPED_VALUE _A1006_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5170, "dbt_insert2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_insert3 */
EIF_TYPED_VALUE _A1006_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5169, "dbt_insert3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_insert4 */
EIF_TYPED_VALUE _A1006_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5168, "dbt_insert4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_model1 */
EIF_TYPED_VALUE _A1006_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5164, "dbt_model1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_model3 */
EIF_TYPED_VALUE _A1006_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5163, "dbt_model3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_model5 */
EIF_TYPED_VALUE _A1006_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5162, "dbt_model5", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_1 dbt_model7 */
EIF_TYPED_VALUE _A1006_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5161, "dbt_model7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_ITERATOR8 dbt_iterator8 */
EIF_TYPED_VALUE _A1007_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5202, "dbt_iterator8", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_ITERATOR7 dbt_iterator7 */
EIF_TYPED_VALUE _A1008_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5203, "dbt_iterator7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_ITERATOR6 dbt_iterator6 */
EIF_TYPED_VALUE _A1009_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5204, "dbt_iterator6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_ITERATOR4 dbt_iterator4 */
EIF_TYPED_VALUE _A1010_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5205, "dbt_iterator4", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_ITERATOR3 dbt_iterator3 */
EIF_TYPED_VALUE _A1011_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5206, "dbt_iterator3", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_ITERATOR2 dbt_iterator2 */
EIF_TYPED_VALUE _A1012_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5207, "dbt_iterator2", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INNER_JOIN8 dbt_inner_join8 */
void _A1013_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5208, "dbt_inner_join8", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INNER_JOIN7 dbt_inner_join7 */
void _A1014_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5209, "dbt_inner_join7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INNER_JOIN6 dbt_inner_join6 */
void _A1015_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5210, "dbt_inner_join6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INNER_JOIN5 dbt_inner_join5 */
void _A1016_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5211, "dbt_inner_join5", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INTERVAL_IMAGE7 dbt_interval_image7 */
EIF_TYPED_VALUE _A1017_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5212, "dbt_interval_image7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INTERVAL_IMAGE6 dbt_interval_image6 */
void _A1018_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5213, "dbt_interval_image6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INTERVAL_IMAGE5 dbt_interval_image5 */
void _A1019_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5214, "dbt_interval_image5", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_INTERVAL_IMAGE4 dbt_interval_image4 */
void _A1020_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5215, "dbt_interval_image4", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_COMMON_KEY_DB9 dbt_common_key_db_9 */
EIF_TYPED_VALUE _A1021_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5216, "dbt_common_key_db_9", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_COMMON_KEY_DB8 dbt_common_key_db_8 */
EIF_TYPED_VALUE _A1022_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5217, "dbt_common_key_db_8", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_COMMON_KEY_DB7 dbt_common_key_db_7 */
void _A1023_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5218, "dbt_common_key_db_7", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_COMMON_KEY_DB6 dbt_common_key_db_6 */
void _A1024_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5219, "dbt_common_key_db_6", closed [1].it_r))(closed [1].it_r);
}

	/* DBT_COMMON_KEY_DB5 dbt_common_key_db_5 */
void _A1025_85 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5220, "dbt_common_key_db_5", closed [1].it_r))(closed [1].it_r);
}

	/* SET [G#1] eq */
EIF_TYPED_VALUE _A1084_61_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5549, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [INTEGER_32] eq */
EIF_TYPED_VALUE _A1089_61_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5549, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [G#1] g_to_true */
EIF_TYPED_VALUE _A1084_60_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5548, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [INTEGER_32] g_to_true */
EIF_TYPED_VALUE _A1089_60_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5548, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [G#1] in_both_set */
EIF_TYPED_VALUE _A1084_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5551, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [INTEGER_32] in_both_set */
EIF_TYPED_VALUE _A1089_63_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5551, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [G#1] in_either_set */
EIF_TYPED_VALUE _A1084_62_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5550, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [INTEGER_32] in_either_set */
EIF_TYPED_VALUE _A1089_62_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5550, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* REL [G#1, G#2] in_range */
EIF_TYPED_VALUE _A1083_95_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5581, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* REL [INTEGER_32, G#2] in_range */
EIF_TYPED_VALUE _A1088_95_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5581, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* REL [G#1, INTEGER_32] in_range */
EIF_TYPED_VALUE _A1091_95_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5581, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* REL [INTEGER_32, INTEGER_32] in_range */
EIF_TYPED_VALUE _A1094_95_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5581, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* REL [G#1, G#2] in_domain */
EIF_TYPED_VALUE _A1083_94_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5580, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* REL [INTEGER_32, G#2] in_domain */
EIF_TYPED_VALUE _A1088_94_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5580, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* REL [G#1, INTEGER_32] in_domain */
EIF_TYPED_VALUE _A1091_94_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5580, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* REL [INTEGER_32, INTEGER_32] in_domain */
EIF_TYPED_VALUE _A1094_94_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5580, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A159_97,
(fnptr)A159_161,
(fnptr)A159_162,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
