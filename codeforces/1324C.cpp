#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  string c;
  cin >> c;

  vector<int> d;
  d.push_back(0);
  for(int i = 0; i < c.length(); i++)
    if (c[i] == 'R') d.push_back(i+1);
  d.push_back(c.length()+1);

  int ans = 0;
  for(int i = 1; i < d.size(); i++)
    ans = max(ans, d[i] - d[i-1]);
  
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
