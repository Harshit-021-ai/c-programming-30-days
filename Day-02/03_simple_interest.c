#include <stdio.h>
int main()
{
    int p;
    float r, si, t;

    printf("Enter Principal Amount: ");
    scanf("%d", &p);
    printf("Enter Time (in years): ");
    scanf("%f", &t);
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    si = (p * t * r) / 100;
    printf("Simple Interest: %.2f", si);

    return 0;
}
