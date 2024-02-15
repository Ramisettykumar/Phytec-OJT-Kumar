#include<stdio.h>
#include<string.h>
void convert()
{
	char a[100];
	printf("Enter a string: \n");
	gets(a);
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		
	}
			printf("After making to upper case,the string is =%s\n",a);
}
int main()
{
	convert();
}


