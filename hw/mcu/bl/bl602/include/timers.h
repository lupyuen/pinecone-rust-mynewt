//  TODO: Fix the reference to timers.h from hw/mcu/bl/bl602/ext/bl_iot_sdk/components/hal_drv/bl602_hal/hal_button.c

#ifndef __BL602_TIMERS_H
#define __BL602_TIMERS_H

#define pdPASS 0
#define pdTRUE 0
#define portTICK_PERIOD_MS 1

#define xTimerHandle int
#define TimerHandle_t int

int xTimerStop(int, int);
void *pvTimerGetTimerID(int);
int xTimerChangePeriod(int, int, int);
int xTimerStartFromISR();
int xTimerCreate();
int pdMS_TO_TICKS();

#endif  //  __BL602_TIMERS_H
