#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;
  n *= 2;

  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  sort(a, a+n);

  for (int i = 0; i < n-1; i+=2) 
    swap(a[i], a[i+1]);

  swap(a[0], a[n-1]);

  for (int i = 0; i < n; i++)
    cout << a[i] << " \n"[i == n-1];
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
