// Your name: Chenyi XIANG
// Date: 01/19/2023
 

#include <stdio.h>
// first write the power function which should return double type as required.
double power(double base, double n) {
    // result is set 1 first, we should not start with 2. 
    double result = 1; 
    int i;
    // while i < n which means the time for looping is determined.
    for (i = 0; i < n; i ++) {
        result *= base;
    } 
    return result;
}

int main() {
    int i;
    // we set looping times are 10.
    for (i = 1; i <= 10; i ++) {
        // now we call the power function and run it with base as 2.
        printf("power(2, %d) = %lf\n", i, power(2, i));
    }
    return 0;
}
