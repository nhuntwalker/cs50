#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i;
    scanf("%i", &i);
    if (i < 0) {
        printf("negative\n");
    } else if (i > 0) {
        printf("positive\n");
    } else {
        printf("zero\n");
    }
}