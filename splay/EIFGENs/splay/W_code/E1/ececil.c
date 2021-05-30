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

	/* EXAMPLE_TESTS splay_delete1 */
EIF_TYPED_VALUE _A969_96 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5132, "splay_delete1", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_TESTS splay_insert1 */
EIF_TYPED_VALUE _A969_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5130, "splay_insert1", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_TESTS splay_search1 */
EIF_TYPED_VALUE _A969_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5128, "splay_search1", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_TESTS splay_splay1 */
EIF_TYPED_VALUE _A969_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5126, "splay_splay1", closed [1].it_r))(closed [1].it_r);
}

	/* EXAMPLE_TESTS splay_rotate1 */
EIF_TYPED_VALUE _A969_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5124, "splay_rotate1", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete1 */
void _A970_121 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5167, "splay_delete1", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete2 */
void _A970_120 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5166, "splay_delete2", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete3 */
void _A970_119 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5165, "splay_delete3", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete4 */
EIF_TYPED_VALUE _A970_118 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5164, "splay_delete4", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete5 */
EIF_TYPED_VALUE _A970_117 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5163, "splay_delete5", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete6 */
EIF_TYPED_VALUE _A970_116 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5162, "splay_delete6", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete7 */
EIF_TYPED_VALUE _A970_115 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5161, "splay_delete7", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete8 */
EIF_TYPED_VALUE _A970_114 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5160, "splay_delete8", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete9 */
EIF_TYPED_VALUE _A970_113 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5159, "splay_delete9", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_delete10 */
EIF_TYPED_VALUE _A970_112 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5158, "splay_delete10", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert1 */
void _A970_110 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5156, "splay_insert1", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert2 */
void _A970_109 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5155, "splay_insert2", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert3 */
void _A970_108 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5154, "splay_insert3", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert4 */
EIF_TYPED_VALUE _A970_107 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5153, "splay_insert4", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert5 */
EIF_TYPED_VALUE _A970_106 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5152, "splay_insert5", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert6 */
EIF_TYPED_VALUE _A970_105 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5151, "splay_insert6", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert7 */
EIF_TYPED_VALUE _A970_104 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5150, "splay_insert7", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert8 */
EIF_TYPED_VALUE _A970_103 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5149, "splay_insert8", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert9 */
EIF_TYPED_VALUE _A970_102 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5148, "splay_insert9", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert10 */
EIF_TYPED_VALUE _A970_101 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5147, "splay_insert10", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert11 */
EIF_TYPED_VALUE _A970_100 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5146, "splay_insert11", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_insert12 */
EIF_TYPED_VALUE _A970_99 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5145, "splay_insert12", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search1 */
void _A970_97 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5143, "splay_search1", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search2 */
void _A970_96 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5142, "splay_search2", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search3 */
void _A970_95 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5141, "splay_search3", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search4 */
EIF_TYPED_VALUE _A970_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5140, "splay_search4", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search5 */
EIF_TYPED_VALUE _A970_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5139, "splay_search5", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search6 */
EIF_TYPED_VALUE _A970_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "splay_search6", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search7 */
EIF_TYPED_VALUE _A970_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5137, "splay_search7", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search8 */
EIF_TYPED_VALUE _A970_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5136, "splay_search8", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search9 */
EIF_TYPED_VALUE _A970_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5135, "splay_search9", closed [1].it_r))(closed [1].it_r);
}

	/* ADVANCED_TESTS splay_search10 */
EIF_TYPED_VALUE _A970_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5134, "splay_search10", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_splay1 */
EIF_TYPED_VALUE _A971_100 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5181, "splay_splay1", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_splay2 */
EIF_TYPED_VALUE _A971_99 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5180, "splay_splay2", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_splay3 */
EIF_TYPED_VALUE _A971_98 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5179, "splay_splay3", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_splay4 */
EIF_TYPED_VALUE _A971_97 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5178, "splay_splay4", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_splay5 */
EIF_TYPED_VALUE _A971_96 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5177, "splay_splay5", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_splay6 */
EIF_TYPED_VALUE _A971_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5176, "splay_splay6", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_rotate1 */
EIF_TYPED_VALUE _A971_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5174, "splay_rotate1", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_rotate2 */
EIF_TYPED_VALUE _A971_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5173, "splay_rotate2", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_rotate3 */
EIF_TYPED_VALUE _A971_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5172, "splay_rotate3", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_rotate4 */
EIF_TYPED_VALUE _A971_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5171, "splay_rotate4", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_rotate5 */
EIF_TYPED_VALUE _A971_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5170, "splay_rotate5", closed [1].it_r))(closed [1].it_r);
}

	/* INTERMEDIATE_TESTS splay_rotate6 */
EIF_TYPED_VALUE _A971_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5169, "splay_rotate6", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS splay_relink1 */
void _A972_129 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5224, "splay_relink1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS splay_relink2 */
void _A972_128 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5223, "splay_relink2", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS splay_relink3 */
void _A972_127 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5222, "splay_relink3", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS splay_is_empty2 */
void _A972_125 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5220, "splay_is_empty2", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS splay_count4 */
void _A972_123 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5218, "splay_count4", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS splay_has_node5 */
void _A972_121 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5216, "splay_has_node5", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS splay_has5 */
void _A972_119 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5214, "splay_has5", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_nodes1 */
void _A972_116 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5211, "tn_nodes1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_nodes2 */
void _A972_115 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5210, "tn_nodes2", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_has_node1 */
void _A972_113 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5208, "tn_has_node1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_has1 */
void _A972_111 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5206, "tn_has1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_value_search1 */
void _A972_109 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5204, "tn_value_search1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_tree_search1 */
void _A972_107 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5202, "tn_tree_search1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_tree_search2 */
void _A972_106 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5201, "tn_tree_search2", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_max_node1 */
void _A972_104 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5199, "tn_max_node1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_min_node1 */
void _A972_102 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5197, "tn_min_node1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_count1 */
void _A972_100 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5195, "tn_count1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_insert_right2 */
void _A972_98 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5193, "tn_insert_right2", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_insert_right3 */
void _A972_97 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5192, "tn_insert_right3", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_insert_left2 */
void _A972_95 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5190, "tn_insert_left2", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_insert_left3 */
void _A972_94 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5189, "tn_insert_left3", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_make_internal1 */
void _A972_91 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5186, "tn_make_internal1", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_make_internal2 */
void _A972_90 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5185, "tn_make_internal2", closed [1].it_r))(closed [1].it_r);
}

	/* BASIC_TESTS tn_make_external1 */
void _A972_88 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5183, "tn_make_external1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_relink4 */
EIF_TYPED_VALUE _A973_147 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5285, "splay_relink4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_relink5 */
EIF_TYPED_VALUE _A973_146 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5284, "splay_relink5", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_is_empty1 */
EIF_TYPED_VALUE _A973_144 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5282, "splay_is_empty1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_count1 */
EIF_TYPED_VALUE _A973_142 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5280, "splay_count1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_count2 */
EIF_TYPED_VALUE _A973_141 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5279, "splay_count2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_count3 */
EIF_TYPED_VALUE _A973_140 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5278, "splay_count3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_has_node1 */
EIF_TYPED_VALUE _A973_138 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5276, "splay_has_node1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_has_node2 */
EIF_TYPED_VALUE _A973_137 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5275, "splay_has_node2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_has_node3 */
EIF_TYPED_VALUE _A973_136 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5274, "splay_has_node3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_has_node4 */
EIF_TYPED_VALUE _A973_135 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5273, "splay_has_node4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_has1 */
EIF_TYPED_VALUE _A973_133 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5271, "splay_has1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_has2 */
EIF_TYPED_VALUE _A973_132 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5270, "splay_has2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_has3 */
EIF_TYPED_VALUE _A973_131 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5269, "splay_has3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS splay_has4 */
EIF_TYPED_VALUE _A973_130 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5268, "splay_has4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_is_same_tree1 */
EIF_TYPED_VALUE _A973_128 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5266, "tn_is_same_tree1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_is_same_tree2 */
EIF_TYPED_VALUE _A973_127 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5265, "tn_is_same_tree2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_is_same_tree3 */
EIF_TYPED_VALUE _A973_126 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5264, "tn_is_same_tree3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_is_same_tree4 */
EIF_TYPED_VALUE _A973_125 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5263, "tn_is_same_tree4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_nodes3 */
EIF_TYPED_VALUE _A973_123 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5261, "tn_nodes3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_has_node2 */
EIF_TYPED_VALUE _A973_121 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5259, "tn_has_node2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_has_node3 */
EIF_TYPED_VALUE _A973_120 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5258, "tn_has_node3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_has2 */
EIF_TYPED_VALUE _A973_118 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5256, "tn_has2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_has3 */
EIF_TYPED_VALUE _A973_117 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5255, "tn_has3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_value_search2 */
EIF_TYPED_VALUE _A973_115 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5253, "tn_value_search2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_value_search3 */
EIF_TYPED_VALUE _A973_114 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5252, "tn_value_search3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_tree_search3 */
EIF_TYPED_VALUE _A973_112 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5250, "tn_tree_search3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_tree_search4 */
EIF_TYPED_VALUE _A973_111 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5249, "tn_tree_search4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_tree_search5 */
EIF_TYPED_VALUE _A973_110 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5248, "tn_tree_search5", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_tree_search6 */
EIF_TYPED_VALUE _A973_109 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5247, "tn_tree_search6", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_tree_search7 */
EIF_TYPED_VALUE _A973_108 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5246, "tn_tree_search7", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_max_node2 */
EIF_TYPED_VALUE _A973_106 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5244, "tn_max_node2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_min_node2 */
EIF_TYPED_VALUE _A973_104 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5242, "tn_min_node2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_count2 */
EIF_TYPED_VALUE _A973_102 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5240, "tn_count2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_count3 */
EIF_TYPED_VALUE _A973_101 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5239, "tn_count3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_insert_right1 */
void _A973_99 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5237, "tn_insert_right1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_insert_right4 */
EIF_TYPED_VALUE _A973_98 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5236, "tn_insert_right4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_insert_left1 */
void _A973_96 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5234, "tn_insert_left1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_insert_left4 */
EIF_TYPED_VALUE _A973_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5233, "tn_insert_left4", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_set_to_internal1 */
EIF_TYPED_VALUE _A973_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5231, "tn_set_to_internal1", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_make_internal3 */
EIF_TYPED_VALUE _A973_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5229, "tn_make_internal3", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_make_external2 */
EIF_TYPED_VALUE _A973_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5227, "tn_make_external2", closed [1].it_r))(closed [1].it_r);
}

	/* STARTER_TESTS tn_make_external3 */
EIF_TYPED_VALUE _A973_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5226, "tn_make_external3", closed [1].it_r))(closed [1].it_r);
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
