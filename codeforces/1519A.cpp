#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long r, b, d, e, f, g;
  cin >> r >> b >> d;
  e = max(r,b);
  f = min(r,b);
  if(e <= f * (d+1)) cout << "YES\n";
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
