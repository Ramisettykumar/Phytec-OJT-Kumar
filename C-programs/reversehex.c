#include<stdio.h>
int main()
{
	unsigned int n=0x12394578;
	unsigned int a,b,c,d,e,f,g,h;
	a=((n & 0x0000000f) <<28);
	b=((n & 0x000000f0) <<20);
	c=((n & 0x00000f00) <<12);
	d=((n & 0x0000f000) <<4);
	e=((n & 0x000f0000) >>4);
	f=((n & 0x00f00000) >>12);
	g=((n & 0x0f000000) >>20);
	h=((n & 0xf0000000) >>28);
	n=a|b|c|d|e|f|g|h;
	printf("Reversed hex number is 0x%x\n",n);
}
