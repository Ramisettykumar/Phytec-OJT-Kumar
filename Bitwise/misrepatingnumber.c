#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void findMissingAndRepeating(int arr[], int n) {
    int xor_result = 0;
    int xor_arr = 0;
    int xor_actual = 0;
    int xor_missing_repeating = 0;

    // XOR all elements from 1 to n
    for (int i = 1; i <= n; i++) {
        xor_actual ^= i;
    }

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor_arr ^= arr[i];
    }

    // XOR of xor_actual and xor_arr gives the missing and repeating number
    xor_missing_repeating = xor_actual ^ xor_arr;

    // Find the rightmost set bit in xor_missing_repeating
    int rightmost_set_bit = xor_missing_repeating & ~(xor_missing_repeating - 1);

    // Divide the numbers into two groups based on the rightmost set bit
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightmost_set_bit) {
            xor_result ^= arr[i];
        } else {
            xor_missing_repeating ^= arr[i];
        }
    }

    // Check if the missing or repeating number is present in the array
    bool missing_found = false;
    bool repeating_found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == xor_result) {
            repeating_found = true;
        }
        if (arr[i] == xor_missing_repeating) {
            missing_found = true;
        }
    }

    // Print the missing and repeating numbers
    if (!missing_found) {
        printf("Missing number: %d\n", xor_missing_repeating);
    }
    if (!repeating_found) {
        printf("Repeating number: %d\n", xor_result);
    }
}

int main() {
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMissingAndRepeating(arr, n);

    return 0;
}

