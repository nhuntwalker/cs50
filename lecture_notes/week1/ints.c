#include <stdio.h>

int main(void) {
    printf("x is ");
    int x;
    scanf("%i", &x);

    printf("y is ");
    int y;
    scanf("%i", &y);

    printf("%i plus %i is %i\n", x, y, x + y);
    printf("%i minus %i is %i\n", x, y, x - y);
    printf("%i times %i is %i\n", x, y, x * y);
    printf("%i divided by %i is %i\n", x, y, x / y);
    printf("remainder of %i divided by %i is %i\n", x, y, x % y);
}