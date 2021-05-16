#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a;
  cin >> n;

  map<int, int> c;
  for(int i = 0; i < n; i++) {
    cin >> a;
    c[a]++;
  }

  int mx = -1;
  for(auto x: c) mx = max(mx, x.second);

  cout << mx << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
