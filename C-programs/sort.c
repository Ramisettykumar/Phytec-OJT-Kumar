#include<stdio.h>

void printArray(int *ptr,int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",*(ptr+i));
	printf("\n");
}
void main()
{
	int temp;
	int A[10]={12,13,14,15,16,17,18,19,20,21};
	printf("before sort\n");
	printArray(A,10);
	for(int i=0;i<10-1;i++)
	{
		for(int j=0;j<10-1-i;j++)
		{
			if(A[j] > A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("after sort\n");
	printArray(A,10);
}
