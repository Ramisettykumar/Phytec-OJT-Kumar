#include <stdio.h>

// Function to find the rightmost set bit position
int findRightmostSetBit(int num) {
    int position = 0;
    while (num) {
        if (num & 1) // If LSB is set
            return position;
        position++;
        num >>= 1;
    }
    return -1; // Return -1 if no set bit found
}

// Function to find the two non-repeating elements
void findNonRepeatingElements(int arr[], int n) {
    int XOR = 0;
    // Step 1: XOR all the elements
    for (int i = 0; i < n; ++i)
        XOR ^= arr[i];

    // Step 2: Find the rightmost set bit
    int rightmostSetBit = findRightmostSetBit(XOR);

    // Step 3: Partition the array based on the rightmost set bit
    int nonRepeating1 = 0, nonRepeating2 = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] & (1 << rightmostSetBit))
            nonRepeating1 ^= arr[i];
        else
            nonRepeating2 ^= arr[i];
    }

    // Step 4: Print the two non-repeating elements
    printf("The two non-repeating elements are: %d and %d\n", nonRepeating1, nonRepeating2);
}

int main() {
    int arr[] = {2, 4, 7, 9, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    findNonRepeatingElements(arr, n);

    return 0;
}

