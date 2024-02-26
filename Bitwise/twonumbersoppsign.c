#include <stdio.h>

int have_opposite_signs(int x, int y) {
   
    return (x ^ y) < 0;
}

int main() {
    int num1 = 10;
    int num2 = -5;

    if (have_opposite_signs(num1, num2)) {
        printf("%d and %d have opposite signs.\n", num1, num2);
    } else {
        printf("%d and %d do not have opposite signs.\n", num1, num2);
    }

    return 0;
}

