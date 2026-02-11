/*
 * File: BMSV001.c
 *
 * Code generated for Simulink model 'BMSV001'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Wed Feb 11 11:02:14 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Renesas->RH850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMSV001.h"
#include <string.h>
#include "rtwtypes.h"
#include "BMSV001_capi.h"

/* Exported block signals */
real32_T ICM_PCVM_Filtered[18];        /* '<S3>/Discrete Filter' */
real32_T ICM_BVM_Raw;                  /* '<S5>/C Caller' */
real32_T ICM_BVM_Filtered;             /* '<S3>/Discrete Filter1' */
real32_T ICM_AVM_Filtered;             /* '<S3>/Discrete Filter2' */
real32_T ICM_TEMPERATURE_Filtered;     /* '<S3>/Discrete Filter3' */

/* Block signals (default storage) */
B_BMSV001_T BMSV001_B;

/* Block states (default storage) */
DW_BMSV001_T BMSV001_DW;

/* External inputs (root inport signals with default storage) */
ExtU_BMSV001_T BMSV001_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BMSV001_T BMSV001_Y;

/* Real-time model */
static RT_MODEL_BMSV001_T BMSV001_M_;
RT_MODEL_BMSV001_T *const BMSV001_M = &BMSV001_M_;

/* Model step function */
void BMSV001_step(void)
{
  int32_T k;
  real32_T DiscreteFilter_tmp[18];
  real32_T denAccum;
  for (k = 0; k < 18; k++) {
    /* DiscreteFilter: '<S3>/Discrete Filter' incorporates:
     *  BusCreator: '<S4>/BMS'
     */
    denAccum = BMSV001_ConstB.PCVM[k] - -0.95F *
      BMSV001_DW.DiscreteFilter_states[k];
    DiscreteFilter_tmp[k] = denAccum;
    denAccum *= 0.05F;

    /* DiscreteFilter: '<S3>/Discrete Filter' */
    ICM_PCVM_Filtered[k] = denAccum;

    /* SignalConversion generated from: '<S2>/Signal Conversion' incorporates:
     *  DiscreteFilter: '<S3>/Discrete Filter'
     */
    BMSV001_B.ICM_PCVM_Filtered_j[k] = denAccum;
  }

  /* CCaller: '<S5>/C Caller' */
  ICM_BVM_Raw = SystemGetVoltage(0U);

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

  /* Update for DiscreteFilter: '<S3>/Discrete Filter' */
  memcpy(&BMSV001_DW.DiscreteFilter_states[0], &DiscreteFilter_tmp[0], 18U *
         sizeof(real32_T));
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
