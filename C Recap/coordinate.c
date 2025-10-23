#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    double distance;

    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("The distance between the points %0.2lf", distance);
    return 0;
}