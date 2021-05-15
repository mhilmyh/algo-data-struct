#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, c1 = 0, c2 = 0;
  cin >> n;

  for (size_t i = 0; i < n; i++) {
    cin >> a;

    if(a == 2) c2++;
    else c1++;
  }

  if(c1 > 0 && (c2 * 2 + c1) % 2 == 0) cout << "YES\n";
  else if(c1 == 0 && n % 2 == 0) cout << "YES\n";
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
