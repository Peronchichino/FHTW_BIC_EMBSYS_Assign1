/*
 * BubbleSortTask.c
 *
 *  Created on: Mar 5, 2023
 *      Author: lukas
 */

#include "BubbleSortTask.h"

typedef StaticTask_t osStaticThreadDef_t;

/* Definitions for BubbleSort */

uint32_t BubbleSortTaskBuffer[ 128 * 4];
osStaticThreadDef_t BubbleSortTaskControlBlock;
const osThreadAttr_t BubbleSort_attributes = {
  .name = "BubbleSort",
  .cb_mem = &BubbleSortTaskControlBlock,
  .cb_size = sizeof(BubbleSortTaskControlBlock),
  .stack_mem = &BubbleSortTaskBuffer[0],
  .stack_size = sizeof(BubbleSortTaskBuffer),
  .priority = (osPriority_t) osPriorityLow,
};

void BubbleSortTask(void *argument);

osThreadId_t CreatedBubbleSortTask(){
	return osThreadNew(BubbleSortTask, NULL, &BubbleSort_attributes);
}

osThreadAttr_t GetBubbleSortTaskAttributes(){
	return BubbleSort_attributes;
}

/* USER CODE BEGIN Header_BubbleSortTask */
/**
* @brief Function implementing the BubbleSort thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_BubbleSortTask */
void BubbleSortTask(void *argument)
{
  /* USER CODE BEGIN BubbleSortTask */
  /* Infinite loop */
  for(;;)
  {
	  int array[10] = {4132,578,4312,36,762,34,5128,356,129,85};
	  int size = sizeof(array)/sizeof(array[0]);

	  for(int i = 0; i < size - 1; i++){
		  for(int j = 0; j < size - i - 1; j++){
			  if(array[j] > array[i + 1]){
				  int buffer = array[j];
				  array[j] = array[j + 1];
				  array[j + 1] = buffer;
			  }
		  }
	  }
	  osDelay(100);
  }
  /* USER CODE END BubbleSortTask */
}
