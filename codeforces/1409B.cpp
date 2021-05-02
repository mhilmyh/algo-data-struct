#include <bits/stdc++.h>
using namespace std;


int main() {
  long long t, a, b, c, x, y, n;
  cin >> t;
  while (t--)
  {
    cin >> a >> b >> x >> y >> n;
    
    // b minimum
    if(max(a-n, x) > max(b-n, y)) {
      c = b-y;
      b = max(b-n, y);
      n -= min(n, c);
      a -= min(a-x, n);
    // a minimum
    } else {
      c = a-x;
      a = max(a-n, x);
      n -= min(n, c);
      b -= min(b-y, n);
    }

    cout << a * b << endl;
  }
    
  return 0;
}
