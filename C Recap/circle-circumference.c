#include <stdio.h>
#include <math.h>

int main()
{
    double r, C, pi;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    pi = acos(-1.0);
    C = 2 * pi * r;
    printf("The circumference of the circle is: %.2lf\n", C);

    return 0;
}