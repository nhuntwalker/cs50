#include <stdio.h>

int main(void) {
    printf("x is ");
    int x;
    scanf("%i", &x);

    printf("y is ");
    int y;
    scanf("%i", &y);

    printf("sum of %i and %i is %i\n", x, y, x + y);
}