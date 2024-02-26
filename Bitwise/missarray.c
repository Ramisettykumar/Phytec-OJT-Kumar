#include <stdio.h>

int find_missing_number(int arr[], int n) {
    // XOR all the elements of the array
    int xor_arr = arr[0];
    for (int i = 1; i < n; i++) {
        xor_arr ^= arr[i];
    }
    
    // XOR all numbers from 1 to n+1
    int xor_full_range = 1;
    for (int i = 2; i <= n + 1; i++) {
        xor_full_range ^= i;
    }
    
    // XOR of the array and the full range gives the missing number
    return xor_arr ^ xor_full_range;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The missing number is: %d\n", find_missing_number(arr, n));
    return 0;
}

