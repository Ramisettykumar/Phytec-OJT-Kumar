void Enable(void);
void swii(void);
#define _IO volatile
#include<stdint.h>
//#define _IO volatile
typedef struct
{
  _IO uint32_t MODER;
  _IO uint32_t dummy[3];
  _IO uint32_t IDR;
  _IO uint32_t ODR;
  _IO uint32_t BSRR;
}GPIO_TypeDef;

typedef struct
{
	_IO uint32_t dummy[12];
	_IO uint32_t AHB1ENR;
}RCC_TypeDef;

#define GPIOA ((GPIO_TypeDef*)(0x40020000))
#define GPIOC ((GPIO_TypeDef*)(0x40020800))
#define RCC   ((RCC_TypeDef*)(0x40023800))
