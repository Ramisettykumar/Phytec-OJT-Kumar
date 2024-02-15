#include<stdio.h>
void max()
{
	int i,a[10];
	printf("Enter the ten numbers: \n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[0]>a[i])
			a[0]=a[i];
	}
	printf("The min element in array is %d\n",a[0]);
}
int main()
{
	max();
}

