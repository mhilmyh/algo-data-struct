#include <stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int t, n, m;
    scanf("%d", &t);

    while (t--)
    {
        int ans;
        scanf("%d %d", &n, &m);
        if (n == 1)
            ans = 0;
        else if (n == 2)
            ans = m;
        else
            ans = 2 * m;

        printf("%d\n", ans);
    }
    return 0;
}