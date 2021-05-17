#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    if(i == 0) cout << 9;
    else if(i == 1) cout << 8;
    else cout << (i+7) % 10;
  }

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
