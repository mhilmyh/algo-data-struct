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
  int n, tmp, v = -1;
  scanf("%d", &n);
  tmp = n;

  while (n > 0)
  {
    if (n == tmp && n % 2 == 0) {
      v = 0;
      break;
    } else if (n < 10 && n % 2 == 0) {
      v = 1;
    } else if (n % 2 == 0) {
      v = 2;
    }
    n /= 10;
  }

  printf("%d\n", v);
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
