#include <stdio.h>

void print_name(char name[10]);

int main(void) {
    char s[10];
    scanf("%s", s);
    print_name(s);
}

void print_name(char name[10]) {
    printf("You entered: %s\n", name);    
}
