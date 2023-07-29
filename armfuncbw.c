#include <stdio.h>
#include <math.h>

int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

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

void printArmstrongNumbers(int n)
{
    printf("Armstrong numbers between 1 and %d are:\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (checkArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("enter value of n:");
    scanf("%d", &n);
    printArmstrongNumbers(n);
    return 0;
}