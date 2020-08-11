#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define SIZE 1010
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[SIZE], l[SIZE], r[SIZE], ans[SIZE];

    long long m = INT_MAX;
    long long j = -1;

    for (long long i = 0; i < n; i++)
        cin >> a[i];

    for (long long i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            l[i] = (i + 1) * a[i];
            m = a[i];
            j = i;
        }
        else
            l[i] = l[j] + abs(i - j) * a[i];
    }

    m = INT_MAX;
    j = -1;

    for (long long i = n - 1; i >= 0; i--)
    {
        if (a[i] <= m)
        {
            r[i] = (n - i) * a[i];
            m = a[i];
            j = i;
        }
        else
            r[i] = r[j] + abs(i - j) * a[i];
    }

    m = INT_MIN;
    j = -1;
    for (long long i = 0; i < n; i++)
    {
        if (m <= (l[i] + r[i] - a[i]))
        {
            j = i;
            m = l[i] + r[i] - a[i];
        }
    }

    m = a[j];
    for (long long i = j; i < n; i++)
    {
        if (m > a[i])
        {
            ans[i] = a[i];
            m = a[i];
        }
        else
            ans[i] = m;
    }

    m = a[j];
    for (long long i = j; i >= 0; i--)
    {
        if (m > a[i])
        {
            ans[i] = a[i];
            m = a[i];
        }
        else
            ans[i] = m;
    }

    for (long long i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];

    return 0;
}