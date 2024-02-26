#include <stdio.h>

// Function to count the number of set bits in num
int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        // If the LSB is set, increment count
        count += num & 1;
        // Right shift num by 1 bit
        num >>= 1;
    }
    return count;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int count = countSetBits(num);
    
    printf("Number of set bits in %d: %d\n", num, count);
    
    return 0;
}

