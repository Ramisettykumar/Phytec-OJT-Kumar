#include <stdio.h>

// Function to check if a number is a power of 8 using bitwise AND and left shift operations
int isPowerOfEight(int num) {
    // Check if the number is positive and if only one bit is set
    // Also, check if the bit set is at an odd position
    return (num > 0) && ((num & (num - 1)) == 0) && ((num & 0xAAAAAAAA) == 0);
    // 0xAAAAAAAA is a 32-bit number with 1s in every even position and 0s in every odd position
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPowerOfEight(num))
        printf("%d is a power of 8.\n", num);
    else
        printf("%d is not a power of 8.\n", num);
    
    return 0;
}

