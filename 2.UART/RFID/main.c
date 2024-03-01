#include "stm32f4xx.h"
void USART2_init(void);
void USART2_write(int ch);
void delayMs(int);
char USART2_read(void);
void write(int ch);
void writ(int c);

int count=0;
int count1=0;
int main (void) {
char c;


USART2_init();
while(1)
{
for(int i=0;i<12;i++)
	{

	c=USART2_read();
	writ(c);
	USART2_write(c);

}

if(count==22)
{
	//write('\r');

	char b[50]="-Kumar";
	for(int i=0;b[i]!='\0';i++)
	{
		write(b[i]);

	}
	count-=count;
	count1-=count1;
	write('\r');
	write('\n');

}
else if(count1==22)
{

	//write('\r');

	char g[50]="-Mohan";
	for(int i=0;g[i]!='\0';i++)
	{
		write(g[i]);

	}
	count1-=count1;
	count-=count;
	write('\r');
	write('\n');
}
else
{


	char l[50]="-Manindra";
		for(int i=0;l[i]!='\0';i++)
		{
			write(l[i]);

		}
		count-=count;
		count1-=count1;
		write('\r');
		write('\n');
}
}

}
/* initialize UART4 to transmit at 9600 Baud */
void USART2_init(void)
{
RCC->AHB1ENR |= 1; /* Enable GPIOA clock */
RCC->APB1ENR |= (1<<17); /* Enable UART4 clock */
/* Configure PA0, PA1 for UART4 TX, RX */
GPIOA->AFR[0] &= ~0xFF00;
GPIOA->AFR[0] |= 0x7700; /* alt8 for USART2 */
GPIOA->MODER &= ~0xF0;
GPIOA->MODER |= 0xA0; /* enable alternate function for PA0, PA1 */
USART2->BRR = 0x0683; /* 9600 baud @ 16 MHz */
USART2->CR1 = 0x000C;/* enable Tx, Rx, 8-bit data */
USART2->CR2 = 0x0000; /* 1 stop bit*/
USART2->CR3 = 0x0000; /* no flow control */
USART2->CR1 |= 0x2000; /*enable USART2 */
}
/* Write a character to UART4 */
void USART2_write(int ch) {
    char arr1[2][20] = {"1800890BBg23", "180088FFBCD3"};

    while (!(USART2->SR & 0x0080)) {} // wait until Tx buffer empty


    /*for(int j=0;j<2;j++)
    {*/
    for (int i=0; i<12; i++) {
        if (ch == arr1[0][i]) // Compare the first character of arr1[i]
        	count++;
    }
    for(int j=0;j<12;j++)
    {
    	if(ch==arr1[1][j])
    		count1++;
    }
    }


//}

char USART2_read(void) {
while (!(USART2->SR & 0x0020)) {}
// wait until char arrives
return USART2->DR;
}


void write(int ch)
{
	while (!(USART2->SR & 0x0080)) {}

	USART2->DR = ch & 0xff;
}


void writ(int c)
{
	while (!(USART2->SR & 0x0080)) {}

	USART2->DR = c & 0xff;
}
