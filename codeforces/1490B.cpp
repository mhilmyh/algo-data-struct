#include <bits/stdc++.h>
#define DEBUGMODE 0
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned long int uli;
typedef long int li;
typedef unsigned short int usi;
typedef short int si;

void printYes() {
  cout << "YES\n";
}

void printNo() {
  cout << "NO\n";
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
  }

  int res = 0;
  vector<int> cnt(3);
  for (int x = 0; x <= 2; x++) {
      for (int i = 0; i < n; i++) {
          if (a[i] % 3 == x) {
              cnt[x]++;
          }
      }
  }
  
  while (*min_element(cnt.begin(), cnt.end()) != n / 3) {
      for (int i = 0; i < 3; i++) {
          if (cnt[i] > n / 3) {
              res++;
              cnt[i]--;
              cnt[(i + 1) % 3]++;
          }
      }
  }
  cout << res << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
