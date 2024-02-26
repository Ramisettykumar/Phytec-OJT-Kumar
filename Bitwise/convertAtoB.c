#include <stdio.h>

int count_bits_to_flip(int a, int b) {
    int xor_result = a ^ b;
    int count = 0;
    
    // Counting the number of set bits
    while (xor_result) {
        count += xor_result & 1;
        xor_result >>= 1;
    }
    
    return count;
}

int main() {
    int A = 10; // 1010 in binary
    int B = 15; // 1111 in binary
    
    printf("Number of bits to flip: %d\n", count_bits_to_flip(A, B)); // Output should be 2
    return 0;
}

