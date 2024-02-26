#include <stdio.h>
#include <string.h>

int maxProduct(char **words, int wordsSize) {
  
    int lengths[wordsSize];
    for (int i = 0; i < wordsSize; i++) {
        lengths[i] = strlen(words[i]);
    }

    int maxProduct = 0;

    
    int masks[wordsSize];
    for (int i = 0; i < wordsSize; i++) {
        int mask = 0;
        for (int j = 0; j < lengths[i]; j++) {
         
            mask |= 1 << (words[i][j] - 'a');
        }
        masks[i] = mask;
    }

    
    for (int i = 0; i < wordsSize; i++) {
        for (int j = i + 1; j < wordsSize; j++) {
            
            if ((masks[i] & masks[j]) == 0) {
                int product = lengths[i] * lengths[j];
                if (product > maxProduct) {
                    maxProduct = product;
                }
            }
        }
    }

    return maxProduct;
}

int main() {
    char *words[] = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    int wordsSize = sizeof(words) / sizeof(words[0]);

    printf("Maximum product of word lengths: %d\n", maxProduct(words, wordsSize)); // Output: 16

    return 0;
}

