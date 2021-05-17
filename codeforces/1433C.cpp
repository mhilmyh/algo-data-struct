#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  int a[n];
  int cnt = 0;
  queue<int> q;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    
    while (
      !q.empty() && a[q.front()] + q.size() - 1 + cnt <= a[i]
    ) {

      if (a[q.front()] < a[i]) cnt++;
      else cnt = 0;

      q.pop();
    }

    if (
      ( i < n-1 && q.empty() ) || 
      ( i == n-1 && i != 0 && a[i] > a[i-1] ) ||
      ( !q.empty() && a[q.front()] + q.size() - 1 + cnt > a[i] )
    ) {
      q.push(i);
    }
  }
  
  if (q.empty()) cout << "-1\n";
  else cout << q.front() + 1 << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
