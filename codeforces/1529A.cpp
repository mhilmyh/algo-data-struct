#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, x;
  cin >> n;

  map<int, int> v;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v[x]++;
  }
  
  cout << n - v.begin()->second << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
