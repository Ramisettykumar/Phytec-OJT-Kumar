#include <stdio.h>
#include <limits.h>

int divide(int dividend, int divisor) {
    
    if (divisor == 0) {
        printf("Error: Division by zero\n");
        return -1; 
    }

    
    if (dividend == INT_MIN && divisor == -1) {
        printf("Error: Integer overflow\n");
       return INT_MAX; 
    }

   
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

   
    long long abs_dividend = llabs((long long)dividend);
    long long abs_divisor = llabs((long long)divisor);


    long long quotient = 0;

   
    while (abs_dividend >= abs_divisor) {
        abs_dividend -= abs_divisor;
        quotient++;
    }

    return sign * (int)quotient;
}

int main() {
    int dividend = 10;
    int divisor = 3;

    printf("Result of %d divided by %d is %d\n", dividend, divisor, divide(dividend, divisor)); // Output: 3

    return 0;
}


