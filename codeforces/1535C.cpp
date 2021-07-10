#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  string s;
  cin >> s;

  ll cnt = 0;
  vector<vector<int>> lst(2, vector<int>(2, -1));

  for (int i = 0; i < s.length(); i++) {
    int j = i-1;
    int p = i & 1;
    if (s[i] != '1') j = min(j, max(lst[0][p ^ 1], lst[1][p]));
    if (s[i] != '0') j = min(j, max(lst[0][p], lst[1][p ^ 1]));
    if (s[i] != '?') lst[s[i] - '0'][p] = i;
    cnt += i-j;
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
