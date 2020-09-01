#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

void solve(int n)
{
    set<int> s;
    for (int i = 2; i * i <= n && s.size() < 2; i++)
        if (n % i == 0 && !s.count(i))
        {
            s.insert(i);
            n /= i;
        }

    if (n != 1 && !s.count(n) && s.size() == 2)
    {
        cout << "YES\n";
        for (auto x : s)
            cout << x << " ";
        cout << n << "\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}