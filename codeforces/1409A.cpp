#include <bits/stdc++.h>
using namespace std;


int main() {
  int t, a, b, c, d;
  cin >> t;
  while (t--)
  {
    cin >> a >> b;
    
    c = abs(a-b);
    
    d = c / 10;
    c %= 10;

    if(c) d++;
    cout << d << endl;
  }
  
  return 0;
}
