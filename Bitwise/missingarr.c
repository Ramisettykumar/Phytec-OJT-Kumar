#include <stdio.h>

// Function to find the missing number in an array
int findMissingNumber(int arr[], int n) {
    // Initialize result with XOR of all numbers from 1 to n+1
    int result = 0;
    for (int i = 1; i <= n + 1; i++) {
        result ^= i;
    }

    // XOR all the elements of the array
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, n);

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}

