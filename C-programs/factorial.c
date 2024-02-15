#include<stdio.h>
int fact(int n)
{
	if(n==0) 
		return 1;
	else
		return fact(n-1)*n;
}
int main()
{
	int n=5;
	printf("%d is the factorial\n",fact(n));
}

