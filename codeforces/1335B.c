#include <stdio.h>
#define SIZE 2002

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int t, n, a, b, i;
    char str[SIZE] = {0};
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &a, &b);
        for (int i = 0; i < n; i++)
            str[i] = 'a' + (i % b);
        str[n] = '\0';
        printf("%s\n", str);
    }
    return 0;
}