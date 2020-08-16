#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int a[9][9];
    while (t--)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%1d", &a[i][j]);
                if (a[i][j] == 1)
                    a[i][j] = 2;
            }
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                printf("%d", a[i][j]);
            }
            printf("\n");
        }
    }
}