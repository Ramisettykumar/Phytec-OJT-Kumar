#include <stdio.h>

// Function to calculate XOR from 1 to n
int xorFrom1ToN(int n) {
    // Mod 4 operation for 0, 1, 2, and 3
    switch (n & 3) {
        case 0: return n;     // If n is multiple of 4
        case 1: return 1;     // If n % 4 is 1
        case 2: return n + 1; // If n % 4 is 2
        case 3: return 0;     // If n % 4 is 3
    }
    return -1; // To avoid compiler warnings
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = xorFrom1ToN(n);
    printf("XOR from 1 to %d is: %d\n", n, result);

    return 0;
}

