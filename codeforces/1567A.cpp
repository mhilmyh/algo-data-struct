#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned short us;

char find_grid(char c) {
  if (c == 'U') return 'D';
  if (c == 'D') return 'U';

  return c;
}

void solve() {
  us n;
  char c;

  cin >> n;

  for (us i = 0; i < n; i++) {
    cin >> c;
    cout << find_grid(c);
  }

  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
