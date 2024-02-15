#include<stdio.h>
void sum_array()
{
	int i,res=0,a[5];
	printf("Enter upto 5 elements only in an array to get sum of them: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		res=res+a[i];
	}
	printf("After adding the elements of array,the result is:%d\n",res);

}
int main()
{
	sum_array();

}
