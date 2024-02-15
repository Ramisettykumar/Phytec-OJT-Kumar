#include<stdio.h>
int fib(int n)
{
	int a=0,b=1,r;
	for(int i=2;i<n;i++)
	{
		r=a+b;
		a=b;
		b=r;
	}
	printf("%d",r);
}
int main()
{
	fib(4);
}
	
