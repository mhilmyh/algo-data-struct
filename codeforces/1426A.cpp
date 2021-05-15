#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x, y;
  cin >> n >> x;

  if(n <= 2) cout << 1 << endl;
  else {
    n -= 2;

    y = n / x;
    if(n % x) y++;
    
    cout << y + 1 << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
