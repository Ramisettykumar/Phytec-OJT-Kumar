#include <stdio.h>

int isPowerOfFour(int num) {
    return (num > 0) && ((num & (num - 1)) == 0) && ((num & 0xAAAAAAAA) == 0);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPowerOfFour(num))
        printf("%d is a power of 4.\n", num);
    else
        printf("%d is not a power of 4.\n", num);
    
    return 0;
}

