#include <stdio.h>
#define llu long long unsigned

llu calc(llu n)
{
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main()
{
    int t;
    llu n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%llu", &n);
        printf("%llu\n", calc(n / 2) * 8);
    }

    return 0;
}