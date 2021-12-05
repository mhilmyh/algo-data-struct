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

lli ceilAlt(lli a, lli b) {
  return  (a/b) + ((a%b) != 0);
}

void solve() {
  int n,x,a;
  scanf("%d %d", &n, &x);

  lli s = 0, mx = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    s += a;
    mx += ceilAlt(a,x);
  }
  printf("%lld %lld\n", ceilAlt(s,x), mx);
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
