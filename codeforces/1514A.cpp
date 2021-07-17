#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool is_square(int x) {
  for (int i = 1; i*i <= x; i++) {
    if (i*i == x) {
      return true;
    }
  }
  
  return false;
}

void solve() {
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  bool found = false;
  
  for (int i = 0; i < n && !found; i++) {
    if (!is_square(a[i])) {
      found = true;
    }
  }

  if (found) cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
