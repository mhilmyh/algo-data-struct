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
  int n, a, b = -1, c = 1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    if (a == b) ++a;
    if (i) {
       c += a > b;
       printDebug("c", c);
       printDebug("-a", a);
       printDebug("--b", b);
    }
    b = max(b, a);
  }

  printf("%d\n", c);
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
