#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, m, x, c, r;
  cin >> n >> m >> x;

  r = (x-1) % n;
  c = (x / n) + (x % n != 0);

  cout << r * m + c << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
