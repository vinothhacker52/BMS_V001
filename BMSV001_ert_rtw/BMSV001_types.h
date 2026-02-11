/*
 * File: BMSV001_types.h
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

#ifndef BMSV001_types_h_
#define BMSV001_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_enumCellVoltState_
#define DEFINED_TYPEDEF_FOR_enumCellVoltState_

typedef enum {
  NORMAL = 0,                          /* Default value */
  WARNING,
  DERATE,
  CUT_OFF
} enumCellVoltState;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_BMSV001_T RT_MODEL_BMSV001_T;

#endif                                 /* BMSV001_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
