#include <stdio.h>

int areEqual(int a, int b) {
   
    return !(a ^ b);
}

int main() {
    int num1 = 10;
    int num2 = 10;

    if (areEqual(num1, num2)) {
        printf("The two integers are equal.\n");
    } else {
        printf("The two integers are not equal.\n");
    }

    return 0;
}

