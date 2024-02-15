#include<stdio.h>
int main()
{
	int a[]={3,7,4,9,12,6,1,11,2,10};
	int b[12]={0,0,0,0,0,0,0,0,0,0};
	int i,len1,len2;
	len1=sizeof(a)/sizeof(int);
	len2=sizeof(b)/sizeof(int);
	for(i=0;i<len1;i++)
	{
		b[a[i]]++;
		
	}
	for(i=0;i<len2;i++)	
	{
		if(b[i]==0)
		{
			printf("The missing numbers in unsorted array is %d\n",i);
		}
	}
}

