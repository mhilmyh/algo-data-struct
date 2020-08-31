#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll ans = LLONG_MAX;
int main()
{
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    ll lim = pow(1e18, 1.0 / n);
    for (ll i = 1; i <= lim; i++)
    {
        ll sum = 0, val = 1;
        for (int j = 0; j < n; j++)
        {
            sum += abs(val - a[j]);
            val *= i;
        }
        ans = min(ans, sum);
    }
    cout << ans << "\n";
    return 0;
}