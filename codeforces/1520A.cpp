#include <bits/stdc++.h>
using namespace std;

string solve(string s, int n) {
  int a[26] = {0};
  char current = 'x';
  for(int i = 0; i < n; i++) {

    if(current == 'x') current = s[i];
    else if(current == s[i]) continue;
    else current = s[i];

    if(a[current - 'A']) return "NO";
    a[current - 'A'] = 1;
  }
  return "YES";
}

int main() {
  int t, n;
  string str;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cin >> str;
    cout << solve(str, n) << endl;  
  }
  
  return 0;
}
