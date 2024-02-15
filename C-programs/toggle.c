#include<stdio.h>
void toggle()
{
	int res, n=10;
	int mask=(1<<5)|(1<<4)|(1<<3);
	res=n^mask;
	printf("The bits after toggle:%d\n",res);
}
int main()
{
	toggle();

}
