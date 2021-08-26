#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll n, m;
  cin >> n;
  
  m = n / 3;
  n -= m;

  if (n % 2) m++;

  cout << m << " " << (n / 2) << endl;
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    solve();
  }
  return 0;
}
