#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll n, m, k;
  cin >> n >> m >> k;
  
  vector<vector<ll>> dp(n+1, vector<ll>(m+1,0));

  for (ll i = 0; i < n; i++) dp[i][0] = INT_MAX;
  for (ll i = 0; i < m; i++) dp[0][m] = INT_MAX;

  dp[1][1] = 0;
  
  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= m; j++) {
      if(i == 1 && j == 1) continue;
      dp[i][j] = min(dp[i][j-1]+i, dp[i-1][j]+j);
    }
  }

  // for (ll i = 1; i <= n; i++) {
  //   for (ll j = 1; j <= m; j++) {
  //     cout << dp[i][j] << " \n"[j == m];
  //   }
  // }
  // cout << "\n";
  // cout << dp[n][m] << "\n";

  if (dp[n][m] == k)
    cout << "YES\n";
  else
    cout << "NO\n"; 
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
