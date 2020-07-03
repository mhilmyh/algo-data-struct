#include <stdio.h>

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
            printf("YES\n");
    }
    return 0;
}