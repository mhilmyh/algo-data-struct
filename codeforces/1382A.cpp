#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, a, b, k = -1;
  cin >> n >> m;

  map<int, bool> c;
  bool v = false;
  for (size_t i = 0; i < n; i++) {
    cin >> a;
    c[a] = true;
  }
  for (size_t i = 0; i < m; i++) {
    cin >> b;
    if(c[b] && k == -1) {
      v = true;
      k = b;
    }
  }
  
  if(v) cout << "YES\n1 " << k << "\n";
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
