#include <stdio.h>

// Function to convert uppercase character to lowercase using bitwise operation
char toLower(char c) {
    // Check if the character is uppercase
    if (c >= 'A' && c <= 'Z') {
        // Flip the 5th bit to convert to lowercase
        c |= (1 << 5); // This is equivalent to c |= 32;
    }
    return c;
}

int main() {
    char c;

    printf("Enter an uppercase character: ");
    scanf("%c", &c);

    // Convert uppercase to lowercase
    c = toLower(c);

    printf("Lowercase equivalent: %c\n", c);

    return 0;
}

