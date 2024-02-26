#include <stdio.h>

int xor_without_xor_operator(int a, int b) {
    return (a & ~b) | (~a & b);
}

int main() {
    int num1 = 5;
    int num2 = 3;

    printf("XOR of %d and %d: %d\n", num1, num2, xor_without_xor_operator(num1, num2)); // Output: 6

    return 0;
}

