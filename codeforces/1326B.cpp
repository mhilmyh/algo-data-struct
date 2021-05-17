#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  int b[n];
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  
  int m = 0;
  for (int i = 1; i < n; i++) {
    m = max(m, b[i-1]);
    b[i] += m;
  }

  for (int i = 0; i < n; i++)
    cout << b[i] << " \n"[i == n-1];
}

int main() {
  solve();
  return 0;
}
