#include <stdio.h>
#define SIZE 31
int p[SIZE];

int precalc()
{
    p[0] = 1;
    for (int i = 1; i <= 30; i++)
        p[i] = p[i - 1] << 1;
}

int main()
{
    int t, n, m;

    precalc();
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        for (int i = 2; i < 30; i++)
        {
            if (n % (p[i] - 1) == 0)
            {
                printf("%d\n", n / (p[i] - 1));
                break;
            }
        }
    }
    return 0;
}