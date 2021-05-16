#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, m = INT_MAX;
  cin >> n >> k;

  if(k == n) m = 0;
  if(k < n) m = (n % 2 == k % 2) ? 0 : 1;
  
  cout << min(m, abs(n-k)) << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
