#include <bits/stdc++.h>
using namespace std;


int main() {
  long long int t, a, b, c, d, e;
  cin >> t;

  while(t--) {
    cin >> a >> b >> c;

    d = (a < c) ? 1 : -1;
    e = (a * b > c) ? b : -1;

    cout << d << " " << e << endl;
  }
  return 0;
}
