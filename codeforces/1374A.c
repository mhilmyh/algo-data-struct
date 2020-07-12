#include <stdio.h>

int main()
{
    int t, n, x, y, k;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &x, &y, &n);
        k = n / x;
        k *= x;
        if (n >= k + y)
        {
            k += y;
        }
        else
        {
            k = k - x + y;
        }

        printf("%d\n", k);
    }
}