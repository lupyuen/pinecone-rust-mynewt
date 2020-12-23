//  TODO: Fix the reference to semphr.h from hw/mcu/bl/bl602/ext/bl_iot_sdk/components/hal_drv/bl602_hal/bl_sec.h

#ifndef __BL602_SEMPHR_H
#define __BL602_SEMPHR_H

//  TODO: Change to Mynewt Semaphore
#define SemaphoreHandle_t int

//  TODO: Change to Mynewt Semaphore
#define StaticSemaphore_t int

//  TODO: Change to Mynewt Semaphore
#define pdPASS 0

#define portMAX_DELAY 0

int xSemaphoreTake(int, int);
int xSemaphoreGive(int);

#endif  //  __BL602_SEMPHR_H
