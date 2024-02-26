#include <stdio.h>

// Function to convert lowercase character to uppercase using bitwise operation
char toUpper(char c) {
    // Check if the character is lowercase
    if (c >= 'a' && c <= 'z') {
        // Flip the 5th bit to convert to uppercase
        c &= ~(1 << 5); // This is equivalent to c &= ~32;
    }
    return c;
}

int main() {
    char c;

    printf("Enter a lowercase character: ");
    scanf("%c", &c);

    // Convert lowercase to uppercase
    c = toUpper(c);

    printf("Uppercase equivalent: %c\n", c);

    return 0;
}

