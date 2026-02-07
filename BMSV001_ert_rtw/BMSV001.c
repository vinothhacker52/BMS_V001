/*
 * File: BMSV001.c
 *
 * Code generated for Simulink model 'BMSV001'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Sat Feb  7 09:41:02 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Renesas->RH850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMSV001.h"
#include <string.h>
#include "BMSV001_types.h"
#include "BMSV001_capi.h"

/* Exported block signals */
Rxl_BMS ICM_Measurement;               /* '<S2>/ICM_Meas' */

/* Real-time model */
static RT_MODEL_BMSV001_T BMSV001_M_;
RT_MODEL_BMSV001_T *const BMSV001_M = &BMSV001_M_;

/* Model step function */
void BMSV001_step(void)
{
  /* BusAssignment: '<S2>/ICM_Meas' incorporates:
   *  BusCreator: '<S3>/BMS'
   *  Constant: '<S3>/AVM'
   *  Constant: '<S3>/BVM'
   *  Constant: '<S3>/TEMPERATURE'
   */
  memset(&ICM_Measurement.PCVM[0], 0, 18U * sizeof(real32_T));
  ICM_Measurement.BVM = 1.0F;
  ICM_Measurement.AVM = 1.0F;
  ICM_Measurement.TEMPERATURE = 1.0F;
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
