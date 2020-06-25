#include <stdio.h>

int main()
{
    int t, n, m, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &x, &n, &m);
        for (int i = 0; i < n && x >= 20; i++)
            x = (x / 2) + 10;
        if (x - m * 10 <= 0)
            printf("YES\n", x);
        else
            printf("NO\n", x);
    }

    return 0;
}