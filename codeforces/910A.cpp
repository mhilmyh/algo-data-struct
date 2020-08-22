#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    d++;

    string a;
    cin >> a;

    int cnt = 0;
    for (int i = 0; i < n;)
    {
        if (a[i] == '1')
        {
            int last = i;
            for (int j = 0; j < d && i + j < n; j++)
            {
                // cout << i + j << " \n"[j == d - 1 || i + j == n - 1];
                if (a[i + j] == '1')
                    last = i + j;
            }

            if (last == i)
            {
                cout << "-1\n";
                return 0;
            }

            i = last;
            // cout << i << "--\n";
            cnt++;

            if (i == n - 1)
                break;
        }
    }

    cout << cnt << "\n";
    return 0;
}