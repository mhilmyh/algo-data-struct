#include <stdlib.h>
#include <stdio.h>

int calc(int a, int b, int n)
{
    int cnt = 1;
    while (a + b <= n)
    {
        if (a < b)
            a += b;
        else
            b += a;

        cnt++;
    }
    return cnt;
}

int main()
{
    int T, a, b, n;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &a, &b, &n);

        int ans = calc(a, b, n);
        printf("%d\n", ans);
    }
    return 0;
}