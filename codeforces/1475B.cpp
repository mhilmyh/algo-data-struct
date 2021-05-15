#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int a, b;
  a = n / 2020; // cnt(2020)
  b = n % 2020; // cnt(1)

  if(a >= 1 && a >= b) cout << "YES\n";
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
