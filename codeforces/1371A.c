#include <stdio.h>

int ceil(int x)
{
    return (x % 2) ? x / 2 + 1 : x / 2;
}

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", ceil(n));
    }

    return 0;
}