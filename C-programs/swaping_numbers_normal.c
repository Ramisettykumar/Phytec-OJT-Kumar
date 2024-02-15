#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int num1,num2;
	printf("Enter value of num1 and num2: \n");
	scanf("%d %d",&num1,&num2);
	printf("Before swaping num1 is %d and num2 is %d\n",num1,num2);
	swap(&num1,&num2);
	printf("After swaping num1 is %d and num2 is %d\n",num1,num2);
	return 0;
}


