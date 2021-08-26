#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int s;
  cin >> s;

  int ans = 0;
  int x = 1;

  while (s > 0) {
    s -= x;
    ans++;
    if (s >= x) x += 2;
  }

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
