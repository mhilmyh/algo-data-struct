#include <bits/stdc++.h>
using namespace std;

int x[50];

void solve() {
  int n;
  cin >> n;

  map<int, bool> d;

  for (int i = 0; i < n; i++)
    cin >> x[i];
  
  for (int i = 0; i < n-1; i++)
    for (int j = i+1; j < n; j++)
      d[x[j] - x[i]] = true;
      
  cout << d.size() << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
