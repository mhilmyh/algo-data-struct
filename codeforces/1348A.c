#include <stdio.h>
#define SIZE 32

int p[SIZE];

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void precalc()
{
    p[0] = 1;
    for (int i = 1; i < SIZE; i++)
        p[i] = p[i - 1] << 1;
}

int main()
{
    int t, n;
    long int g_sum, m_sum, ans;
    precalc();
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        g_sum = 2 * (p[n] - 1);
        m_sum = 2 * (p[n / 2] - 1);
        ans = g_sum - 2 * m_sum - 2 * p[n] + 2 * p[n / 2];
        printf("%ld\n", ans * (-1));
    }
    return 0;
}