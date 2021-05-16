#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); i++) 
    if(i % 2) s[i] = (s[i] == 'z') ? 'y' : 'z';
    else s[i] = (s[i] == 'a') ? 'b' : 'a';
  
  cout << s << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
