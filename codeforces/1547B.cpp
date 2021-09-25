#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned short us;

int findChrA(string &s) {
  us dup[26];
  for (us i = 0; i < 26; i++) {
    dup[i] = 0;
  }
  
  int ret = -1;
  for (us i = 0; i < s.length(); i++) {
    dup[s[i] - 'a']++;
    
    if (s[i] == 'a' && ret == -1) 
      ret = i;
  }

  for (us i = 0; i < 26; i++) 
    if (dup[i] > 1) return -1;
  
  return ret;
}

void solve() {
  string s;
  cin >> s;
  // cout << "string: " + s + "\n";

  int start = findChrA(s);

  if (start < 0) {
    cout << "NO\n";
    return;
  }

  int i = start, j = start;
  bool ans = true;
  char c = 'a';

  while ((i >= 0 || j < s.length()) && ans) {
    ans &= (i >= 0 && s[i] == c) || (j < s.length() && s[j] == c);

    if (i >= 0 && s[i] == c) i--;
    if (j < s.length() && s[j] == c) j++;
    // cout << i << "," << j << " : " << ans << " = " << c << endl;
    c++;
  }

  cout << (ans ? "YES\n" : "NO\n");
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
