/*
 * StoreInArrayTask.h
 *
 *  Created on: Mar 5, 2023
 *      Author: lukas
 */

#ifndef INC_STOREINARRAYTASK_H_
#define INC_STOREINARRAYTASK_H_

#include "cmsis_os.h"
#include "main.h"

osThreadId_t CreatedStoreInArrayTask();

osThreadAttr_t GetStoreInArrayTaskAttributes();

#endif /* INC_STOREINARRAYTASK_H_ */
