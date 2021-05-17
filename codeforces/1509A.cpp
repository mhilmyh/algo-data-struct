#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, a;
  cin >> n;

  vector<int> o, e;

  for (int i = 0; i < n; i++) {
    cin >> a;
    if(a%2) o.push_back(a);
    else e.push_back(a);
  }

  sort(o.begin(), o.end());
  sort(e.begin(), e.end(), greater<int>());

  for(auto x : e) cout << x << " ";
  for(auto x : o) cout << x << " ";
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
