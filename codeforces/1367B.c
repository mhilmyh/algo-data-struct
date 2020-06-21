#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int *a = (int *)malloc(sizeof(int) * n);
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);

            if (a[i] % 2 == i % 2)
                continue;

            if (a[i] % 2)
                odd++;
            else
                even++;
        }

        if (even == odd)
            printf("%d\n", (even + odd) / 2);
        else
            printf("-1\n");

        free(a);
    }
    return 0;
}