#include <iostream>
#include <vector>
#include <queue>
#define REP(i, a, b) for (int i = a; i < b; i++)
using namespace std;

void merge(int a[], int l = 0, int m = 0, int r = 0)
{
    int x = m - l + 1;
    int y = r - m;

    int *L = (int *)malloc(x * sizeof(int));
    int *R = (int *)malloc(y * sizeof(int));

    REP(i, 0, x)
    L[i] = a[i + l];
    REP(i, 0, y)
    R[i] = a[i + m + 1];

    int i = 0, j = 0, k = l;
    while (i < x && j < y)
    {
        if (L[i] < R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while (i < x)
        a[k++] = L[i++];
    while (j < y)
        a[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int a[], int l = 0, int r = 0)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

void oscillationPrint(int a[], int n = 0)
{
    int mid = n / 2;
    int l, r;
    l = r = mid;
    int cnt = 1;

    // REP(i, 0, n)
    //     cout << a[i] << " \n"[i == n - 1];
    // return;

    while (cnt <= n)
    {
        cout << a[mid] << " ";
        if ((cnt + n) % 2)
            mid = --l;
        else
            mid = ++r;
        cnt++;
    }
    cout << "\n";
}

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *a = (int *)malloc(n * sizeof(int));
        REP(i, 0, n)
        a[i] = 0;
        REP(i, 0, n)
        cin >> a[i];
        mergeSort(a, 0, n - 1);
        oscillationPrint(a, n);
    }
    return 0;
}