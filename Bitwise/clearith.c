#include <stdio.h>

// Function to clear the ith bit of num
int clearBit(int num, int i) {
    int mask = ~(1 << i);
    return num & mask;
}

int main() {
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter the bit position (0-based indexing): ");
    scanf("%d", &i);
    
    if (i < 0 || i > 31) {
        printf("Invalid bit position!\n");
        return 1;
    }
    
    num = clearBit(num, i);
    
    printf("Number after clearing %dth bit: %d\n", i, num);
    
    return 0;
}

