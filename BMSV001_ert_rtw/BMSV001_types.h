/*
 * File: BMSV001_types.h
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

#ifndef BMSV001_types_h_
#define BMSV001_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_enumCellVoltMinState_
#define DEFINED_TYPEDEF_FOR_enumCellVoltMinState_

typedef enum {
  NORMAL = 0,                          /* Default value */
  WARNING,
  DERATE,
  CUT_OFF
} enumCellVoltMinState;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_BMSV001_T RT_MODEL_BMSV001_T;

#endif                                 /* BMSV001_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
