#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 100005

int main()
{
    int t, n, x, a;
    scanf("%d", &t);
    while (t--)
    {
        int sum = 0, l = -1, r;
        scanf("%d %d", &n, &x);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            sum += a;
            if (a % x)
            {
                l = (l == -1) ? i : l;
                r = i;
            }
        }

        if (sum % x)
            printf("%d\n", n);
        else if (l == -1)
            printf("-1\n");
        else
            printf("%d\n", n - ((l + 1 < n - r) ? l + 1 : n - r));
    }
    return 0;
}