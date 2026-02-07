#ifndef BMSV001_cap_host_h__
#define BMSV001_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} BMSV001_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C"
{

#endif

  void BMSV001_host_InitializeDataMapInfo(BMSV001_host_DataMapInfo_T *dataMap,
    const char *path);

#ifdef __cplusplus

}

#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* BMSV001_cap_host_h__ */

/* EOF: BMSV001_capi_host.h */
