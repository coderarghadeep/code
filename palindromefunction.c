#include <stdio.h>

int checkpalindrome(int n)
{
    int temp = n;
    int rev = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        rev = (rev * 10) + digit;
        temp = temp / 10;
    }
    return rev == n;
}

int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);
    if (checkPalindrome(n))
    {
        printf("%d is a palindrome number.\n", n);
    }
    else
    {
        printf("%d is not a palindrome number.\n", n);
    }
    return 0;
}