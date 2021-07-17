#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

void solve() {
  int k;
  cin >> k;

  int n = 100 - k;

  int x = gcd(n, k);
  while (x != 1) {
    n /= x;
    k /= x;
    x = gcd(n, k);
  }
  

  cout << n + k << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
