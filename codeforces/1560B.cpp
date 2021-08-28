#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int a, b, c, last;

  cin >> a >> b >> c;
  
  int between = abs(a-b)-1;
  
  if (between < 1 && max(a,b) != 2 && min(a,b) != 1) {
    cout << "-1\n";
    return;
  }

  if ((min(a,b) - between) > 1) {
    cout << "-1\n";
    return;
  }

  int maximum = max(a,b) - (min(a,b) - between - 1);

  if (c > maximum) {
    cout << "-1\n";
    return;
  }

  cout << (c + between) % maximum + 1 << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
