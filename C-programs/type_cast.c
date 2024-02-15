#include<stdio.h>



int main()
{
	int a,b,sum;
	int *c=&sum;
	a=10;
	b=20;
	sum=a/b;
	printf("%f\n",(float)*c);
	return 0;
}



