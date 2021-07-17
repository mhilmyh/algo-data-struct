#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool sort_by_even_first(int x, int y) {
  return x % 2 < y % 2;
}

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end(), sort_by_even_first);
  
  ll cnt = 0;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
        cnt += gcd(a[i], 2*a[j]) > 1;
  
  cout << cnt << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
