#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  if (n <= 3) cout << n-1 << endl;
  else if (n % 2) cout << 3 << endl;
  else cout << 2 << endl;
  
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
