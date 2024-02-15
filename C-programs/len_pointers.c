#include<stdio.h>
void main()
{
	char a[]="c programming\n";
	char *p;
	p=&a[0];
	int len=0;
	printf("%s",a);
	for(int i=0;*(p+i)!='\0';i++)	
	{
		len++;
	}
	printf("The length of the given string is %d\n",len);

}

