#include<stdio.h>
void sort(int n,int *ptr)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+j)<*(ptr+i))
				k=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=k;
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",*(ptr+i));
}
int main()
{
	int n=5;
	int arr[]={14,12,14,12,9};
	sort(n,arr);
	return 0;
}
		
		
