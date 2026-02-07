/*
 * File: BMSV001.c
 *
 * Code generated for Simulink model 'BMSV001'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Sat Feb  7 11:08:32 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Renesas->RH850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMSV001.h"
#include <math.h>
#include "rtwtypes.h"
#include "BMSV001_types.h"
#include "BMSV001_capi.h"

/* Exported block signals */
real32_T ICM_PCVM_Filtered[18];        /* '<S3>/Discrete Filter' */
real32_T ICM_BVM_Filtered;             /* '<S3>/Discrete Filter1' */
real32_T ICM_AVM_Filtered;             /* '<S3>/Discrete Filter2' */
real32_T ICM_TEMPERATURE_Filtered;     /* '<S3>/Discrete Filter3' */

/* Block signals (default storage) */
B_BMSV001_T BMSV001_B;

/* Block states (default storage) */
DW_BMSV001_T BMSV001_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BMSV001_T BMSV001_Y;

/* Real-time model */
static RT_MODEL_BMSV001_T BMSV001_M_;
RT_MODEL_BMSV001_T *const BMSV001_M = &BMSV001_M_;

/* Model step function */
void BMSV001_step(void)
{
  int32_T k;
  real32_T denAccum;
  real32_T numAccum;

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
    denAccum = BMSV001_ConstB.PCVM[k] - -0.95F *
      BMSV001_DW.DiscreteFilter_states[k];
    numAccum = 0.05F * denAccum;

    /* DiscreteFilter: '<S3>/Discrete Filter' */
    ICM_PCVM_Filtered[k] = numAccum;

    /* SignalConversion generated from: '<S2>/Signal Conversion' incorporates:
     *  DiscreteFilter: '<S3>/Discrete Filter'
     */
    BMSV001_B.ICM_PCVM_Filtered_j[k] = numAccum;

    /* Update for DiscreteFilter: '<S3>/Discrete Filter' */
    BMSV001_DW.DiscreteFilter_states[k] = denAccum;
  }

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant'
   *  MinMax: '<S2>/Min'
   *  RelationalOperator: '<S5>/Relational Operator'
   */
  if (fminf(fminf(fminf(fminf(fminf(fminf(fminf(fminf(fminf(fminf(fminf(fminf
      (fminf(fminf(fminf(fminf(fminf(BMSV001_B.ICM_PCVM_Filtered_j[0],
      BMSV001_B.ICM_PCVM_Filtered_j[1]), BMSV001_B.ICM_PCVM_Filtered_j[2]),
                         BMSV001_B.ICM_PCVM_Filtered_j[3]),
                   BMSV001_B.ICM_PCVM_Filtered_j[4]),
             BMSV001_B.ICM_PCVM_Filtered_j[5]), BMSV001_B.ICM_PCVM_Filtered_j[6]),
    BMSV001_B.ICM_PCVM_Filtered_j[7]), BMSV001_B.ICM_PCVM_Filtered_j[8]),
               BMSV001_B.ICM_PCVM_Filtered_j[9]), BMSV001_B.ICM_PCVM_Filtered_j
              [10]), BMSV001_B.ICM_PCVM_Filtered_j[11]),
            BMSV001_B.ICM_PCVM_Filtered_j[12]), BMSV001_B.ICM_PCVM_Filtered_j[13]),
          BMSV001_B.ICM_PCVM_Filtered_j[14]), BMSV001_B.ICM_PCVM_Filtered_j[15]),
                  BMSV001_B.ICM_PCVM_Filtered_j[16]),
            BMSV001_B.ICM_PCVM_Filtered_j[17]) < 2.6) {
    /* Outport: '<Root>/BattFaultFlg' incorporates:
     *  Constant: '<S5>/Constant4'
     */
    BMSV001_Y.BattFaultFlg = CUT_OFF;
  } else {
    /* Outport: '<Root>/BattFaultFlg' incorporates:
     *  Constant: '<S5>/Constant3'
     */
    BMSV001_Y.BattFaultFlg = NORMAL;
  }

  /* End of Switch: '<S5>/Switch' */
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
