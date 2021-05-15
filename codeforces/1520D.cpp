#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, cnt = 0;
  cin >> n;

  int a;
  map<long long, long long> memo;
  for(long long i = 0; i < n; i++) {
    cin >> a;
    a -= i;
    memo[a]++;
  }

  for(auto v: memo) {
    cnt += v.second * (v.second - 1) / 2;
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
