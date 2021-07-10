#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  if(n == 1) {
    cout << "0\n";
    return;
  }

  int cnt = 0;
  while (n >> 1) {
    n >>= 1;
    cnt++;
  }

  int ans = 1;
  while (--cnt > 0) ans = (ans << 1) | 1;
  
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
