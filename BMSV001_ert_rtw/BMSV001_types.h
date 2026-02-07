/*
 * File: BMSV001_types.h
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

#ifndef BMSV001_types_h_
#define BMSV001_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_Rxl_BMS_
#define DEFINED_TYPEDEF_FOR_Rxl_BMS_

typedef struct {
  real32_T PCVM[18];
  real32_T BVM;
  real32_T AVM;
  real32_T TEMPERATURE;
} Rxl_BMS;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_BMSV001_T RT_MODEL_BMSV001_T;

#endif                                 /* BMSV001_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
