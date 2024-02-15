#include<stdio.h>
int isevenodd(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
int isPalindrome(int n)
{
	int rem,rev=0,temp;
	temp=n;
	while(n)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	}
	if(temp==rev)
		return 1;
	else
		return 0;
}
int isArmstrong(int n)
{
	int rem,sum=0,temp;
	temp=n;
	while(n)
	{
	rem=n%10;
	sum=sum+rem*rem*rem;
	n=n/10;
	}
	if(sum==temp)
		return 1;
	else
		return 0;
}
int isPerfectnumber(int n)
{
	int sum=0,temp,i;
	temp=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}

	}
	if(sum==temp)
		return 1;
	else 
		return 0;

}
int main()
{
	int n,choice;
	while(1)
	{
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
				printf("Enter the number to check even or odd: \n");
				scanf("%d",&n);
				if(isevenodd(n))
					printf("given number is even");
				else
					printf("given number is odd");
				
				break;
			case 2:
				printf("prime number\n");
				printf("\n");
				break;
			case 3:
				printf("palindrome\n");
				printf("Enter a number to check palindrome or not: ");
				scanf("%d",&n);
				if(isPalindrome(n))
					printf("The given number is palindrome\n");
				else
					printf("The given number is not a palindrome\n");

				break;
			case 4:
				printf("armstrong\n");
				printf("Enter a number to check whether it is armstrong or not: \n");
				scanf("%d",&n);
				if(isArmstrong(n))
					printf("The given number is armstrong number\n");
				else
					printf("The given number is not a armstrong number\n");
				break;
			case 5:
				printf("perfect number\n");
				printf("Enter the number for to check whether it is a perfect number or not: \n");
				scanf("%d",&n);
				if(isPerfectnumber(n))
					printf("The given number is perfect number\n");
				else
					printf("The given number is not a perfect number\n");
				break;
			case 6:
				printf("exit program\n");
				break;
			default:
				printf("wrong choice\n");
				printf("check the menu\n");
		}
	}
}
