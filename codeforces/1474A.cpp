#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int chrToInt(char x) {
  return (int)(x - '0');
}

char intToChr(int x) {
  return (char)(x + '0');
}

void solve() {
  int n, px, cx;
  cin >> n;

  string b, a = "1";
  cin >> b;

  for (int i = 1; i < n; i++) {
    px = chrToInt(a[i-1]) + chrToInt(b[i-1]);
    cx = chrToInt(b[i]);

    if (px == 2 && cx == 1) a += "0";
    else if (px == 2 && cx == 0) a += "1";
    else if (px == 1 && cx == 1) a += "1";
    else if (px == 1 && cx == 0) a += "0";
    else a += "1";
  }
  
  cout << a << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
