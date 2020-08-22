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

        string str;
        cin >> str;

        vector<pair<int, int>> seg;
        int a = 0, b = 0;
        bool good;

        REP(i, 0, str.length())
        {
            good = true;
            if (str[i] == '1')
            {
                a = i;

                while (i < str.length() && str[i] == '1')
                    i++;

                if (i == str.length())
                    good = false;

                while (i < str.length() && str[i] == '0')
                    i++;

                b = --i;

                if (good)
                    seg.push_back({a, b});
            }
        }

        // REP(i, 0, seg.size())
        // cout << seg[i].first << "-" << seg[i].second << "\n";
        // cout << "\n";
        // continue;

        if (seg.size() > 0)
        {
            int lb = 0, ub = str.length() - 1;
            lb = seg[0].first;
            ub = seg[seg.size() - 1].second;
            REP(i, 0, str.length())
            {
                if (i == lb)
                {
                    cout << "0";
                    i = ub;
                }
                else
                    cout << str[i];
            }
            cout << "\n";
        }
        else
            cout << str << "\n";
    }

    return 0;
}