#include <bits/stdc++.h>
using namespace std;

void solve() {
  string b;
  cin >> b;

  vector<int> v;
  int cnt = 0;
  for(int i = 0; i < b.length(); i++) {
    if(b[i] == '1') cnt++;
    else if(cnt) {
      v.push_back(cnt);
      cnt = 0;
    }
  }

  if(cnt) v.push_back(cnt);
  sort(v.begin(), v.end(), greater<int>());

  cnt = 0;
  for(int i = 0; i < v.size(); i += 2) cnt += v[i];
  cout << cnt << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
