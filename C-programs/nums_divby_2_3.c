#include<stdio.h>
void divisible()
{
	int n=1;
	while(n<=100)
	{
		if(n%2==0 && n%3==0)
		{
			printf("%d\n",n);

		}
		n++;
	}
}
int main()
{
	divisible();
}


