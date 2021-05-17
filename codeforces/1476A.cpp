#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll n, k, d;
  cin >> n >> k;
  d = (n + k - 1) / k;
  cout << (d*k + n - 1) / n << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
