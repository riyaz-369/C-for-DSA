#include <stdio.h>

int main()
{

    int num1, num2, num3;
    printf("Enter two big numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2 && num1 > num3)
    {
        printf("num1 is the largest number\n");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("num2 is the largest number\n");
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("num3 is the largest number\n");
    }
    else
    {
        printf("All numbers are equal\n");
    }

    return 0;
}