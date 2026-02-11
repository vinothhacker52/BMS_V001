/*
 * File: BMSV001.h
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

#ifndef BMSV001_h_
#define BMSV001_h_
#ifndef BMSV001_COMMON_INCLUDES_
#define BMSV001_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "math.h"
#endif                                 /* BMSV001_COMMON_INCLUDES_ */

#include "BMSV001_types.h"
#include "rtw_modelmap.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real32_T ICM_PCVM_Filtered_j[18];    /* '<S2>/Signal Conversion' */
} B_BMSV001_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T DiscreteFilter_states[18];  /* '<S3>/Discrete Filter' */
  real32_T DiscreteFilter1_states;     /* '<S3>/Discrete Filter1' */
  real32_T DiscreteFilter2_states;     /* '<S3>/Discrete Filter2' */
  real32_T DiscreteFilter3_states;     /* '<S3>/Discrete Filter3' */
} DW_BMSV001_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T PCVM[18];             /* '<S4>/Data Type Conversion' */
} ConstB_BMSV001_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_BMSV001_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T BattFaultFlg;                 /* '<Root>/BattFaultFlg' */
} ExtY_BMSV001_T;

/* Real-time Model Data Structure */
struct tag_RTM_BMSV001_T {
  const char_T * volatile errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;
};

/* Block signals (default storage) */
extern B_BMSV001_T BMSV001_B;

/* Block states (default storage) */
extern DW_BMSV001_T BMSV001_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_BMSV001_T BMSV001_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_BMSV001_T BMSV001_Y;
extern const ConstB_BMSV001_T BMSV001_ConstB;/* constant block i/o */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real32_T ICM_PCVM_Filtered[18]; /* '<S3>/Discrete Filter' */
extern real32_T ICM_BVM_Raw;           /* '<S5>/C Caller' */
extern real32_T ICM_BVM_Filtered;      /* '<S3>/Discrete Filter1' */
extern real32_T ICM_AVM_Filtered;      /* '<S3>/Discrete Filter2' */
extern real32_T ICM_TEMPERATURE_Filtered;/* '<S3>/Discrete Filter3' */

/* Model entry point functions */
extern void BMSV001_initialize(void);
extern void BMSV001_step(void);
extern void BMSV001_terminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  BMSV001_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_BMSV001_T *const BMSV001_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BMSV001'
 * '<S1>'   : 'BMSV001/BMS'
 * '<S2>'   : 'BMSV001/BMS/CBM'
 * '<S3>'   : 'BMSV001/BMS/ICM'
 * '<S4>'   : 'BMSV001/BMS/RXL'
 * '<S5>'   : 'BMSV001/BMS/CBM/Cell Voltage Monitoring'
 */
#endif                                 /* BMSV001_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
