note
	description: "Summary description for {DBT_MODEL12}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DBT_MODEL12

inherit
	TEST_ENVIRONMENT

create
	make

feature
	make
		do
			reset_as_linear_db
			add_violation_case_with_tag ("all_model_pairs_exist_as_key_value_tuples", agent dbt_model12)
		end

feature
	dbt_model12
		local
			l_model: like db_int_int.model
		do
			comment ("dbt_model12: POSTCONDITION, LINEAR_DB, all_model_pairs_exist_as_key_value_pairs")
			create {BAD_LINEAR_DB_MODEL_ALL_MODEL_PAIRS_EXIST_AS_KEY_VALUE_PAIRS} db_int_int.make

			if
				attached {BAD_LINEAR_DB_MODEL_ALL_MODEL_PAIRS_EXIST_AS_KEY_VALUE_PAIRS} db_int_int as a_db
			then
				a_db.insert_debug(1, 1)
			end

			l_model := db_int_int.model
		end
end
