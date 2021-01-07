//  TODO: Fix the reference to event_groups.h

#ifndef __BL602_EVENT_GROUPS_H
#define __BL602_EVENT_GROUPS_H

#define portMAX_DELAY 0
#define pdFAIL 0

#define EventGroupHandle_t void *
#define EventBits_t int

int xEventGroupClearBits();
int xEventGroupWaitBits();
EventGroupHandle_t xEventGroupCreate();
void vEventGroupDelete();
int xEventGroupSetBitsFromISR();

#endif  //  __BL602_EVENT_GROUPS_H
