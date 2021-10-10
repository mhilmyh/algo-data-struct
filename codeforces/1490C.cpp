#include <bits/stdc++.h>
#define DEBUGMODE 1
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned long int uli;
typedef long int li;
typedef unsigned short int usi;
typedef short int si;

map<ulli, bool> b;

void printYes() {
  cout << "YES\n";
}

void printNo() {
  cout << "NO\n";
}

ulli calcCube(ulli x) {
  return x * x * x;
}

bool exist(ulli x) {
  for (ulli a = 1; a < 10000; a++) {
    if (b[x - calcCube(a)]) return true;
  }

  return false;
}

void fillValue() {
  for (ulli a = 1; a < 10000; a++)
    b[calcCube(a)] = true;
}

void solve() {
  ulli x;
  cin >> x;

  if (exist(x)) printYes();
  else printNo();
}

int main() {
  fillValue();

  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
