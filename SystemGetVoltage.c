#include "SystemGetVoltage.h"

float SystemGetVoltage(uint8_T channel){
    if(channel == 0)
        return 1.7;
    if(channel == 1)
        return 1.8;
    else
        return 0;
}