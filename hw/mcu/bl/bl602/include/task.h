//  TODO: Fix the reference to task.h from hw/mcu/bl/bl602/ext/bl_iot_sdk/components/hal_drv/bl602_hal/bl_cks.c

#ifndef __BL602_TASK_H
#define __BL602_TASK_H

#define TaskHandle_t int
#define StackType_t int
#define StaticTask_t int

void taskENTER_CRITICAL();
void taskEXIT_CRITICAL();
void vTaskEnterCritical();
void vTaskExitCritical();
void vTaskDelete(void *);
int xTaskIncrementTick();
void vTaskSwitchContext();
int xTaskGetTickCount();
int xTaskGetTickCountFromISR();

typedef void TaskFunction_t(void *para);
int xTaskCreate(    TaskFunction_t pvTaskCode,
                            const char * const pcName,
                            int usStackDepth,
                            void *pvParameters,
                            int uxPriority,
                            TaskHandle_t *pxCreatedTask
                          );

#endif  //  __BL602_TASK_H
