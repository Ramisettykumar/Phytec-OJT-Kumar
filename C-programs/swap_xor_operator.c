#include<stdio.h>
void swap()
{
	int n1,n2;
	printf("Enter the first number to swap: \n");
	scanf("%d%d",&n1,&n2);
	printf("Before swaping n1=%d and n2=%d\n",n1,n2);
	n1=n1^n2;
	n2=n1^n2;
	n1=n1^n2;
	printf("After swaping n1=%d and n2=%d\n",n1,n2);
}
int main()
{

	swap();
}
