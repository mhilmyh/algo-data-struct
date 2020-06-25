#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, a;
    scanf("%d", &t);
    while (t--)
    {
        int cnt = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if (a % 2)
                cnt++;
        }

        if (cnt % 2 || (abs(n - cnt) && cnt))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}