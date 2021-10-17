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
  usi n = 0, i = 0;
  scanf("%hu", &n);

  bool ans = true;
  lli h = 0, s = 0;
  for (i = 0; i < n; i++) {
    scanf("%lld", &h);
    if (!ans) continue;
    if (i > s + h) ans = false;
    s = (s + h) - i;
    printDebug("s", s);
  }
  
  printYesOrNo(ans);
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
