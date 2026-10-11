#include <stdio.h>
int main()
{
    int years, months, total_days, days, years_remain, months_remain;
    printf("Enter number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    years_remain = total_days % 365;

    months = years_remain / 30;

    days = years_remain % 30;

    printf("%d years, %d months, %d days", years, months, days);
    return 0;
}
