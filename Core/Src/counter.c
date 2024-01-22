#include "stm32f4xx_hal.h"
#include "counter.h"


uint32_t number = 0;

uint32_t Get_Num(void)
{
	return number;
}

void Plus_One(void)
{
	number++;
}
