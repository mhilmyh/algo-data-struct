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

void printDebug(const char* cs, ulli x) {
  if (DebugMode) printf("[%s]: %llu\n", cs, x);
} 

void initMain(int argc, char** argv) {
  if (argc > 1 && strcmp(argv[1], "debug") == 0) {
    DebugMode = true;
  }
}

void solve() {
  ulli n;
  scanf("%llu", &n);
  printf("%llu\n", max(n+1, 6LLU) / 2 * 5);
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
