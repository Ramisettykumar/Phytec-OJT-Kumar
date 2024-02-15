#include<stdio.h>
 void reverse()
{
	int n,rev=0,rem;
	printf("Enter the number to reverse: \n");
	scanf("%d",&n);
	while(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("reverse number=%d\n",rev);
}
int main()
{
	reverse();
}
