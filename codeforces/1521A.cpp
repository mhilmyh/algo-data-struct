#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll A, B;
  cin >> A >> B;

  if(B == 1) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
  cout << A << " " << A*B << " " << A*B + A << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
