#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x;
  cin >> x;

  if(x > 45) {
    cout << "-1\n";
    return;
  }

  int i = 9;
  vector<int> ans;
  while(x && i) {
    if(x >= i) {
      ans.push_back(i);
      x -= i;
    }
    i--;
  }

  sort(ans.begin(), ans.end());
  for(auto v : ans) cout << v;
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
