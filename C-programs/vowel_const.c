#include<stdio.h>
#include<string.h>
void task4()
{
	char data[100];
	printf("Enter a string: ");
	gets(data);
	int v_count=0,c_count=0;
	for(int i=0;data[i]!='\0';i++)
	{
		if(data[i] == 'a'||data[i] == 'e'||data[i] == 'i'||data[i] == 'o'||data[i] == 'u')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}	
	}
	printf("The vowels in given string is= %d\n",v_count);
	printf("The consonents in given string is= %d\n",c_count);

}
int main()
{
	task4();
}
