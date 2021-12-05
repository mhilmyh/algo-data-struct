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

lli calcWaitTime(ulli arriveTime, ulli swimTime) {
  ulli tmp = (arriveTime%swimTime);
  if (!tmp) return 0L;
  return swimTime-tmp;
}

void solve() {
  ulli p, a, b, c, ans = LONG_LONG_MAX;
  scanf("%llu %llu %llu %llu", &p, &a, &b, &c);
  ans = (ulli)max(min(calcWaitTime(p,a), min(calcWaitTime(p,b), calcWaitTime(p,c))), 0LL);
  printf("%llu\n", ans);
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
