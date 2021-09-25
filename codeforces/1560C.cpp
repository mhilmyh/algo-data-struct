#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned short us;

ll getColValue(ll n) {
  return max(n-1, 0LL) * max(n-1, 0LL) + 1LL;
}

void solve() {
  ll k;
  cin >> k;

  ll l = 1, r = 1000000, m;
  ll v_lower, v_upper;
  while (l <= r) {
    m = (l + r) / 2;

    v_lower = getColValue(m);
    v_upper = getColValue(m+1);

    if (k >= v_lower && k < v_upper) break;
    else if (k < v_upper) r = m-1;
    else if (k >= v_lower) l = m+1;
  }
  
  // cout << "k: " << k << "\n";
  // cout << "m: " << m << "\n";
  // cout << "v_lower: " << v_lower << "\n";
  // cout << "v_upper: " << v_upper << "\n";
  // cout << "l: " << l << "\n";
  // cout << "r: " << r << "\n";


  if (k >= v_lower && k <= v_lower + m - 1) {
    cout << k - v_lower + 1 << " " << m << "\n";
  } else {
    cout << m << " " << m - (k - (v_lower + m - 1)) << "\n";
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
