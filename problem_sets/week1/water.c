#include <stdio.h>

int main(void) {
    int minutes;
    printf("Minutes: ");
    scanf("%i", &minutes);
    printf("Bottles: %i\n", minutes * 12);
}