#ifndef INC_TASKMINIFAN_H_
#define INC_TASKMINIFAN_H_
#include "globals.h"
extern String fanState;
extern void initMiniFan();
void taskMiniFan(void *pvParameters);
#endif