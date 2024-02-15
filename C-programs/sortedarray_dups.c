#include<stdio.h>
int main()
{
	int a[]={3,6,8,8,8,8,8,10,12,15,15,18,18,18,19,19,19,19,20,20};
	int size=sizeof(a)/sizeof(int);
	int i,lastdup,dupcount=1;
	for(i=0;i<size-1;i++)
	{
		if(a[i]==a[i+1]&&a[i]!=a[i+2])
		{
			lastdup=a[i+1];
			printf("Duplicate number is : %d and Number of duplicates  = %d\n",lastdup,dupcount);
			dupcount=1;
		}
		else if(a[i]==a[i+1])
			dupcount++;
		
			
	}
	return 0;
}


