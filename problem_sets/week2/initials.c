#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int num_words(char *words);
void get_words(char *words, int count);


int main() {
    char *buffer;
    int num;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));

    printf("Type something: ");
    characters = getline(&buffer, &bufsize, stdin);
    num = num_words(buffer);
    // printf("There should be %i initials\n", num);
    get_words(buffer, num);
}

void get_words(char *words, int count) {
    char initials[count];
    int i = 0;
    initials[i] = toupper(words[0]);
    i++;

    // printf("These many characters: %lu\n", strlen(words));

    for (int j = 0; j < strlen(words); ++j) {
        if (words[j] == ' ') {
            initials[i] = toupper(words[j + 1]);
            i++;
        }
    }

    printf("%s\n", initials);
}

int num_words(char *words) {
    int count = 1;
    for (int i = 0; i < strlen(words); ++i) {
        if (words[i] == ' ') {
            count++;
        }
    }
    return count;
}
