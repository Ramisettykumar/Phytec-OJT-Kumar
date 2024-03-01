#include"stm32f4xx.h"
void uart2_init(void);
void UART2_write(int ch);
//char uart2_read(void);

void delayMs(int n) {
int i;
for (; n > 0; n--)
for (i = 0; i < 3195; i++) ;
}

int main(void)
{
	uart2_init();
	char message[] = "CMD+RESET\r\n";
	int i;
	for (i = 0; message[i] != '\0'; i++) {
		UART2_write(message[i]);
	}
	delayMs(1000);
	char messag[] = "CMD+WIFIMODE=1\r\n";
	int j;
	for (j = 0; messag[j] != '\0'; j++) {
		UART2_write(messag[j]);
	}
	delayMs(1000);
	char msg[] = "CMD+CONTOAP=vivo 1917,11111111\r\n";
	int k;
	for (k = 0; msg[k] != '\0'; k++) {
		UART2_write(msg[k]);
	}
	delayMs(1000);
}
void uart2_init(void)
{
	RCC->AHB1ENR |= 1;
	RCC->APB2ENR |= (0x1<<17);
	GPIOA->MODER &= ~0x000000F0;
	GPIOA->MODER |= 0x00000020;
	GPIOA->AFR[0] &= ~0x00000F00;
	GPIOA->AFR[0] |= 0x00000700 ; /* alt8 for UART4 */
	USART2->BRR = 0x01A1; /* 9600 baud @ 16 MHz */
	USART2->CR1 = 0x000C;/* enable Tx, Rx, 8-bit data */
	USART2->CR2 = 0x0000; /* 1 stop bit*/
	USART2->CR3 = 0x0000; /* no flow control */
	USART2->CR1 |= 0x2000; /*enable UART4 */

}
void UART2_write(int ch) {
while (!(USART2->SR & 0x0080)) {} // wait until Tx buffer empty
USART2->DR = (ch & 0xFF);
}
