#include <bits/stdc++.h>
using namespace std;

bool isDelimeter(char c) {
  return c == ' ' || c == '\t' || c == ';';
}

int main() {
  string s, current = "";
  getline(cin, s);

  map<string, bool> memo;
  bool flag = false;

  for(int i = 0; i < s.length(); i++) {
    if(isDelimeter(s[i])) {

      if(memo[current] && current.length() > 1) { 
        // tidak boleh empty string
        // karena kalo empty string berarti karakter yang
        // ditemukan adalah delimeter
        flag = true;
        break;
      }

      memo[current] = true;
      current = "";
    } else current += s[i];
  }

  if(memo[current]) {
    flag = true;
  }

  if(flag) cout << "yes" << endl;
  else cout << "no" << endl;
  
  return 0;
}
