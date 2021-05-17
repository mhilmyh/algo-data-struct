#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, r, cnt = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> r;
    if(r == 1 || r == 3) cnt++;
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
