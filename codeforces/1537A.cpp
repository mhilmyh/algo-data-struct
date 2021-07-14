#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  long long s = 0;
  cin >> n;

  int a;
  for (int i = 0; i < n; i++) {
    cin >> a;
    s += a;
  }

  cout << ((s != n) ? max(s-n, 1LL) : 0) << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
