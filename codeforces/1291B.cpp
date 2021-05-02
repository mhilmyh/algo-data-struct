#include <bits/stdc++.h>
using namespace std;


int main() {
  int t, n, mx;
  cin >> t;
  while (t--) {
    cin >> n;

    mx = n * (n+1) / 2;

    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int pref = -1, suff = n+1;
    for(int i = 0; i < n; i++) {
      if(a[i] < i) break;
      pref = i;
    }

    for(int i = n-1; i >= 0; i--) {
      if(a[i] < n - 1 - i) break;
      suff = i;
    }


    if(pref >= suff) cout << "Yes" << endl;
    else cout << "No" << endl;

  }
  
  return 0;
}
