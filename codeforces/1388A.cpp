#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  if(n > 30 && (n-30) != 6 && (n-30) != 10 && (n-30) != 14) 
    cout << "YES\n6 10 14 " << n-30 << "\n";
  else if(n > 31 && (n-31) != 6 && (n-31) != 10 && (n-31) != 15)
    cout << "YES\n6 10 15 " << n-31 << "\n";
  else 
    cout << "NO\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
