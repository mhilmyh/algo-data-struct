#include <stdio.h>
#include <stdlib.h>
#define SIZE 32
#define TRUE 1
#define FALSE 0

int a[SIZE], b[SIZE];

void merge(int a[], int l, int m, int r, int asc)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = (int *)malloc(sizeof(int) * n1);
    int *R = (int *)malloc(sizeof(int) * n2);

    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    i = j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            a[k] = (asc == TRUE) ? L[i++] : R[j++];
        else
            a[k] = (asc == TRUE) ? R[j++] : L[i++];
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i++];
        k++;
    }

    while (j < n2)
    {
        a[k] = R[j++];
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(int a[], int l, int r, int asc)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m, asc);
        mergeSort(a, m + 1, r, asc);
        merge(a, l, m, r, asc);
    }
}

int main()
{
    int t, n, k, i, sum;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &k);

        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            scanf("%d", &b[i]);

        mergeSort(a, 0, n - 1, TRUE);
        mergeSort(b, 0, n - 1, FALSE);

        sum = 0;
        for (i = 0; i < k; i++)
            sum += (a[i] > b[i]) ? a[i] : b[i];

        while (i < n)
            sum += a[i++];

        printf("%d\n", sum);
    }
    return 0;
}