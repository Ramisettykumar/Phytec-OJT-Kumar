#include"stm32f4xx.h"



void enable(void)
{
	RCC->AHB1ENR |=1;
	RCC->AHB1ENR |=1<<2;
	GPIOA->MODER |=0x400;
	GPIOC->MODER |=0;

}
void swii(void)
{
	if(GPIOC->IDR & 0x2000)

		GPIOA->BSRR |=0x200000;

	else

		GPIOA->BSRR |=0x20;

}
