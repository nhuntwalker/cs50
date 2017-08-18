#include <stdio.h>

int main(void) {
    printf("x is ");
    float x;
    scanf("%f", &x);

    printf("y is ");
    float y;
    scanf("%f", &y);

    printf("%f plus %f is %f\n", x, y, x + y);
    printf("%f minus %f is %f\n", x, y, x - y);
    printf("%f times %f is %f\n", x, y, x * y);
    printf("%f divided by %f is %f\n", x, y, x / y);
    // printf("remainder of %f divided by %f is %f\n", x, y, x % y);
}