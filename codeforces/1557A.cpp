#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, m = 0;
  cin >> n;

  vector<int> a(n);
  ll sa = 0, sb = 0;
  double mx  = 0.0;
  double ns;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sa += a[i];
  }

  sort(a.begin(), a.end(), greater<int>());

  for (int i = 1; i < n; i++) {
    sb += a[i-1];
    sa -= a[i-1];
    m++;

    ns = sa/((n-i) * 1.0) + sb/(m * 1.0);
    mx = i != 1 ? max(mx, ns) : ns;
  }
  
  printf("%.9lf\n", mx);
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
