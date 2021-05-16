#include <bits/stdc++.h>
using namespace std;

void solve() {
  int px, py;

  cin >> px >> py;

  string s;
  cin >> s;

  map<char, int> cnt;
  for(int i = 0; i < s.length(); i++) cnt[s[i]]++;

  bool x = false;

  if(px == 0) x = true;
  else if(px > 0 && cnt['R'] >= px) x = true;
  else if(px < 0 && cnt['L'] >= px * -1) x = true;


  bool y = false;
  if(py == 0) y = true;
  else if(py > 0 && cnt['U'] >= py) y = true;
  else if(py < 0 && cnt['D'] >= py * -1) y = true;
  
  if(x && y) cout << "YES\n";
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
