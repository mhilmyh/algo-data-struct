#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a;
  cin >> n;

  map<int, int> b, c;
  for (size_t i = 0; i < n; i++) {
    cin >> a;
    b[a]++;
    c[a] = i+1;
  }

  for(auto x: b) if(x.second == 1) 
    cout << c[x.first] << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
