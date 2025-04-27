#include <stdio.h>

int main()
{
    int a = 1, b = 2, sum = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
        {
            sum += b;
        }

        int next = a + b;
        a = b;
        b = sum;
    }

    printf("Sum of even fibonacci numbers that don't exceed 4 million: %d\n", sum);
    return 0;
}