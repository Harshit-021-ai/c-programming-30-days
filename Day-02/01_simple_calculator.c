#include <stdio.h>
int main()
{
    int a, b, add, sub, mul, mod, div;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    printf("Addtion of %d and %d is: %d\n", a, b, a + b);
    printf("Subtraction of %d and %d is : %d\n", a, b, a - b);
    printf("Multiplication of %d and %d is: %d\n", a, b, a * b);
    printf("Division of %d and %d is: %d\n", a, b, a / b);
    printf("Modulus of %d and %d is: %d\n", a, b, a % b);
    return 0;
}
