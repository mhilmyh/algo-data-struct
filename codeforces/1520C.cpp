#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  if(n == 1) {
    cout << 1 << endl;
    return;
  }

  if(n == 2) {
    cout << -1 << endl;
    return;
  }

  int matrix[n][n];
  int num = 1;

  for(int i = 0; i < n; i++) 
    for(int j = 0; j < n; j++)
      if((i + j) % 2 == 0) 
        matrix[i][j] = num++;

  for(int i = 0; i < n; i++) 
    for(int j = 0; j < n; j++)
      if((i + j) % 2 == 1)
        matrix[i][j] = num++;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++)
      cout << matrix[i][j] << " ";
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
