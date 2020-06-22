#include <stdio.h>

void solve(int n)
{
    printf("YES\n");
    for (int i = 1; i <= n; i++)
        printf("%d ", i * 2);
    for (int i = 1; i < n; i++)
        printf("%d ", i * 2 - 1);
    printf("%d\n", 3 * n - 1);
}

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n % 4)
            printf("NO\n");
        else
            solve(n / 2);
    }
    return 0;
}