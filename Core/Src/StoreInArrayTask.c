/*
 * StoreInArrayTask.c
 *
 *  Created on: Mar 5, 2023
 *      Author: lukas
 */

#include "StoreInArrayTask.h"

typedef StaticTask_t osStaticThreadDef_t;

/* Definitions for StoreInArray */

uint32_t StoreInArrayBuffer[ 128 * 4 ];
osStaticThreadDef_t StoreInArrayControlBlock;
const osThreadAttr_t StoreInArray_attributes = {
  .name = "StoreInArray",
  .cb_mem = &StoreInArrayControlBlock,
  .cb_size = sizeof(StoreInArrayControlBlock),
  .stack_mem = &StoreInArrayBuffer[0],
  .stack_size = sizeof(StoreInArrayBuffer),
  .priority = (osPriority_t) osPriorityLow,
};

void StoreInArrayTask(void *argument);

osThreadId_t CreatedStoreInArrayTask(){
	return osThreadNew(StoreInArrayTask, NULL, &StoreInArray_attributes);
}

osThreadAttr_t GetStoreInArrayTaskAttributes(){
	return StoreInArray_attributes;
}

/* USER CODE BEGIN Header_StoreInArrayTask */
/**
* @brief Function implementing the StoreInArray thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StoreInArrayTask */
void StoreInArrayTask(void *argument)
{
  /* USER CODE BEGIN StoreInArrayTask */
  /* Infinite loop */
  for(;;)
  {
    int num = 1;
    int numArray[100];
    for(int i = 0; i < 100; i++){
    	numArray[i] = num + 1;
    }
    osDelay(100);
  }
  /* USER CODE END StoreInArrayTask */
}

