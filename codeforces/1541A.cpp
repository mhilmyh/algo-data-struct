#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  vector<int> p(n);
  iota(p.begin(), p.end(), 1);
  
  int j = -1;
  
  if (n % 2) {
    p[0] = 3;
    p[1] = 1;
    p[2] = 2;

    j = 2;
  }

  while (++j < n) {
    swap(p[j], p[j+1]);
    ++j;
  }

  for (int i = 0; i < n; i++)
    cout << p[i] << " \n"[i == n-1];
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
