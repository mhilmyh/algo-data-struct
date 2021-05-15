#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  string b;
  cin >> b;

  for(size_t i = 0; i < n; i++)
    cout << b[n-1];
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
