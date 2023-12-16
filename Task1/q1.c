#include <stdio.h>
void main(void)
{
    int x;
    char y;
    float z;

    printf("Enter an integer value: ");
    scanf("%d", &x);

    printf("Enter a character value: ");
    scanf(" %c", &y);

    printf("Enter a float value: ");
    scanf("%f", &z);

    printf("Integer value: %d\n", x);
    printf("Character value: %c\n", y);
    printf("Float value: %f\n", z);
}
