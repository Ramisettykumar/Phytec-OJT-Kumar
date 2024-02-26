#include <stdio.h>

void print_binary(int num) {
    // Size of an integer in bits
    int size = sizeof(int) * 8;

    // Loop through each bit of the number
    for (int i = size - 1; i >= 0; i--) {
        // Extract the i-th bit using bitwise AND with 1
        int bit = (num >> i) & 1;
        // Print the bit
        printf("%d", bit);
    }
}

int main() {
    int decimal_num = 10;
    printf("Binary representation of %d: ", decimal_num);
    print_binary(decimal_num);
    printf("\n");
    return 0;
}

