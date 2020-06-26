#include <stdio.h>
#include <string.h>
#define SIZE 200002
#define min(a, b) ((a < b) ? a : b)
#define max(a, b) ((a > b) ? a : b)
#define abs(x) ((x < 0) ? x * -1 : x)

int cnt[SIZE] = {0};

int solve(int a, int b)
{
    return max(min(a - 1, b), min(a, b - 1));
}

int main()
{
    int t, n, a, d, mx;
    scanf("%u", &t);
    while (t--)
    {
        scanf("%u", &n);
        memset(cnt, 0, (n + 1) * sizeof(cnt[0]));
        mx = d = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%u", &a);
            cnt[a]++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (cnt[i])
                d++;

            if (cnt[i] >= mx)
                mx = cnt[i];
        }
        printf("%d\n", solve(d, mx));
    }

    return 0;
}