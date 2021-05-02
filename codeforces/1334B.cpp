#include <bits/stdc++.h>
using namespace std;


int main() {
  int t, n, cnt;
  long long x, sum;

  cin >> t;

  while (t--) {
    cnt = 0;
    sum = 0L;

    cin >> n >> x;
    
    int a[n];

    for(int i = 0; i < n; i++)
      cin >> a[i];

    sort(a, a+n, greater<int>());

    while (cnt < n && sum + a[cnt] >= (cnt + 1) * x)
      sum += a[cnt++];
    
    cout << cnt << endl;
  }
  
  return 0;
}
