#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("Enter the sides (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b <= c || b + c <= a || c + a <= b)
    {
        printf("Not a valid triangle.\n");
        return 0;
    }

    double A, B, C;

    A = acos((b * b + c * c - a * a) / (2 * b * c));
    B = acos((a * a + c * c - b * b) / (2 * a * c));
    C = acos((a * a + b * b - c * c) / (2 * a * b));

    // convert radians to degrees
    A = A * 180.0 / acos(-1.0);
    B = B * 180.0 / acos(-1.0);
    C = C * 180.0 / acos(-1.0);

    printf("Angles are: A = %.2f°, B = %.2f°, C = %.2f°\n", A, B, C);

    return 0;
}
