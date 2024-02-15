#include<stdio.h>
int main()
{
	int A[]={1,2,3,4,5,6,8,9,10,11,12};
	int sum=0,i,diff=0,len,max,min,sumn=0;
	len=sizeof(A)/sizeof(A[0]);
	for(int i=0;i<len;i++)
	{
		sum+=A[i];
		max=A[len-1];
		min=A[0];
	}
	for(i=max;i>=min;i--)
	{
		sumn+=i;
	}
	diff=sumn-sum;
	printf("missing number %d",diff);
	return 0;
}
