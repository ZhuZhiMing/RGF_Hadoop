/* * * * *
 *  AzRgf_kw.hpp 
 *  Copyright (C) 2011, 2012 Rie Johnson
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * * * * */

#ifndef _AZ_RGF_KW_HPP_
#define _AZ_RGF_KW_HPP_

/* Keywords and help text for AzDataForTrTree are in AzDataForTrTree.hpp */

/*---  Rgforest  ---*/
#define kw_loss           "loss="
#define kw_max_tree_num   "max_tree="
#define kw_max_lnum       "max_leaf_forest="
#define kw_lnum_inc_opt   "opt_interval="
#define kw_lnum_inc_test  "test_interval="
#define kw_s_tree_num     "num_tree_search=" 
#define kw_doForceToRefreshAll "Force_to_refresh_all"
#define kw_forest_beVerbose   "Verbose_forest"
#define kw_beVerbose      "Verbose"
#define kw_beVIS     "VIS"
#define kw_doTime         "Time"
#define kw_mem_policy "memory_policy="
#define mp_beTight "Conservative"
#define mp_not_beTight "Generous"

#define kw_temp_for_trees "temp_disk="
#define kw_f_ratio "f_ratio="
#define kw_random_seed "random_seed="
#define kw_doPassiveRoot "PassiveRoot"

#define help_loss           "Loss function"
#define help_max_tree_num   "Stop training when the number of trees exceeds this number."
#define help_max_lnum       "Stop training when the number of leaf nodes in the forest reaches this number."
#define help_lnum_inc_opt   "Weight optimization interval in terms of #leaf."
#define help_lnum_inc_test  "Approximate test interval in terms of #leaf. Must be multiple or divisor of the optimization interval for efficiency; otherwise, it may be changed by the system automatically."
#define help_s_tree_num     "Number of trees to be searched for the nodes to split.  The most recently-grown trees are searched first." 
#define help_doForceToRefreshAll  "For maintenance purpose only.  Always refresh the evaluation results of node splits."
#define help_forest_beVerbose  "Print forest-level information."
#define help_beVerbose       "Print information during training."
#define help_doTime          "Measure elapsed time for node search and weight optimization."
#define help_mem_policy "Conservative|Generous."

#define help_temp_for_trees "To reduce memory consumption, path names to the temporary files are generated by attaching serial numbers to this."
#define help_f_ratio "For feature sampling."
#define help_random_seed "Random seed."
#define help_doPassiveRoot "Consider to split the root (to start a new tree) only if there is no other choice."

/*--- AzRgforest_Sim ---*/
#define kw_s "shrink="
#define help_s "Shrinkage parameter to simulate Gradient Boosting."

/*--- RgRgfTree ---*/
#define kw_max_depth          "max_depth="
#define kw_min_size           "min_pop=" 
#define kw_max_leaf_num       "max_leaf_tree=" 
#define kw_doUseInternalNodes "UseInternalNodes" 
#define kw_tree_beVerbose     "Verbose_tree"

#define help_max_depth          "Maximum node depth of the trees."
#define help_min_size           "Minimum number of training data points in each leaf node." 
#define help_max_leaf_num       "Tree size.  Maximum number of the number of leaf nodes in the tree." 
#define help_doUseInternalNodes "Assign weights to internal nodes as well as leaf nodes." 
#define help_tree_beVerbose     "Print tree-level information."

/*--- AzRgfTree_Sim ---*/
#define kw_doWidthFirst    "WidthFirst"
#define help_doWidthFirst  "Grow trees in the width-first manner."

/*--- AzOptOnTree ---*/
#define kw_lambda "reg_L2="        
#define kw_sigma  "reg_L1=" 
#define sigma_dflt 0
#define kw_eta "opt_stepsize="    
#define kw_exit_delta "exit_delta=" 
#define kw_max_delta "max_delta="  
#define kw_doUseAvg "NormalizeTarget"  
#define kw_max_ite_num "num_iteration_opt=" 
#define kw_opt_beVerbose "Verbose_opt"
#define kw_not_doIntercept "DontUseIntercept"
#define kw_doIntercept     "UseIntercept"

#define help_lambda "lambda.  Regularization coefficient."        
#define help_sigma  "L1 regularization coefficient." 
#define help_eta "Used in the iterative optimization of weights.  Step size of Newton updates."    
#define help_exit_delta "Used in the iterative optimization of weights.  Exit the iterative optimization if the average absolute value of the update to the weights becomes smaller than this value." 
#define help_max_delta "Used in the iterative optimization of weights.  Truncate the change to the weights so that the absolute value is no greater than this value."  
#define help_doUseAvg "For training, normalize training targets so that the average becomes zero.  Intended for regression."  
#define help_max_ite_num "Used in the iterative optimization of weights.  Maximum number of iterations." 
   #define help_expo_loss " for exponential loss and the likes"
   #define help_oth_loss  " for square loss"

#define help_opt_beVerbose "Print information on weight optimization."
#define help_not_doIntercept "Do not include intercept in the weight optimization."
#define help_doIntercept     "Include intercept in the weight optimization."

/*--- AzRgf_FindSplit_Dflt ---*/
/* #define kw_lambda "reg_L2="  shared with opt */
/* #define kw_sigma  "reg_L1="  shared with opt */
#define kw_s_lambda "reg_sL2="
#define kw_s_sigma  "reg_sL1="
#define kw_split_points_num "Split_points_num="

#define help_shared_with_opt "Shared with the weight optimizer."
#define help_s_lambda "For node search, override lambda with this value."
#define help_s_sigma  "For node search, override L1 regularization parameter with this value."

/*--- AzTrTreeFeat ---*/
#define kw_doCheckConsistency "CheckConsistency"
#define kw_doCountRules "InformDupRules"
#define kw_doNewFirst "AddNewTreesFirst"

#define help_doCheckConsistency "For maintenance only.  Check consistency of internal data related to features."
#define help_doCountRules "Count duplicate rules."
#define help_doNewFirst "For maintenance only.  Process new trees before existing trees."

/*--- AzRegDepth ---*/
#define kw_depth_poly "reg_depth_polynomial="
#define kw_depth_base "reg_depth="
#define kw_depth_offs "reg_depth_offset="
#define kw_dontRegularizeRoot "DontRegularizeRoot"
#define kw_doRegularizeRoot "RegularizeRoot"

#define help_depth_poly "Experimental.  For polynomial penalty on the node depth.  Used with lambda to make the regularization coefficient as in lambda*depth^x."
#define help_depth_base "gamma>=1.  A larger value penalizes deeper nodes more severely.  Used with lambda as in lambda*gamma^depth."
#define help_depth_offs "Experimental.  Depth offset."
#define help_dontRegularizeRoot "Experimental.  Don't regularize the root in the min-penalty regularization."

/*--- min-penalty regularization ---*/
#define kw_doApproxTsr "ApproxPenalty"
#define help_doApproxTsr "For speed, approximate the change in penalty in the min-penalty regularization.  Experimental."

/*--- AzReg_TsrOpt ---*/
#define kw_reg_ite_num "min_penalty_ite="
#define reg_ite_num_dflt 20
#define help_reg_ite_num "Number of iterations for finding the min-penalty model."

/* component type */
#define Azforest_config "For forest-level control"
#define Aztree_config   "For tree-level control"
#define Azopt_config   "For weight optimization"
#define Azsplit_config "For node search"

#endif 
