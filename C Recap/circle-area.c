#include <stdio.h>
#include <math.h>

int main()
{
    double r, area, pi;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    pi = acos(-1.0);
    area = pi * r * r;

    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}