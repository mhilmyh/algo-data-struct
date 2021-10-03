#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned short us;
typedef unsigned long ul;

void solve() {
  int n;
  cin >> n;

  vector<ull> v(n);
  vector<ull> u(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    u[i] = v[i];

    if (i != 0) v[i] += v[i-1];
  }

  sort(u.begin(), u.end());

  for (int i = 1; i < n; i++) u[i] += u[i-1];

  // for (auto x : v) cout << x << ' ';
  // cout << '\n';
  // for (auto x : u) cout << x << ' ';
  // cout << '\n';
  
  int m, x,y,z;
  ull ans;
  cin >> m;
  
  for (int i = 0; i < m; i++) {
    cin >> x >> y >> z;

    if (x == 1) {
      ans = v[z-1] - v[max(y-2, 0)];
      if (y == 1) ans += v[0];
    } else {
      ans = u[z-1] - u[max(y-2, 0)];
      if (y == 1) ans += u[0];
    }

    cout << ans << '\n';
  }
  
}

int main() {
  solve();
  return 0;
}
