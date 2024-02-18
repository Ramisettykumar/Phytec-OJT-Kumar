#include<stdio.h>
#include"math.h"
int main()
{
	int a,b;
	printf("enter a value: ");
	scanf("%d",&a);
	printf("enter b value: ");
	scanf("%d",&b);
	printf("Addition : %d\n",add(a,b));
	
	printf("substraction : %d\n",sub(a,b));
		
	printf("multiplication : %d\n",mul(a,b));
	printf("division : %d\n",div(a,b));
}
