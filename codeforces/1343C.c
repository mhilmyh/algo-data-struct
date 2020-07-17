#include <stdio.h>
#define ll long long int
#define min(x, y) ((x < y) ? x : y)
#define max(x, y) ((x > y) ? x : y)

int main()
{
    ll t, n, b, sum, opt;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);
        sum = 0;
        opt = 0;
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld", &b);
            if ((b < 0 && opt > 0) || (b > 0 && opt < 0))
            {
                sum += opt;
                opt = 0;
            }
            if (opt == 0)
                opt = b;
            else
                opt = max(opt, b);
        }

        sum += opt;
        printf("%lld\n", sum);
    }

    return 0;
}