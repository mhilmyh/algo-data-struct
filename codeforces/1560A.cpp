#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> v;

void solve() {
  int k;
  cin >> k;
  cout << v[k-1] << endl;
}

void fillValue() {
  int i  = 0;
  while (v.size() < 1000) {
    if (i % 3 != 0 && i % 10 != 3) 
      v.push_back(i);
    i++;
  }
}

int main() {
  fillValue();
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
