#include <stdio.h>

int reduce_to_one(int *nums, int n) {
    int ones = 0, twos = 0, not_threes = 0;

    for (int i = 0; i < n; i++) {
       
        twos |= (ones & nums[i]);
        
        
        ones ^= nums[i];

        
        not_threes = ~(ones & twos);

        
        ones &= not_threes;
        twos &= not_threes;
    }

    return ones;
}

int main() {
    int nums[] = {4, 4, 4, 5, 5, 5, 6, 6, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Reduced number: %d\n", reduce_to_one(nums, n)); // Output: 7

    return 0;
}

