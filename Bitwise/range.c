#include <stdio.h>

// Function to find XOR of numbers in the range [L, R]
int xorInRange(int L, int R) {
    // Initialize result
    int result = 0;

    // Find XOR of all numbers from 0 to L-1
    for (int i = 0; i < L; i++)
        result ^= i;

    // Find XOR of all numbers from 0 to R
    for (int i = 0; i <= R; i++)
        result ^= i;

    return result;
}

int main() {
    int L, R;
    printf("Enter the range [L, R]: ");
    scanf("%d %d", &L, &R);

    int result = xorInRange(L, R);
    printf("XOR of numbers in the range [%d, %d] is: %d\n", L, R, result);

    return 0;
}

