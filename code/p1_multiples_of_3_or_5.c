#include <stdio.h>

int sum_multiples(int n, int limit)
{
    int p = (limit - 1) / n;    // i.e, How many n's can fit into limit-1
    return n * p * (p + 1) / 2; // n*(1+2+...+p)
}

int main()
{
    int limit = 1000;
    int sum_3 = sum_multiples(3, limit);
    int sum_5 = sum_multiples(5, limit);
    int sum_15 = sum_multiples(15, limit); // Multiples of 15 to subtract, as they are counted twice

    int result = sum_3 + sum_5 - sum_15;
    printf("Sum of multiples of 3 or 5 below %d: %d\n", limit, result);

    return 0;
}