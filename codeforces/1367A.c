#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[101] = {0};
        char ans[101] = {0};
        scanf("%s", &str);

        int n = strlen(str);
        int m = 1;
        ans[0] = str[0];
        for (int i = 1; i < n - 1; i += 2)
            ans[m++] = str[i];
        ans[m] = str[n - 1];
        ans[m + 1] = '\0';
        printf("%s\n", ans);
    }
    return 0;
}