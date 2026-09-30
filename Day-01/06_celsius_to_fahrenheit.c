#include <stdio.h>
int main()
{
    int Celsius, Fahrenheit;
    printf("Enter temperature in celsius: ");
    scanf("%d", &Celsius);
    Fahrenheit = (Celsius * 2) + 30;
    printf("%d Fahrenheit Temperature", Fahrenheit);
    return 0;
}
