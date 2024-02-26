#include <stdio.h>

// Function to find the position of a letter in the alphabet
int letterPosition(char letter) {
    if (letter >= 'A' && letter <= 'Z')
        return letter - 'A' + 1;
    else if (letter >= 'a' && letter <= 'z')
        return letter - 'a' + 1;
    else
        return -1; // Return -1 for non-alphabetic characters
}

int main() {
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    int position = letterPosition(letter);
    if (position != -1)
        printf("Position of '%c' in the alphabet: %d\n", letter, position);
    else
        printf("'%c' is not a valid alphabet letter.\n", letter);

    return 0;
}

