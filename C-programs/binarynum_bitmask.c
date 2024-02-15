#include<stdio.h>
void binary()
{
	int n,res,bitmask;
	printf("Enter the number: \n");
	scanf("%d",&n);
	int i=31;
	while(i>=0)
	{
		bitmask=1<<i;
		res=n & bitmask;
		if(res==0)
			printf("0");
		else
			printf("1");
		i--;
	}
}
int main()
{
	binary();
}
