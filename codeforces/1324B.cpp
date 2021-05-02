#include <bits/stdc++.h>
using namespace std;


int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
      cin >> a[i];

    bool palindrome = false;
    map<int, bool> appear;
    
    for(int i = 1; i < n-1; i++) {
      appear[a[i-1]] = true;
      for(int j = i+1; j < n; j++) if(appear[a[j]]) {
        palindrome = true;
        break;
      }
      if(palindrome) break;
    }

    if(palindrome) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
