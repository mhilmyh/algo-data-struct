#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  vector<int> p(n, 0);

  for (int i = 0; i < n; i++)
    cin >> p[i];
  
  reverse(p.begin(), p.end());

  for(auto v : p) cout << v << " ";
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
