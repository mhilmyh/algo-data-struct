#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
#define pb(x) push_back(x)
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<int> a(n), pref(n);
        REP(i, 0, n) cin >> a[i];

        set<int> show;
        bool valid = true;
        REP(i, 0, n) {
            show.insert(a[i]);
            valid &= show.size() <= m;
        }

        if (!valid) {
            cout << -1 << "\n";
            continue;
        }

        int j = 1;
        while (show.size() < m)
            show.insert(j++);

        cout << n * show.size() << "\n";
        REP(i, 0, n)
            for (auto x : show)
                cout << x << " ";
        cout << "\n";
    }

    return 0;
}