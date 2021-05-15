#include <bits/stdc++.h>
using namespace std;

int countMinimum(int x, int y, int z, int mn) {
  int cnt = 0;
  cnt += (x == mn) ? 1 : 0;
  cnt += (y == mn) ? 1 : 0;
  cnt += (z == mn) ? 1 : 0;
  return cnt;
}

bool isAllDistinct(int x, int y, int z) {
  return x != y && y != z && x != z;
}

void solve() {
  int x, y, z, mx, mn;
  cin >> x >> y >> z;

  mx = max(x,max(y,z));
  mn = min(x,min(y,z));

  if(isAllDistinct(x,y,z) || countMinimum(x, y, z, mn) == 2) cout << "NO\n";
  else cout << "YES\n" << mx << " " << mn << " 1\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
