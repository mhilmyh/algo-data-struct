#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll n, m, a, cnt = 0;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> a;
    cnt += a;
  }

  if(cnt == m) cout << "YES\n";
  else cout << "NO\n";
  
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
