#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    printf("Addition of %d and %d is: %d\n", a, b, a + b);
    printf("Subtraction of %d and %d is : %d\n", a, b, a - b);
    printf("Multiplication of %d and %d is: %d\n", a, b, a * b);
    if (b != 0)
    {
        printf("Division of %d and %d is: %d\n", a, b, a / b);
        printf("Modulus of %d and %d is: %d\n", a, b, a % b);
    }
    else
    {
        printf("\nDivision and Modulus by zero are not allowed.\n");
    }

    return 0;
}
