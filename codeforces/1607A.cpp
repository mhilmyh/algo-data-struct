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
  string k, s;
  map<char,int> nk;
  uli ans = 0;
  cin >> k >> s;
  for (int i = 0; i < k.length(); i++) {
    nk[k[i]] = i;
  }
  
  for (int i = 1; i < s.length(); i++) {
    ans += abs(nk[s[i]] - nk[s[i-1]]);
  }
  printf("%ld\n", ans);
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
