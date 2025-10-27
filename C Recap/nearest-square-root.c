#include <stdio.h>
#include <math.h>

int main()
{

    int number, nearest_square_root;
    double square_root;

    printf("Enter a number: ");
    scanf("%d", &number);

    square_root = sqrt(number);
    nearest_square_root = round(square_root);

    printf("The nearest square root of %d is %d\n", number, nearest_square_root);

    return 0;
}