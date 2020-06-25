#include <stdio.h>
#include <stdlib.h>
#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

int main()
{
    int t;
    long long int a, b, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld %lld", &x, &y);
        scanf("%lld %lld", &a, &b);

        long long int sum;
        if (2 * a <= b)
            sum = (x + y) * a;
        else
            sum = min(x, y) * b + abs(x - y) * a;
        printf("%lld\n", sum);
    }

    return 0;
}