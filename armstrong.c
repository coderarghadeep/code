#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, sum, temp, digit;
    int count = 0;
    printf("enter value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;
        while (temp!= 0)
        {
            digit = temp % 10;
            sum += (int)pow(digit, 3);
            temp /= 10;
        }
    }
        if (sum == i)
        {
            printf("%d ", i);
            count++;
        }
    printf("\nTotal number of armstrong number:%d\n", count);
    return 0;
}