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
  int a,b,c,d,e;
  cin >> a >> b >> c;
  d = max(max(a,b),c);
  e = ((a==d)+(b==d)+(c==d))==1; 
  if (a == d && e) ++a;
  if (b == d && e) ++b;
  if (c == d && e) ++c;
  ++d;
  printf("%d %d %d\n", abs(a-d), abs(b-d), abs(c-d));
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
