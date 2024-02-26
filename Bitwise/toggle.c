#include <stdio.h>


unsigned int copy_set_bits(unsigned int dest, unsigned int src, int start, int end) {
    
    unsigned int mask = ((1U << (end - start + 1)) - 1) << start;
    
    return (dest & ~mask) | (src & mask);
}


unsigned int toggle_set_bits(unsigned int num, int start, int end) {
    
    unsigned int mask = ((1U << (end - start + 1)) - 1) << start;
    
    return num ^ mask;
}

int main() {
    unsigned int dest = 0b00000000; 
    unsigned int src = 0b10101010;
    int start = 2; 
    int end = 5; 
    printf("Destination after copying set bits: %u\n", copy_set_bits(dest, src, start, end)); 
    printf("Number after toggling set bits: %u\n", toggle_set_bits(dest, start, end)); // Output: 00111100

    return 0;
}

