#include <stdio.h>

// Function to remove the last set bit of num
int removeLastSetBit(int num) {
    return num & (num - 1);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = removeLastSetBit(num);
    
    printf("Number after removing the last set bit: %d\n", result);
    
    return 0;
}

