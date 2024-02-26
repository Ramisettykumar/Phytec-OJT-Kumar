#include <stdio.h>

unsigned int swap_bits(unsigned int num, int i, int j) {
    
    if (((num >> i) & 1) != ((num >> j) & 1)) {
        
        num ^= (1U << i) | (1U << j);
    }
    return num;
}

int main() {
    unsigned int num = 10; // Binary: 1010
    int i = 1; // ith bit
    int j = 3; // jth bit

    printf("Original number: %u\n", num);
    printf("Number after swapping %dth and %dth bits: %u\n", i, j, swap_bits(num, i, j));
    return 0;
}

