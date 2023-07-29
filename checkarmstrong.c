#include <stdio.h>
#include <math.h>

int checkArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += (int)pow(digit, 3);
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int n;
    printf("enter value of n:");
    scanf("%d", &n);
    if (checkArmstrong(n))
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}