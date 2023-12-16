#include <stdio.h>
void main(void)  
{
char x;

    printf("Enter a character: ");
    scanf(" %c", &x);

    printf("\nCharacter: %c\n", x);
    printf("ASCII code: %d\n", x);
    printf("Previous character: %c\n", x - 1);
    printf("Next character: %c\n", x + 1);
}