#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("ArgumentError: This function requires one command line argument.\n");
        return 1;
    }
    int key = atoi(argv[1]);
    char s[256];
    char encrypted[256];

    printf("plaintext: ");
    scanf("%[^\n]", s);

    for (int i = 0; i < strlen(s); ++i)
    {
        char letter = s[i];
        encrypted[i] = letter + key;
        if ((letter + key > 'z' && letter <= 'z' && letter >= 'a') || (letter + key > 'Z' && letter <= 'Z' && letter >= 'A'))
        {
            encrypted[i] -= 26;
        }
    }

    printf("ciphertext: %s\n", encrypted);
    return 0;
}
