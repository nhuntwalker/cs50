#include <stdio.h>

void say(char statement[10], int n);
void cough(int n);
void sneeze(int n);

int main(void) {
    cough(3);
    sneeze(5);
}

void cough(int n) {
    say("cough", n);
}

void sneeze(int n) {
    say("achoo", n);
}

void say(char statement[10], int n) {
for (int i = 0; i < n; i++) {
        printf("%s\n", statement);
    }
}