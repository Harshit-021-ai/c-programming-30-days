#include <stdio.h>
int main()
{
    float a, b, c;
    float avg;
    printf("Enter 1st Number: ");
    scanf("%f", &a);
    printf("Enter 2nd Number: ");
    scanf("%f", &b);
    printf("Enter 3rd Number: ");
    scanf("%f", &c);

    avg = (a + b + c) / 3;
    printf("The Average of %.2f, %.2f and %.2f is: %.2f", a, b, c, avg);

    return 0;
}
