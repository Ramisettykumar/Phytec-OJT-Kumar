#include<stdio.h>
int main()
{
	int A[]={2,3,4,5,6,8,9,10,11,12};
	int i,len;
	len=sizeof(A)/sizeof(A[0]);
	for(int i=0;i<len;i++)
	{
		if(A[i]-i!=A[0])
		{
			printf("The missing number %d\n",A[i]-1);
			break;
		}
	}
	return 0;
}
