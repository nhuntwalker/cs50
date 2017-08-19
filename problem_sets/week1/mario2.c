#include <stdio.h>

void print_pounds(int n, char term);
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
        print_pounds(i, 'n');

        print_spaces(0);
        print_pounds(i, 'y');
    }
}

void print_pounds(int n, char term) {
    for (int i = 0; i < n + 1; i++) {
        printf("#");
    }
    if (term == 'y') {
        printf("\n");
    }
}

void print_spaces(int n) {
    for (int i = n + 2; i > 0; i--) {
        printf(" ");
    }
}