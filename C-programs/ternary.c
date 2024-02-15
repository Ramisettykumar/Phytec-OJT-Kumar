#include<stdio.h>
void max()
{
	int n1,n2,n3,res;
	printf("Enter three numbers: \n");
	scanf("%d%d%d",&n1,&n2,&n3);
	res=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
	printf("The maximum number is %d\n",res);
}
int main()
{
	max();
}
