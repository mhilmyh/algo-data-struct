#include <bits/stdc++.h>
using namespace std;

bool DebugMode = false;

typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned long int uli;
typedef long int li;
typedef unsigned short int usi;
typedef short int si;

void printYesOrNo(bool v) {
  if (v) printf("YES\n");
  else printf("NO\n");
}

void printDebug(const char* cs, int x) {
  if (DebugMode) printf("[%s]: %d\n", cs, x);
} 

void initMain(int argc, char** argv) {
  if (argc > 1 && strcmp(argv[1], "debug") == 0) {
    DebugMode = true;
  }
}

void solve() {
  int r,g,b,w;
  scanf("%d %d %d %d", &r, &g, &b, &w);

  bitset<3> x;
  bitset<1> y;

  x[0] = r%2;
  x[1] = g%2;
  x[2] = b%2;
  y[0] = w%2;
  
  printDebug("x", x.count());
  printDebug("y", y.count());

  int mn = min(r, min(g,b));

  if (x.count()+y.count() <= 1) {
    printYesOrNo(true);
    return;
  }

  x.flip();
  y.flip();

  printYesOrNo(x.count()+y.count() <= 1 && mn >= 1);
}

int main(int argc, char** argv) {
  initMain(argc, argv);

  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
