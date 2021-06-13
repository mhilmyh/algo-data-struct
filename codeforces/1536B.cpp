#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool is_exist(string a, string b) {
  // cout << "[is_exist] check if " << a << " exist in " << b << endl;
  bool exist;
  int j;

  for (int i = 0; i <= b.length() - a.length(); i++) {
    exist = true;

    for (j = 0; j < a.length(); j++) 
      exist &= a[j] == b[j+i];
    
    if(exist) return true;
  }
  
  // cout << "[is_exist] " << a << " is not in " << b << endl;
  return false;
}


bool incremet_string(string &s) {
  int n = s.length() - 1;
  
  while(n >= 0 && s[n] == 'z') {
    s[n] = 'a';
    n--;
  }

  if(n < 0) return false;

  s[n]++;
  return true;
}

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;
  
  string ans;
  bool found = false;
  int len = 1;

  while (!found) {
    ans = "";

    for (int i = 0; i < len; i++)
      ans += 'a';

    if(!is_exist(ans, s)) found = true;
    else while(!found && incremet_string(ans)) 
      if(!is_exist(ans, s)) found = true;
    
    // cout << "[while] len: " << len << ", ans: " << ans << endl;
    len++;
  }
  
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
