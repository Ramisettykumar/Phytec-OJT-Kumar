#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	if(a>b)	
		printf("%d is maximum",a);
	else
		printf("%d is maximum",b);
	return 0;
}
		
