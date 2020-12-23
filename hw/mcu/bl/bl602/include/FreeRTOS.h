//  TODO: Fix the reference to FreeRTOS.h from hw/mcu/bl/bl602/ext/bl_iot_sdk/components/hal_drv/bl602_hal/bl_cks.c

#ifndef __BL602_FREERTOS_H
#define __BL602_FREERTOS_H

#include <stdint.h>

//  Used in hw/mcu/bl/bl602/ext/bl_iot_sdk/components/utils/include/utils_log.h
#define __FILENAME__ __FILE__

//  Placeholder declarations. Should never be called.
void vTaskDelay(int xTicksToDelay); 

int xPortGetFreeHeapSize();
void *pvPortMalloc();
void vPortFree(void *);
int xPortIsInsideInterrupt();

#endif  //  __BL602_FREERTOS_H
