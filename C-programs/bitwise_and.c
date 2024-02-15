#include<stdio.h>
void on_off()
{
	unsigned int num;
	unsigned int bitmask=1<<2;
	unsigned int res;
	printf("Enter the number: ");
	scanf("%d",&num);
	res=num&bitmask;
	if(res==0)
		printf("The bit is off\n");
	else
		printf("The bit is on\n");
}
int main()
{
	on_off();
}
			
