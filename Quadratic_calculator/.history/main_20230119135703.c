// Your name: Chenyi XIANG
// Date: 01/19/2023
//
// Add your program here!
// 

#include <stdio.h>
double power(double base, double n) {
    double result = 1; 
    int i;
    for (i = 0; i < n; i ++) {
        result *= base;
    } 
    return result;
}

int main() {
    int i;
    for (i = 1; i <= 10; i ++) {
        printf("power(2, %d) = %lf\n", i, power(2, i));
    }
    return 0;
}
