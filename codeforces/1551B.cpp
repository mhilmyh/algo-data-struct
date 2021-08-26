#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  string s;
  short int x = 0, ans = 0;
  map<char, short int> c;
  map<char, short int>::iterator it;
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    c[s[i]]++;    
  }

  
  for (it = c.begin(); it != c.end(); it++) {
    if (it->second >= 2) ans++;
    else x++;
  }

  cout << ans  + x / 2 << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
