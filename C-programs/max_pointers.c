#include<stdio.h>
void main()
{
	int num[10]={98,85,7,68,49,4,44,45,86,55};
	int *p;
	p=&num[0];
	int max;
	max=*p;
	for(int i=0;i<10;i++)
	{
		if(*(p+i) > max)
			max=*(p+i);
	}
	printf("max =%d\n",max);
}
