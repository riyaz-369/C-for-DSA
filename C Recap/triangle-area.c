#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, s, area;
    printf("Enter the sides (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b <= c || b + c <= a || c + a <= b)
    {
        printf("Not a valid triangle.\n");
        return 0;
    }

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area is: %.2lf", area);

    return 0;
}