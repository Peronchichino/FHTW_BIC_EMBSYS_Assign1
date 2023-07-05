/*
 * BubbleSortTask.h
 *
 *  Created on: Mar 5, 2023
 *      Author: lukas
 */

#ifndef INC_BUBBLESORTTASK_H_
#define INC_BUBBLESORTTASK_H_

#include "cmsis_os.h"
#include "main.h"

osThreadId_t CreatedBubbleSortTask();

osThreadAttr_t GetBubbleSortTaskAttributes();

#endif /* INC_BUBBLESORTTASK_H_ */
