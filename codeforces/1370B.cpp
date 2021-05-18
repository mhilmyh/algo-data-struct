#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, a;
  cin >> n;

  vector<int> b1, b2;
  for (int i = 0; i < 2 * n; i++) {
    cin >> a;
    if(a % 2) b1.push_back(i+1);
    else b2.push_back(i+1);
  }
  vector<pair<int,int>> ans;

  for (int i = 1; i < b1.size(); i += 2)
    ans.push_back({b1[i-1],b1[i]});

  for (int i = 1; i < b2.size(); i += 2)
    ans.push_back({b2[i-1],b2[i]});
  
  for(int i=0; i < n-1; i++)
    cout << ans[i].first << " " << ans[i].second << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
