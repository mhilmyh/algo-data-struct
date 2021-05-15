#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x, y, cnt = 0;
  cin >> n;

  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];

  for(int i = 1; i < n; i++) {
    x = min(a[i-1], a[i]);
    y = max(a[i-1], a[i]);

    while(y > 2 * x) {
      x = x << 1;
      cnt++;
    }
  }

  cout << cnt << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
