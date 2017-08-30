#include <stdio.h>

float multiply(float a, float b);

int main(void) {
    float result;
    result = multiply(5.0, 4.0);
    printf("5 x 4 = %f\n", result);
}

float multiply(float a, float b) {
    return a * b;
}