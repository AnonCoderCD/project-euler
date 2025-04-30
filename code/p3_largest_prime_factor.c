#include <stdio.h>

int main()
{
    unsigned long long n = 600851475143ULL;
    unsigned long long factor = 2;

    while (factor * factor <= n)
    {
        if (n % factor == 0)
        {
            n /= factor;
        }
        else
        {
            factor++;
        }
    }

    printf("The Largest prime factor: %llu\n", n);

    return 0;
}
