#include <bits/stdc++.h>
using namespace std;


int dig(int x) {
  int d = 0;
  while(x) {
    x /= 10;
    d++;
  }
  return d;
}

int main() {
  int t, n, d, l;
  cin >> t;
  while (t--) {
    cin >> n;
    d = dig(n);
    l = n % 10;
    cout << (l-1) * 10 + ((d) * (d+1) / 2) << endl;
  }
  
  return 0;
}
