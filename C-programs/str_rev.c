#include<stdio.h>
#include<string.h>
void reverse_string()
{
	char data[30];
	int i,j;
	char x;
	int len=0;
	printf("Enter the string to reverse: ");
	gets(data);
	printf("The string before reversed:%s\n",data);
	for(i=0;data[i]!='\0';i++)
	{
		len++;
	}
	for(i=0,j=len-1;i<(len/2);i++,j--)
	{
		x=data[i];
		data[i]=data[j];
		data[j]=x;
	}
	printf("The reversed string is:%s\n",data);
}
int main()
{
	reverse_string();
}
