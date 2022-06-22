#ifndef __SS_MIN_FUNCTION_H_
#define __SS_MIN_FUNCTION_H_

#include "MAGEMin.h"
SS_ref SS_UPDATE_function(				global_variable 	 gv,
										SS_ref 				 SS_ref_db, 
										bulk_info 	 		 z_b,
										char    			*name			);		
								
csd_phase_set CP_UPDATE_function(		global_variable 	 gv,
										SS_ref 				 SS_ref_db,
										csd_phase_set  		 cp, 
										bulk_info 	 		 z_b			);		

global_variable split_cp(				global_variable 	 gv,
										SS_ref 			    *SS_ref_db,
										csd_phase_set  		*cp				);

void ss_min_PGE(						int 				 mode, 
										global_variable 	 gv,
										obj_type 			*SS_objective,
										bulk_info 	 		 z_b,
										SS_ref 				*SS_ref_db,
										csd_phase_set  		*cp				);
										
void ss_min_LP(							int 				 mode, 
										global_variable 	 gv,
										obj_type 			*SS_objective,
										bulk_info 	 		 z_b,
										SS_ref 				*SS_ref_db,
										csd_phase_set  		*cp				);
										
void copy_to_cp(						int 				 i, 
										int 				 ph_id,
										global_variable 	 gv,
										SS_ref 			    *SS_ref_db,
										csd_phase_set  		*cp				);

global_variable init_ss_db(				int 				 EM_database,
										bulk_info 	 		 z_b,
										global_variable 	 gv,
										SS_ref 				*SS_ref_db		);

void SS_ref_destroy(					global_variable 	 gv, 
										SS_ref 				*SS_ref_db		);

void CP_destroy(						global_variable 	 gv, 
										csd_phase_set 		*cp				);

#endif
