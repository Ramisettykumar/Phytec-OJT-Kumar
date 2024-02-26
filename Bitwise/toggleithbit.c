#include<stdio.h>
int toggleIthbit(int n,int I);
int main() {
	int n,I;
	int count= toggleIthbit(n,I);
	printf("%d\n",count);
}
int toggleIthbit(int n,int I) {
	int mask = 1 << (I-1);
	return (n^ mask);
}
