#include<stdio.h>

int main(){
    int i = 10; // Declare and initialize 'i' with 10
    int j = i;
    int a = 2, b = 4, c = 6, d = 8;
    // %d is called format specifier
    // %d is for int, %f is for float and %c is for char
    printf("The value of i is %d and value of j is %d\n", i, j);
    printf("The value of a is %d, b is %d, c is %d and value of d is %d", a, b, c, d);
    return 0;
}