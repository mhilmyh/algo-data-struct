#include <bits/stdc++.h>
using namespace std;

long a[60], b[60];

int main() {
  long t, n, x, y;
  long long ans;

  cin >> t;
  while (t--)
  {
    x = INT_MAX;
    y = INT_MAX;

    cin >> n;

    for(int i = 0; i < n; i++) {
      cin >> a[i];
      x = min(x, a[i]);
    }

    for(int i = 0; i < n; i++) {
      cin >> b[i];
      y = min(y, b[i]);
    }

    ans = 0;
    for(int i = 0; i < n; i++)
      ans += max(abs(a[i]-x), abs(b[i]-y));

    cout << ans << endl;

  }
  
  return 0;
}
