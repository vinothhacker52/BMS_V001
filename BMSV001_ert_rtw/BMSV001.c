/*
 * File: BMSV001.c
 *
 * Code generated for Simulink model 'BMSV001'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Sat Feb  7 16:46:09 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Renesas->RH850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMSV001.h"
#include "rtwtypes.h"
#include "BMSV001_capi.h"

/* Exported block signals */
real32_T ICM_PCVM_Filtered[18];        /* '<S3>/Discrete Filter' */
real32_T ICM_PCVM0_Filt;               /* '<S2>/Signal Conversion1' */
real32_T ICM_PCVM1_Filt;               /* '<S2>/Signal Conversion2' */
real32_T ICM_BVM_Filtered;             /* '<S3>/Discrete Filter1' */
real32_T ICM_AVM_Filtered;             /* '<S3>/Discrete Filter2' */
real32_T ICM_TEMPERATURE_Filtered;     /* '<S3>/Discrete Filter3' */

/* Block states (default storage) */
DW_BMSV001_T BMSV001_DW;

/* Real-time model */
static RT_MODEL_BMSV001_T BMSV001_M_;
RT_MODEL_BMSV001_T *const BMSV001_M = &BMSV001_M_;

/* Model step function */
void BMSV001_step(void)
{
  int32_T k;
  real32_T rtb_ICM_PCVM_Filtered[18];
  real32_T denAccum;

  /* SignalConversion generated from: '<S4>/BMS' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant1'
   */
  rtb_ICM_PCVM_Filtered[0] = 3.856F;
  rtb_ICM_PCVM_Filtered[1] = 3.856F;
  rtb_ICM_PCVM_Filtered[2] = 3.856F;
  rtb_ICM_PCVM_Filtered[3] = 3.856F;
  rtb_ICM_PCVM_Filtered[4] = 3.856F;
  rtb_ICM_PCVM_Filtered[5] = 3.856F;
  rtb_ICM_PCVM_Filtered[6] = 3.856F;
  rtb_ICM_PCVM_Filtered[7] = 3.856F;
  rtb_ICM_PCVM_Filtered[8] = 3.856F;
  rtb_ICM_PCVM_Filtered[9] = 3.856F;
  rtb_ICM_PCVM_Filtered[10] = 3.856F;
  rtb_ICM_PCVM_Filtered[11] = 3.856F;
  rtb_ICM_PCVM_Filtered[12] = 3.856F;
  rtb_ICM_PCVM_Filtered[13] = 3.856F;
  rtb_ICM_PCVM_Filtered[14] = 3.856F;
  rtb_ICM_PCVM_Filtered[15] = 3.9254F;
  rtb_ICM_PCVM_Filtered[16] = 3.9254F;
  rtb_ICM_PCVM_Filtered[17] = 3.9254F;

  /* DiscreteFilter: '<S3>/Discrete Filter1' */
  BMSV001_DW.DiscreteFilter1_states = 1.0F - -0.95F *
    BMSV001_DW.DiscreteFilter1_states;

  /* DiscreteFilter: '<S3>/Discrete Filter1' */
  ICM_BVM_Filtered = 0.05F * BMSV001_DW.DiscreteFilter1_states;

  /* DiscreteFilter: '<S3>/Discrete Filter2' */
  BMSV001_DW.DiscreteFilter2_states = 1.0F - -0.95F *
    BMSV001_DW.DiscreteFilter2_states;

  /* DiscreteFilter: '<S3>/Discrete Filter2' */
  ICM_AVM_Filtered = 0.05F * BMSV001_DW.DiscreteFilter2_states;

  /* DiscreteFilter: '<S3>/Discrete Filter3' */
  BMSV001_DW.DiscreteFilter3_states = 1.0F - -0.95F *
    BMSV001_DW.DiscreteFilter3_states;

  /* DiscreteFilter: '<S3>/Discrete Filter3' */
  ICM_TEMPERATURE_Filtered = 0.05F * BMSV001_DW.DiscreteFilter3_states;
  for (k = 0; k < 18; k++) {
    /* DiscreteFilter: '<S3>/Discrete Filter' incorporates:
     *  BusCreator: '<S4>/BMS'
     */
    denAccum = rtb_ICM_PCVM_Filtered[k] - -0.95F *
      BMSV001_DW.DiscreteFilter_states[k];
    ICM_PCVM_Filtered[k] = 0.05F * denAccum;

    /* Update for DiscreteFilter: '<S3>/Discrete Filter' */
    BMSV001_DW.DiscreteFilter_states[k] = denAccum;
  }

  /* SignalConversion: '<S2>/Signal Conversion1' incorporates:
   *  SignalConversion generated from: '<S2>/Signal Conversion'
   */
  ICM_PCVM0_Filt = ICM_PCVM_Filtered[0];

  /* SignalConversion: '<S2>/Signal Conversion2' incorporates:
   *  SignalConversion generated from: '<S2>/Signal Conversion'
   */
  ICM_PCVM1_Filt = ICM_PCVM_Filtered[1];
}

/* Model initialize function */
void BMSV001_initialize(void)
{
  /* Registration code */

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  BMSV001_InitializeDataMapInfo();
}

/* Model terminate function */
void BMSV001_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
