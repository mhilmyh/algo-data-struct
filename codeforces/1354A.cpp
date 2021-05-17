#include <bits/stdc++.h>
using namespace std;

long long cc(long long a, long long b, long long c, long long d) {
  return ((a-b) / (c-d)) + min(((a-b )% (c-d)), 1LL);
}

void solve() {
  long long a, b, c, d, e, f, g, h;
  cin >> a >> b >> c >> d;
  
  if(b >= a) cout << b << endl;
  else if(c <= d) cout << -1 << endl;
  else cout << (long long)(b + cc(a,b,c,d) * c) << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
