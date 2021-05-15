#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int a[n];
  size_t i, j;
  bool turn = 1;

  for (i = 0; i < n; i++)
    cin >> a[i];

  i = 0;
  j = n-1;
  while (i != j) {
    if(turn) cout << a[i++] << " ";
    else cout << a[j--] << " ";
    
    turn = !turn;
  }

  cout << a[i] << "\n";
  
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
