#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int xa, ya, xb, yb, xf, yf;
  
  cin >> xa >> ya;
  cin >> xb >> yb;
  cin >> xf >> yf;

  unsigned long distance = abs(xa - xb) + abs(ya - yb);
  
  if (
    (xa == xb && xa == xf && ((yf > ya && yf < yb) || (yf > yb && yf < ya)) ) 
    || 
    (ya == yb && ya == yf && ((xf > xa && xf < xb) || (xf > xb && xf < xa)) )
  ) {
    distance += 2;
  }
  
  cout << distance << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
