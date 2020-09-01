#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        set<int> s;
        vector<int> v;

        int vi;
        for (int i = 0; i < n; i++)
        {
            cin >> vi;
            v.push_back(vi);
        }

        int si;
        for (int i = 0; i < n; i++)
        {
            cin >> si;
            s.insert(si);
        }

        if (s.size() > 1)
            cout << "Yes\n";
        else
        {
            bool asc = true;
            for (int i = 1; i < v.size(); i++)
                asc &= (v[i - 1] <= v[i]);

            if (asc)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}