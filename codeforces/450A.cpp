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
  int n, m, a, b, c = 0, d = 0;
  scanf("%d %d", &n, &m);
  printDebug("n", n);
  printDebug("m", m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    b = a / m;
    b += (a % m) != 0;
    printDebug("a", a);
    printDebug("b", b);
    printDebug("i", i);
    if (i && b >= d) {
      c = i;
      printDebug("c", c);
    }
    d = max(d,b);
  }
  printf("%d\n", c+1);
}

int main(int argc, char** argv) {
  initMain(argc, argv);
  solve();
  return 0;
}
