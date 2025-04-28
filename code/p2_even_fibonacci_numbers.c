#include <stdio.h>

int main()
{
    int a = 1, b = 1, c = a + b;
    int sum = 0;

    while (c < 4000000)
    {
        sum += c;
        a = b + c;
        b = c + a;
        c = a + b;
    }

    printf("Sum of even fibonacci numbers that don't exceed 4 million: %d\n", sum);
    return 0;
}