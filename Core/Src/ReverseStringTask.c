/*
 * ReverseStringTask.c
 *
 *  Created on: Mar 5, 2023
 *      Author: lukas
 */

#include "ReverseStringTask.h"
#include "string.h"

typedef StaticTask_t osStaticThreadDef_t;

/* Definitions for ReverseString */

uint32_t ReverseStringBuffer[ 128 * 4 ];
osStaticThreadDef_t ReverseStringControlBlock;
const osThreadAttr_t ReverseString_attributes = {
  .name = "ReverseString",
  .cb_mem = &ReverseStringControlBlock,
  .cb_size = sizeof(ReverseStringControlBlock),
  .stack_mem = &ReverseStringBuffer[0],
  .stack_size = sizeof(ReverseStringBuffer),
  .priority = (osPriority_t) osPriorityLow,
};

void ReverseStringTask(void *argument);

osThreadId_t CreatedReverseStringTask(){
	return osThreadNew(ReverseStringTask, NULL, &ReverseString_attributes);
}

osThreadAttr_t GetReverseStringTaskAttributes(){
	return ReverseString_attributes;
}

/* USER CODE BEGIN Header_ReverseStringTask */
/**
* @brief Function implementing the ReverseString thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_ReverseStringTask */
void ReverseStringTask(void *argument)
{
  /* USER CODE BEGIN ReverseStringTask */
  /* Infinite loop */
  for(;;)
  {
    char* str = "I am a placeholder string, please excuse me ( ._.), tacocat";
    int length = strlen(str)-1;

    for(int i = 0; i < strlen(str)/2; i++){ //manually inverting string because strrev() is not included in this compiler
    	char buffer = str[i];
    	str[i] = str[length];
    	str[length--] = buffer;
    }
    osDelay(100);
  }
  /* USER CODE END ReverseStringTask */
}

