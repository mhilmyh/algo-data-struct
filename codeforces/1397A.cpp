#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        map<char, int> cnt;
        map<char, int>::iterator it;

        string str;
        bool flag = true;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> str;

            for (int j = 0; j < str.length(); j++)
                cnt[str[j]]++;
            // for (it = cnt.begin(); it != cnt.end(); ++it)
            //     cout << it->first << ":" << it->second << "\n";
        }

        for (it = cnt.begin(); it != cnt.end(); ++it)
            flag = flag && (it->second % n) == 0;
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";

        cnt.clear();
    }
    return 0;
}