#include <stdio.h>

int main(void) {
    char *s;
    scanf("%s", s);
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }
    printf("%i\n", n);
}