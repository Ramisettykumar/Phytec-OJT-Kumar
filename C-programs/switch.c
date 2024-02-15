#include<stdio.h>
int main()
{
	int n,choice;
	printf("1 : even or odd\n");
	printf("2 : prime\n");
	printf("3 : palindrome\n");
	printf("4 : armstrong\n");
	printf("5 : perfect\n");
	printf("6 : exit\n");
	printf("7 : Enter a choice: \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Even or odd number\n");
			break;
		case 2:
			printf("prime number\n");
			break;
		case 3:
			printf("palindrome\n");
			break;
		case 4:
			printf("armstrong\n");
			break;
		case 5:
			printf("perfect number\n");
			break;
		case 6:
			printf("exit program\n");
			break;
		default:
			printf("wrong choice\n");
			printf("check the menu\n");
	}
}


