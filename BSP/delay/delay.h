#ifndef DELAY_H
#define DELAY_H

#include "stm32f10x.h"

extern void delay_init(void);

extern void delay_us(uint32_t nus);

extern void delay_ms(uint16_t nms);


#endif
