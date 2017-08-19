#include <stdio.h>

int square(int val);

int main(void) {
    int x;

    printf("x is ");
    scanf("%i", &x);
    printf("x^2 is %i\n", square(x));
}

int square(int val) {
    return val * val;
}