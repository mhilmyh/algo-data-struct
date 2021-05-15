#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, d, a;
  cin >> n >> d;

  vector<int> x;
  bool v = true;

  for (size_t i = 0; i < n; i++) {
    cin >> a;
    v &= (a <= d);
    if(a < d) x.push_back(a);
  }
  
  sort(x.begin(), x.end());
  
  if(v || (x.size() >= 2 && x[0] + x[1] <= d)) cout << "YES\n";
  else cout << "NO\n";

}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
