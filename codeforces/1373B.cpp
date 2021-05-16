#include <bits/stdc++.h>
using namespace std;

bool isPair(char a, char b) {
  return (a == '1' && b == '0') || (a == '0' && b == '1');
}

void solve() {
  string b;
  cin >> b;

  stack<char> s;
  int c = 0;
  for(int i = 0; i < b.length(); i++) {
    if(s.empty() || !isPair(s.top(), b[i])) s.push(b[i]);
    else {
      s.pop();
      c++;
    }
  }

  if(c % 2) cout << "DA\n";
  else cout << "NET\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
