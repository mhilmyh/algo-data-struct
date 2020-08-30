#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &a)
{
    if (n == 1)
        return 0;

    bool asc = true;
    int i;
    for (i = n - 1; i > 0; i--)
    {
        if (asc && a[i] > a[i - 1])
            asc = false;
        else if (!asc && a[i] < a[i - 1])
            break;
    }
    return i;
};

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << solve(n, a) << "\n";
    }
    return 0;
}