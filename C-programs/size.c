#include<stdio.h>
void display_size()
{
	short int n1;
	int n2;
	long int n3;
	printf("Size of n1=%ld\n",sizeof(n1));
	printf("Size of n2=%ld\n",sizeof(n2));
	printf("Size of n3=%ld\n",sizeof(n3));
}
int main()
{
	display_size();
}

