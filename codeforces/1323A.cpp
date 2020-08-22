#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n), ans;
        REP(i, 0, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                ans.push_back(i + 1);
        }

        if (!ans.size())
        {
            if (n >= 2)
            {
                cout << "2\n";
                cout << "1 2\n";
            }
            else
                cout << -1 << "\n";
        }
        else
        {
            cout << ans.size() << "\n";
            REP(i, 0, ans.size())
            cout << ans[i] << " \n"[i == ans.size() - 1];
        }
    }

    return 0;
}