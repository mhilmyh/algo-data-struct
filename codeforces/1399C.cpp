#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, w;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> cnt(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> w;
            cnt[w]++;
        }

        int ans = 0;
        for (int s = 2; s <= n * 2; s++)
        {
            int pos = 0;
            for (int i = 1; i < (s + 1) / 2; i++)
            {
                if (s - i > n)
                    continue;
                pos += min(cnt[i], cnt[s - i]);
            }
            if (s % 2 == 0)
                pos += cnt[s / 2] / 2;
            ans = max(ans, pos);
        }
        cout << ans << "\n";
    }
    return 0;
}