#include "stm32f4xx.h"
void USART2_init(void);
char USART2_read(void);
void LED_blink(int value);
void delayMs(int);

int main (void) {
char c;
RCC->AHB1ENR |= 1;
GPIOA->MODER &=~0x00000C00;
GPIOA->MODER |= 0x00000400;
USART2_init();
while(1) {
c = USART2_read();
LED_blink(c);
}
}
void USART2_init (void) {
RCC->APB1ENR |= 1 << 17;
USART2->BRR = 0x008B;
USART2->CR1 =0x0004;
USART2->CR2 = 0x0000;
USART2->CR3 = 0x0000;
USART2->CR1 |=0x2000;
GPIOA->MODER &= ~0x00C0;
GPIOA->MODER |= 0x0080;
GPIOA->AFR[0] &= ~0xF000;
GPIOA->AFR[0] |= 0x7000;
}
char USART2_read(void) {
while (!(USART2->SR & 0x0020)) {}
return USART2->DR;
}
void LED_blink(int value) {
value %= 16;
for (; value > 0; value--) {
GPIOA->BSRR = 0x00000020;
delayMs(200);
GPIOA->BSRR = 0x00200000;
delayMs(200);
}
delayMs(800);
}

void delayMs(int n) {
int i;
for (; n > 0; n--)
for (i = 0; i < 2000; i++) ; }
