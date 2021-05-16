#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a;
  cin >> n;

  map<int, vector<int>> u;
  
  for (int i = 0; i < n; i++) {
    cin >> a;
    u[a].push_back(i);
  }

  for(auto v : u) if(v.second.size() == 1) {
    cout << v.second.front() + 1 << '\n';
    return;
  }

  cout << "-1\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
