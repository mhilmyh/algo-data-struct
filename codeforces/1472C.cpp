#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) 
    cin >> a[i];

  int dp[n+1], x;
  memset(dp, 0, (n+1) * sizeof(*dp));

  for (int i = 0; i < n; i++) {
    x = min(n, i + a[i]);
    dp[x] = max(dp[x], dp[i] + a[i]);
  }

  cout << dp[n] << endl;  
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
