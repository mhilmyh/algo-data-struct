#include <stdio.h>
#include <stdlib.h>
#define max(x, y) ((x > y) ? (x) : (y))
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int *a = (int *)malloc(sizeof(int) * n);
        int sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
            if (a[i] == 0)
                cnt++;
        }

        if (sum + cnt == 0)
            cnt++;
        printf("%d\n", cnt);
        free(a);
    }
    return 0;
}