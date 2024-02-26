//Check if ith bit is set or not 
#include<stdio.h>
int main() {
	int n,i,mask;
	printf("Enter a digital number\n");
	scanf("%d",&n);
	printf("Enter a bit number\n");
	scanf("%d",&i);
	mask = 1 << (i-1);
       if (n & mask == 0)	
	       printf("SET\n");
       else
	       printf("NOT SET\n");
}
