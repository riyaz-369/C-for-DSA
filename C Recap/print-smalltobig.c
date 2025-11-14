#include <stdio.h>

int main()
{
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double large, mid, small;
    if (a > b && a > c)
    {
        large = a;
        if (b > c)
        {
            mid = b;
            small = c;
        }
    }
    printf("small to big: %.0lf %.0lf %.0lf\n", small, mid, large);

    return 0;
}