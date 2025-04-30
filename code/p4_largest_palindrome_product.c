#include <stdio.h>

int is_pallindrome(int n)
{
    int ori = n;
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return ori == rev;
}

int main()
{

    int max_p = 0;

    for (int i = 999; i >= 100; i--)
    {
        for (int j = i; j >= 100; j--)
        {
            int product = i * j;
            if (product <= max_p)
                break;
            if (is_pallindrome(product))
            {
                max_p = product;
            }
        }
    }

    printf("The largest palindrome made from the product of two 3-digit numbers: %d\n", max_p);

    return 0;
}