#include <stdio.h>

int checkPrime(int n)
{
    int x = (int)sqrt(n);
    for (int i = 2; i <= x; i++)
    {
        if (n % i == 0)
            break;
    }
    return i > x;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (checkPrime(n))
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}