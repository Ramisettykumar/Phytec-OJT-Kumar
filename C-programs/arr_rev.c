#include<stdio.h>
int main()
{
	int i,a[10];
	printf("Enter the ten elements to array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The reversed array elements are.......\n");
	for(i=9;i>=0;i--)
	{	
		printf("The array element %d is %d\n",i,a[i]);
	}
}
		


