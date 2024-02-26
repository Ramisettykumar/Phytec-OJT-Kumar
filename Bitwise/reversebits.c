#include <stdio.h>

unsigned int reverse_bits(unsigned int num) {
    unsigned int reversed_num = 0;
    int bits_count = sizeof(num) * 8;
    
    for (int i = 0; i < bits_count; i++) {
       
        reversed_num <<= 1;
        
        if (num & 1) {
            reversed_num |= 1;
        }
       
        num >>= 1;
    }
    
    return reversed_num;
}

int main() {
    unsigned int num = 10; // Binary: 1010
    printf("Original number: %u\n", num);
    printf("Reversed number: %u\n", reverse_bits(num));
    return 0;
}

