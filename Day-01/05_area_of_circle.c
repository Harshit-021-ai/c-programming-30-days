#include <stdio.h>
int main()
{
    int radius;
    float pi = 3.14159, area;
    printf("Radius of the Circle is: ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    printf("Area of the circle with radius %d is: %f", radius, area);
    return 0;
}
