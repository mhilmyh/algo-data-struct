#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int s1,s2,s3,s4;
  cin >> s1 >> s2 >> s3 >> s4;
  if(max(s1,s2) > min(s3,s4) && max(s3,s4) > min(s1,s2))
    cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
