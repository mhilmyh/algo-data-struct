#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll n;
  cin >> n;

  ll x = 2050;

  if (n % x) {
    cout << "-1\n";
    return;
  }

  n /= x;
  ll cnt = 0;
  while (n) {
    cnt += n % 10;
    n /= 10;
  }

  cout << cnt << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
