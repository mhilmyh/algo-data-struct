#include <bits/stdc++.h>
using namespace std;

int a[60];

int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;

    for(int i = 0; i < n; i++) 
      cin >> a[i];
    
    sort(a, a+n);

    bool is_valid = true;
    for(int i = 1; i < n; i++)
      is_valid &= (a[i] - a[i-1]) <= 1;

    if (is_valid) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  
  return 0;
}