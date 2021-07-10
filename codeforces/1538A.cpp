#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  int a;
  vector<int> p;
  
  for (size_t i = 1; i <= n; i++) {
    cin >> a;
    if (a == 1 || a == n) p.push_back(i);
  }

  cout << min(min(max(p[0],p[1]), n - min(p[0],p[1]) + 1), n - max(p[0], p[1]) + 1 + min(p[0],p[1])) << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
