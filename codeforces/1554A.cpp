#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned short us;

void solve() {
  ll n;
  cin >> n;

  ll a, b;
  ll ans = 0;

  for (ll i = 0; i < n; i++) {
    cin >> b;
    if (i) ans = max(ans, a*b);
    a = b;
  }
  
  cout << ans << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
