# FHTW_BIC_EMBSYS_Assign1

Assignment description:
Write a FreeRTOS application for your Nucleo Development Board which fulfills the following requirements:
- Create three tasks that allocate memory on the stack by different means, e.g. using memory allocation, recursion, etc.
- A fourth task shall periodically output the stack size and the remaining stack size of these tasks using the corresponding global structs of the tasks (osThreadAttr_t) and the function osThreadGetStackSpace()
- The output of the stack size and remaining stack size should be done by using a UART interface of the Nucleo board.
- All tasks and queues must be allocated statically in this assignment. Investigate how this changes the code generation compared to dynamically allocated FreeRTOS objects and document your findings.
- 
Hint: The transmit via UART can be done by retargeting the "printf" function. You will need to write your own "_write" and/or "__io_putchar" function to be able to use "printf" accordingly.
