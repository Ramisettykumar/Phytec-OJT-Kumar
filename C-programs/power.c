#include<stdio.h>
int power(int n,int m)
{
	if(n==0) 
		return 1;
	else
		return power(n-1,m)*m;
}
int main()
{
	int n=5,m=2;
	printf("%d\n",power(n,m));
}

