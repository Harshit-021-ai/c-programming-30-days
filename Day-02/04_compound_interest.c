#include <stdio.h>
#include <math.h>
int main()
{
    float principal, amount, rate, time, compound_interest;
    int n;

    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    printf("Enter the number of times the interest is compounded per year (e.g., 1 for annually, 4 for quarterly, 12 for monthly): ");
    scanf("%d", &n);

    float r = rate / 100;

    amount = principal * pow((1 + r / n), (n * time));

    compound_interest = amount - principal;

    printf("Amount: %.2f\n", amount);
    printf("Compound Interest: %.2f", compound_interest);

    return 0;
}
