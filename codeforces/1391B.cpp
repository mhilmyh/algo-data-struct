#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  char a[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  int cnt = 0;
  for(int i = 0; i < n - 1; i++)
    if (a[i][m-1] == 'R') cnt++;
  for (int i = 0; i < m - 1; i++)
    if (a[n-1][i] == 'D') cnt++;
  
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
