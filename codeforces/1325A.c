#include <stdio.h>

int main()
{
    int t, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        printf("%d %d\n", 1, x - 1);
    }
    return 0;
}