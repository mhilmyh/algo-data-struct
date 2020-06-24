#include <stdio.h>

int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        c = b - a;
        if (a == b)
        {
            printf("0\n");
        }
        else if (c > 0)
        {
            if (a % 2 == b % 2)
                printf("2\n");
            else
                printf("1\n");
        }
        else
        {
            if (a % 2 == b % 2)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}