#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++) 
    cout << i << " \n"[i == n];
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
