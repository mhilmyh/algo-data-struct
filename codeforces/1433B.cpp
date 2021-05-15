#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, g = 0, cnt = 0;
  cin >> n;

  bool a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  bool v = false;
  for (int i = 0; i < n; i++) {
    if(a[i]) {
      v = true;
      cnt += g;
      g = 0;
    }

    if(v && !a[i]) g++; 
  }

  cout << cnt << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
