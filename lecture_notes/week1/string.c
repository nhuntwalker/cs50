#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    char name[10];
    printf("Name: ");
    scanf("%s", name);
    printf("You entered: %s\n", name);
}