#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a;
  cin >> n;

  map<int, int> m;
  for (int i = 0; i < n; i++) {
    cin >> a;
    m[a]++;
  }

  map<int, int>::iterator p = m.begin();

  cout << n - p->second << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
