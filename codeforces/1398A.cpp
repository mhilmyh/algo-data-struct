#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, i;
  cin >> n;

  bool found = false;

  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];

  for (i = 1; i < n-1; i++) if(a[0] + a[i] <= a[n-1]) {
    found = true;
    break;
  }

  
  if(!found) cout << "-1\n";
  else cout << "1 " << i+1 << " " << n << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
