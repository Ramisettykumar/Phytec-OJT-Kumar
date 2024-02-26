#include <stdio.h>

unsigned int swap_even_odd_bits(unsigned int num) {
    // Mask for even bits (1010 1010 1010 1010 ...)
    unsigned int even_mask = 0xAAAAAAAA;
    // Mask for odd bits (0101 0101 0101 0101 ...)
    unsigned int odd_mask = 0x55555555;

    
    unsigned int even_bits = num & even_mask;
    unsigned int odd_bits = num & odd_mask;

    
    even_bits >>= 1;
    odd_bits <<= 1;

   
    return even_bits | odd_bits;
}

int main() {
    unsigned int num = 170; // Binary: 1010 1010
    printf("Original number: %u\n", num);
    printf("Number after swapping even and odd bits: %u\n", swap_even_odd_bits(num)); // Expected output: 85 (Binary: 0101 0101)
    return 0;
}

