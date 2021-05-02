#include <bits/stdc++.h>
using namespace std;


int main() {
  int t;
  long long n;
  bool exist;

  cin >> t;
  while (t--)
  {
    cin >> n;

    if(n % 2) {
      cout << "YES" << endl;
      continue;
    }

    while (n % 2 == 0) n /= 2;

    if(n > 1 && n % 2 == 1) {
      cout << "YES" << endl;
      continue;
    }

    cout << "NO" << endl;    
  }
  
  return 0;
}
