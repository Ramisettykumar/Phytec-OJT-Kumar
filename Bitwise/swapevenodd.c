#include <stdio.h>

int xor_of_subsets_xor(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result << (n - 1);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("XOR of the XORs of all subsets: %d\n", xor_of_subsets_xor(arr, n));
    return 0;
}

