#include <stdio.h>
#include <string.h>

int main(void) {
    char *s;
    scanf("%s", s);
    if (s != NULL) {    
        for (int i = 0; i < strlen(s); i++){
            printf("%c\n", s[i]);
        }
    }
}