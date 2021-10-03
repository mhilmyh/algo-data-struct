#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned short us;

void print_output(bool success) {
  cout << (success ? "YES\n" : "NO\n");
}

void solve() {
  string s;
  cin >> s;

  if (s.length() % 2) {
    print_output(false);
    return;
  }

  short int cnt[3] = {0, 0, 0};

  for (size_t i = 0; i < s.length(); i++) {
    cnt[s[i]-'A']++;  
  }
  
  short int min_ab = min(cnt[0], cnt[1]);
  short int min_bc = min(cnt[1], cnt[2]);
  
  cnt[0] -= min_ab;
  cnt[1] -= min_ab;
  cnt[1] -= min_bc;
  cnt[2] -= min_bc;

  print_output(cnt[0] == cnt[1] && cnt[1] == cnt[2] && cnt[2] == 0);
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
