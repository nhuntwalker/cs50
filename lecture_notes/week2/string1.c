#include <stdio.h>
#include <string.h>

int main(void) {
    char *s;
    scanf("%s", s);
    if (s != NULL) {    
        for (int i = 0, n = strlen(s); i < n; i++){
            printf("%c\n", s[i]);
        }
    }
}