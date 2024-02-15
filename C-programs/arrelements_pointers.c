#include<stdio.h>
int main()
{
	int i,a[]={1,2,3,4,5,6,7,8,9,10};
	int *p;
	p=&a[0];//p=a
	for(i=0;i<10;i++)
	{
		printf("The array element %d is %d\n",i,*(p+i));
	}
}
	
