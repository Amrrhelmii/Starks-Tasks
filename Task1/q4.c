#include <stdio.h>
void main(void) 
{
    float x, y;
    printf("Enter the first number: ");
    scanf("%f", &x);
    printf("Enter the second number: ");
    scanf("%f", &y);
    float addition = x + y;
    float subtraction = x - y;
    float multiplication = x * y;
    float division = x / y;
    printf("\nAddition: %f\n", addition);
    printf("Subtraction: %f\n", subtraction);
    printf("Multiplication: %f\n", multiplication);
    printf("Division: %f\n", division);
}