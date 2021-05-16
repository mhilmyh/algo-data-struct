#include <bits/stdc++.h>
using namespace std;

const char YEAR[] = {'2', '0', '2', '0'};

int goFront(string &s) {
  int index = 0;
  
  for(int i = 0; i < 4; i++) 
    if (s[i] == YEAR[i]) index++;
    else break;
  
  return index;
}

int goBack(string &s) {
  int index = 0;

  for(int i = 0; i < 4; i++) 
    if (s[s.length() - 1 - i] == YEAR[3 - i]) index++;
    else break;

  return index;
}

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int i = goFront(s);
  int j = goBack(s);

  // cout << "i: " << i << ", j: " << j << endl;
  
  if(i + j >= 4) cout << "YES\n";
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
