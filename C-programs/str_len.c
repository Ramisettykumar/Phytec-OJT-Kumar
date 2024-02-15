#include<stdio.h>
void length()
{
	char a[100]="kumar royals";
	int len=0;
	for(int i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("The length of the given string is:%d\n",len);
}
int main()
{
	length();
}

