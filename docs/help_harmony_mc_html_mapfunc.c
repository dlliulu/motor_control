#include "help_harmony_mc_map.h"
#include "help_harmony_mc_html_map.h"

int HTML_ID_Mapping(int id)
{
  switch(id)
  {
    case IDH_Motor_Control_Overview                            : return IDH_HTML_Motor_Control_Overview;
    case IDH_X2CScope_Plugin                                   : return IDH_HTML_X2CScope_Plugin;
    case IDH_Applications_Help                                 : return IDH_HTML_Applications_Help;
    case IDH_acim_vhz_Applications_Help                        : return IDH_HTML_acim_vhz_Applications_Help;
    case IDH_acim_vhz_Applications_acim_vhz_sam_c21            : return IDH_HTML_acim_vhz_Applications_acim_vhz_sam_c21;
    case IDH_acim_vhz_acim_vhz_sam_c21_Building_The_Application: return IDH_HTML_acim_vhz_acim_vhz_sam_c21_Building_The_Application;
    case IDH_acim_vhz_acim_vhz_sam_c21_MPLAB_Harmony_Configurations: return IDH_HTML_acim_vhz_acim_vhz_sam_c21_MPLAB_Harmony_Configurations;
    case IDH_acim_vhz_acim_vhz_sam_c21_Control_Algorithm       : return IDH_HTML_acim_vhz_acim_vhz_sam_c21_Control_Algorithm;
    case IDH_acim_vhz_acim_vhz_sam_c21_Hardware_Setup          : return IDH_HTML_acim_vhz_acim_vhz_sam_c21_Hardware_Setup;
    case IDH_acim_vhz_acim_vhz_sam_c21_Running_The_Application : return IDH_HTML_acim_vhz_acim_vhz_sam_c21_Running_The_Application;
    case IDH_pmsm_foc_Applications_Help                        : return IDH_HTML_pmsm_foc_Applications_Help;
    case IDH_pmsm_foc_Applications_pmsm_foc_pll_estimator_sam_e70: return IDH_HTML_pmsm_foc_Applications_pmsm_foc_pll_estimator_sam_e70;
    case IDH_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_Building_The_Application: return IDH_HTML_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_Building_The_Application;
    case IDH_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_MPLAB_Harmony_Configurations;
    case IDH_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_Control_Algorithm: return IDH_HTML_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_Control_Algorithm;
    case IDH_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_Hardware_Setup: return IDH_HTML_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_Hardware_Setup;
    case IDH_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_Running_The_Application: return IDH_HTML_pmsm_foc_pmsm_foc_pll_estimator_sam_e70_Running_The_Application;
    case IDH_pmsm_foc_pll_sam_e54_Applications_pmsm_foc_pll_estimator_sam_e54: return IDH_HTML_pmsm_foc_pll_sam_e54_Applications_pmsm_foc_pll_estimator_sam_e54;
    case IDH_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__Building_The_Application: return IDH_HTML_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__Building_The_Application;
    case IDH_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__MPLAB_Harmony_Configurations;
    case IDH_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__Control_Algorithm: return IDH_HTML_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__Control_Algorithm;
    case IDH_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__Hardware_Setup: return IDH_HTML_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__Hardware_Setup;
    case IDH_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__Running_The_Application: return IDH_HTML_pmsm_foc_pll_sam_e54_pmsm_foc_pll_estimator_sam_e54__Running_The_Application;
    case IDH_pmsm_foc_encoder_Applications_Help                : return IDH_HTML_pmsm_foc_encoder_Applications_Help;
    case IDH_pmsm_foc_encoder_Applications_pmsm_foc_encoder_sam_e70: return IDH_HTML_pmsm_foc_encoder_Applications_pmsm_foc_encoder_sam_e70;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_Building_The_Application: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_Building_The_Application;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_MPLAB_Harmony_Configurations;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_control_algorithm: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_control_algorithm;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_Hardware_Setup: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_Hardware_Setup;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_Running_The_Application: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e70_Running_The_Application;
    case IDH_pmsm_foc_encoder_Applications_pmsm_foc_encoder_sam_e54: return IDH_HTML_pmsm_foc_encoder_Applications_pmsm_foc_encoder_sam_e54;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_Building_The_Application: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_Building_The_Application;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_MPLAB_Harmony_Configurations;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_Control_Algorithm: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_Control_Algorithm;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_Hardware_Setup: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_Hardware_Setup;
    case IDH_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_Running_The_Application: return IDH_HTML_pmsm_foc_encoder_pmsm_foc_encoder_sam_e54_Running_The_Application;
    case IDH_pmsm_foc_rolo_Applications_Help                   : return IDH_HTML_pmsm_foc_rolo_Applications_Help;
    case IDH_pmsm_foc_rolo_Applications_pmsm_foc_rolo_sam_c21  : return IDH_HTML_pmsm_foc_rolo_Applications_pmsm_foc_rolo_sam_c21;
    case IDH_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_Building_The_Application: return IDH_HTML_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_Building_The_Application;
    case IDH_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_MPLAB_Harmony_Configurations;
    case IDH_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_Control_Algorithm: return IDH_HTML_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_Control_Algorithm;
    case IDH_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_Hardware_Setup: return IDH_HTML_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_Hardware_Setup;
    case IDH_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_Running_The_Application: return IDH_HTML_pmsm_foc_rolo_pmsm_foc_rolo_sam_c21_Running_The_Application;
    case IDH_pmsm_foc_rolo_wm_Applications_Help                : return IDH_HTML_pmsm_foc_rolo_wm_Applications_Help;
    case IDH_pmsm_foc_rolo_wm_Applications_pmsm_foc_rolo_wm_sam_c21: return IDH_HTML_pmsm_foc_rolo_wm_Applications_pmsm_foc_rolo_wm_sam_c21;
    case IDH_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_Building_The_Application: return IDH_HTML_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_Building_The_Application;
    case IDH_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_MPLAB_Harmony_Configurations;
    case IDH_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_Control_Algorithm: return IDH_HTML_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_Control_Algorithm;
    case IDH_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_Hardware_Setup: return IDH_HTML_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_Hardware_Setup;
    case IDH_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_Running_The_Application: return IDH_HTML_pmsm_foc_rolo_wm_pmsm_foc_rolo_wm_sam_c21_Running_The_Application;
    case IDH_pmsm_pfc_Applications_Help                        : return IDH_HTML_pmsm_pfc_Applications_Help;
    case IDH_pmsm_pfc_Applications_pmsm_pfc_foc_pll_estimator_sam_e70: return IDH_HTML_pmsm_pfc_Applications_pmsm_pfc_foc_pll_estimator_sam_e70;
    case IDH_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_Building_The_Application: return IDH_HTML_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_Building_The_Application;
    case IDH_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_MPLAB_Harmony_Configurations;
    case IDH_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_Control_Algorithm: return IDH_HTML_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_Control_Algorithm;
    case IDH_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_Hardware_Setup: return IDH_HTML_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_Hardware_Setup;
    case IDH_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_Running_The_Application: return IDH_HTML_pmsm_pfc_pmsm_pfc_foc_pll_estimator_sam_e70_Running_The_Application;
    case IDH_bldc_hall_Applications_Help                       : return IDH_HTML_bldc_hall_Applications_Help;
    case IDH_bldc_hall_Applications_APP1                       : return IDH_HTML_bldc_hall_Applications_APP1;
    case IDH_bldc_hall_bldc_bc_hall_sam_c21_Building_The_Application: return IDH_HTML_bldc_hall_bldc_bc_hall_sam_c21_Building_The_Application;
    case IDH_bldc_hall_APP1_MPLAB_Harmony_Configurations       : return IDH_HTML_bldc_hall_APP1_MPLAB_Harmony_Configurations;
    case IDH_bldc_hall_bldc_bc_hall_sam_c21_Control_Algorithm  : return IDH_HTML_bldc_hall_bldc_bc_hall_sam_c21_Control_Algorithm;
    case IDH_bldc_hall_APP1_Hardware_Setup                     : return IDH_HTML_bldc_hall_APP1_Hardware_Setup;
    case IDH_bldc_hall_APP1_Running_The_Application            : return IDH_HTML_bldc_hall_APP1_Running_The_Application;
    case IDH_pmsm_foc_position_control_Applications_Help       : return IDH_HTML_pmsm_foc_position_control_Applications_Help;
    case IDH_pmsm_foc_position_control_Applications_pmsm_foc_position_control_sam_e54: return IDH_HTML_pmsm_foc_position_control_Applications_pmsm_foc_position_control_sam_e54;
    case IDH_pmsm_foc_position_control_pmsm_foc_encoder_position_sam_e54__Building_The_Application: return IDH_HTML_pmsm_foc_position_control_pmsm_foc_encoder_position_sam_e54__Building_The_Application;
    case IDH_pmsm_foc_position_control_pmsm_foc_position_control_sam_e54_MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_foc_position_control_pmsm_foc_position_control_sam_e54_MPLAB_Harmony_Configurations;
    case IDH_pmsm_foc_position_control_pmsm_foc_encoder_position_sam_e54__Control_Algorithm: return IDH_HTML_pmsm_foc_position_control_pmsm_foc_encoder_position_sam_e54__Control_Algorithm;
    case IDH_pmsm_foc_position_control_pmsm_foc_position_control_sam_e54_Hardware_Setup: return IDH_HTML_pmsm_foc_position_control_pmsm_foc_position_control_sam_e54_Hardware_Setup;
    case IDH_pmsm_foc_position_control_pmsm_foc_position_control_sam_e54_Running_The_Application: return IDH_HTML_pmsm_foc_position_control_pmsm_foc_position_control_sam_e54_Running_The_Application;
    case IDH_pmsm_foc_rolo_fw_mtpa_Applications_Help           : return IDH_HTML_pmsm_foc_rolo_fw_mtpa_Applications_Help;
    case IDH_pmsm_foc_rolo_fw_mtpa_Applications_APP1           : return IDH_HTML_pmsm_foc_rolo_fw_mtpa_Applications_APP1;
    case IDH_pmsm_foc_rolo_fw_mtpa_App1_Building_The_Application: return IDH_HTML_pmsm_foc_rolo_fw_mtpa_App1_Building_The_Application;
    case IDH_pmsm_foc_rolo_fw_mtpa_APP1_MPLAB_Harmony_Configurations: return IDH_HTML_pmsm_foc_rolo_fw_mtpa_APP1_MPLAB_Harmony_Configurations;
    case IDH_pmsm_foc_rolo_fw_mtpa_pmsm_foc_rolo_fw_mtpa_sam_c21_Control_Algorithm: return IDH_HTML_pmsm_foc_rolo_fw_mtpa_pmsm_foc_rolo_fw_mtpa_sam_c21_Control_Algorithm;
    case IDH_pmsm_foc_rolo_fw_mtpa_APP1_Hardware_Setup         : return IDH_HTML_pmsm_foc_rolo_fw_mtpa_APP1_Hardware_Setup;
    case IDH_pmsm_foc_rolo_fw_mtpa_APP1_Running_The_Application: return IDH_HTML_pmsm_foc_rolo_fw_mtpa_APP1_Running_The_Application;
    default: return -1;
  }
}
