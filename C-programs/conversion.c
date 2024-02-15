#include<stdio.h>
void conversion()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("num in decimal=%d\n",n);
	printf("num in hexa decimal=%x\n",n);
	printf("num in octal=%o\n",n);

}
int main()
{
	conversion();
}

