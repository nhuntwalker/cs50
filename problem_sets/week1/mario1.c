#include <stdio.h>

void print_pounds(int n);
void print_spaces(int n);

int main(void) {
    int levels;
    printf("Height: ");
    scanf("%i", &levels);
    while (levels < 0 || levels > 23) {
        printf("Height: ");
        scanf("%i", &levels);
    }

    for (int i = 0; i < levels; i++) {
        print_spaces(levels - i - 3);
        print_pounds(i);
    }
}

void print_pounds(int n) {
    for (int i = 0; i < n + 2; i++) {
        printf("#");
    }
    printf("\n");
}

void print_spaces(int n) {
    for (int i = n + 2; i > 0; i--) {
        printf(" ");
    }
}