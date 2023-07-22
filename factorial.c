#include <stdio.h>
#include <math.h>

int main()
{
    int n, fact, i;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        printf("Factorial of %d is: %d\n", i, fact);
    }
    return 0;
}