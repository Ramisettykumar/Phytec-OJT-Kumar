#include<stdio.h>
#include<string.h>
void main()
{
	char data[10][50],temp[50];
	int i,j,count,k;
	printf("enter count\n");
	scanf("%d",&count);
	printf("Enter %d names\n",count);
	__fpurge(stdin);
	for(i=0;i<count;i++)
		fgets(data[i],50,stdin);
	
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			k=strcmp(data[j],data[j+1]);
			if(k>0)
			{
				strcpy(temp,data[j]);
				strcpy(data[j],data[j+1]);
				strcpy(data[j+1],temp);
			}
		}
	}
	printf("after sort\n");
	for(i=0;i<count;i++)
	printf("%s\n",data[i]);
}	

