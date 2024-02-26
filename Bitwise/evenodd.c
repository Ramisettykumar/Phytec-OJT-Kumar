#include<stdio.h>
void findevenorodd(int num);
int main() {
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	findevenorodd(num);
}
void findevenorodd(int num) {
	if(num & 1) 
		printf("Odd number\n");
	else
		printf("Even number\n");
}
