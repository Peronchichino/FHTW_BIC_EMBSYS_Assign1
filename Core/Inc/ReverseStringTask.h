/*
 * ReverseStringTask.h
 *
 *  Created on: Mar 5, 2023
 *      Author: lukas
 */

#ifndef INC_REVERSESTRINGTASK_H_
#define INC_REVERSESTRINGTASK_H_

#include "cmsis_os.h"
#include "main.h"


osThreadId_t CreatedReverseStringTask();

osThreadAttr_t GetReverseStringTaskAttributes();

#endif /* INC_REVERSESTRINGTASK_H_ */
