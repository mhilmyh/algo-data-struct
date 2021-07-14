#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  long s = 0;
  cin >> n;
  
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s += a[i];
  }
  
  if (s % n != 0) {
    cout << "-1\n";
    return;
  }

  int k = 0;
  s /= n;
  for (int i = 0; i < n; i++) {
    if (a[i] > s) k++;
  }

  cout << k << '\n';  
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
