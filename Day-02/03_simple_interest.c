#include <stdio.h>
int main()
{
    float p, r, si, t;

    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter time period (in years): ");
    scanf("%f", &t);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &r);

    si = (p * r * t) / 100;
    printf("\nThe Simple Interest is: %.2f\n", si);

    return 0;
}
