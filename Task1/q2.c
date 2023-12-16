#include <stdio.h>
void main(void) 
{
    float num1, num2, z;

    printf("Enter the first float number: ");
    scanf("%f", &num1);

    printf("Enter the second float number: ");
    scanf("%f", &num2);

    printf("\nNumbers before swapping:\n");
    printf("num1 = %f\n", num1);
    printf("num2 = %f\n", num2);

    z = num1;
    num1 = num2;
    num2 = z;

    printf("\nNumbers after swapping:\n");
    printf("num1 = %f\n", num1);
    printf("num2 = %f\n", num2);
}