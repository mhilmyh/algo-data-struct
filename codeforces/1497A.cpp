#include <bits/stdc++.h>
#define DEBUGMODE 1
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned long int uli;
typedef long int li;
typedef unsigned short int usi;
typedef short int si;

void printYes() {
  cout << "YES\n";
}

void printNo() {
  cout << "NO\n";
}

void solve() {
  usi n, a, j;
  cin >> n;

  map<usi,usi> x;

  for (usi i = 0; i < n; i++) {
    cin >> a;
    x[a]++;
  }


  map<usi, usi>::iterator it = x.begin();
  for (j = it->first; j < n; ++j) {
    if (!x[j]) break;
    --x[j];
    cout << j << ' ';
  }
  
  while (it != x.end()) {
    j = it->second;
    while (j) {
      cout << it->first << ' ';
      --j;
    }
    ++it;
  }
  
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
