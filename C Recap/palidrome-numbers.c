#include <stdio.h>
#include <math.h>

int concat(int a, int b)
{

    char s1[20];
    char s2[20];

    sprintf(s1, "%d", a);
    sprintf(s2, "%d", b);
    strcat(s1, s2);

    int c = atoi(s1);

    return c;
}

int main()
{

    int n, n_reverse, n_original;
    printf("Enter a number (1-99): ");
    scanf("%d", &n);

    if (n >= 100)
        return printf("n is must be less then 100!\n");

    for (int i = 1; i <= n; i++)
    {
        int first_digit;
        int last_digit = i % 10;

        if (i < 10)
        {
            first_digit = i;
        }
        else
        {
            first_digit = i / 10;
        }

        if (i < 10)
        {
            n_reverse = i;
        }
        else
        {
            n_reverse = concat(last_digit, first_digit);
        }

        if (n_reverse == i)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}