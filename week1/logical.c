#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char c;
    scanf("%c", &c);

    if (c == 'y' || c == 'Y') {
        printf("yes\n");
    } else if (c == 'n' || c == 'N') {
        printf("no\n");
    } else {
        printf("error\n");
    }
}