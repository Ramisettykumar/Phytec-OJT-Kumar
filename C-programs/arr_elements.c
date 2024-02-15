#include<stdio.h>
int main()
{
	int i,a[10];
	printf("Enter the ten elements to array\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		printf("The array element %d is %d\n",i,a[i]);
	}
}
		


