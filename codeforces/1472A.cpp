#include <bits/stdc++.h>
using namespace std;

long cutPaper(long x) {
  long cnt = 1;
  while (x % 2 == 0) {
    x /= 2;
    cnt *= 2;
  }
  return cnt;
}

void solve() {
  long w, h, n;
  cin >> w >> h >> n;
  long total = cutPaper(w) * cutPaper(h);

  if(total >= n) cout << "YES\n";
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
