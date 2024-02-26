#include <stdio.h>

// Function to count the number of bits to be flipped
int countBitsToFlip(int A, int B) {
    // XOR of A and B will have 1s in positions where bits are different
    int xorResult = A ^ B;
    int count = 0;
    // Count the number of set bits in xorResult
    while (xorResult) {
        count += xorResult & 1;
        xorResult >>= 1;
    }
    return count;
}

int main() {
    int A, B;
    printf("Enter two integers A and B: ");
    scanf("%d %d", &A, &B);

    int bitsToFlip = countBitsToFlip(A, B);
    printf("Number of bits to be flipped to convert %d to %d: %d\n", A, B, bitsToFlip);

    return 0;
}

