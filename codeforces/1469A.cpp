#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned short us;
typedef short is;

bool check(string &s) {
  is a = 0, b = 0;
  bool l = true, r = true;

  for (is i = 0; i < s.length(); i++) {
    if (s[i] == '(') a++;
    else if (s[i] == ')') a--;
    else b++;
    if (a + b < 0) {
      l = false;
      break;
    }
  }

  if (a != 0 && a + b < 0) l = false;
  else if (a == 0 && b % 2) l = false;

  a = b = 0;
  for (is i = s.length()-1; i >= 0; i--) {
    if (s[i] == ')') a++;
    else if (s[i] == '(') a--;
    else b++;
    if (a + b < 0) {
      r = false;
      break;
    }
  }

  if (a != 0 && a + b < 0) r = false;
  else if (a == 0 && b % 2) r = false;

  return l && r;
}

void solve() {
  string s;
  cin >> s;

  bool valid = check(s);

  if (valid) cout << "YES\n";
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
