#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  int a;
  int x = 0, y = 0;
  for (int i = 0; i < 2*n; i++) {
    cin >> a;

    if (a % 2) y++;
    else x++;
  }
  
  if (x == y) cout << "Yes\n";
  else cout << "No\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
