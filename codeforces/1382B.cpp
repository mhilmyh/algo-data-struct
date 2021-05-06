#include <bits/stdc++.h>
using namespace std;


int main() {
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;

    int arr[n];
    bool win[n+1];
    for(int i = 0; i < n; i++) cin >> arr[i];

    // 0 : First
    // 1 : Second

    bool pile = (arr[0] > 1);
    win[0] = 0;
    for(int i = 1; i <= n; i++) {
      win[i] = win[i-1];
      if(i != n && !pile && arr[i] == 1) win[i] = !win[i];
      if(i != n && !pile && arr[i] > 1) {
        win[i] = !win[i];
        pile = true;
      }
    }
    
    // cout << "=======================" << endl;
    // for(auto x : arr) cout << x << " ";
    // cout << endl;
    // for(auto x : win) cout << x << " ";
    // cout << endl;
    cout << (win[n] ? "Second"  : "First") << endl; 
    // cout << "=======================" << endl;
  }
  return 0;
}
