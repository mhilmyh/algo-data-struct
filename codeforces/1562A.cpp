#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned short us;

void solve() {
  ll l,r;
  cin >> l >> r;
  
  ll m = min(max(r/2, l), r);
  ll ans = max(r % m, r % min(m+1, r));
  
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
