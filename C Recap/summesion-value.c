#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Method 1: Using a loop
    int total_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int term = i * (n - i + 1);
        total_sum = total_sum + term;
    }

    // Method 2: Using the formula
    int formula_sum = (n * (n + 1) * (n + 2)) / 6;

    printf("Sum using loop: %d\n", total_sum);
    printf("Sum using formula: %d\n", formula_sum);

    return 0;
}