#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a and b is %d and %d respectively\n", a, b);
    return 0;
}
