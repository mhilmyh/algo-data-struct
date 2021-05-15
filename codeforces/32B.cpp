#include <bits/stdc++.h>
using namespace std;

bool isZero(char a) {
  return a == '.';
}

bool isOne(char a, char b) {
  return a == '-' && b == '.';
}

bool isTwo(char a, char b) {
  return a == '-' && b == '-';
}

int findValue(string x, int i) {
  if(isOne(x[i], x[i+1])) return 1;
  if(isTwo(x[i], x[i+1])) return 2;
  return 0;
}

void solve() {
  string s;
  int v;

  cin >> s;

  for(int i = 0; i < s.length(); i++) {
    v = findValue(s, i);
    cout << v;
    
    if(v != 0) i++;
  }

  cout << "\n";
}

int main() {
  solve();
  return 0;
}
