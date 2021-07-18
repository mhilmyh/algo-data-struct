#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n, k;
  cin >> n >> k;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int j = 0;

  while (j < n && k > 0) {
    while (a[j] > 0 && k > 0) {
      a[j]--;
      a[n-1]++;
      k--;
    }
    j++;
  }
  
  for (int i = 0; i < n; i++) {
    cout << a[i] << " \n"[i == n-1];
  }
  
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
