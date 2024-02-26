#include <stdio.h>

// Function to check if a number is even or odd using bitwise AND operation
void checkEvenOrOdd(int num) {
    if (num & 1)
        printf("%d is odd.\n", num);
    else
        printf("%d is even.\n", num);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    checkEvenOrOdd(num);
    
    return 0;
}

