#include <stdio.h>

int main()
{
    int t, a, b, c, d, x, y, z;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%d %d %d\n", b, c, c);
    }
    return 0;
}