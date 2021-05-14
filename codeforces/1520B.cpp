#include <bits/stdc++.h>
using namespace std;


vector<int> digit(int n) {
  vector<int> d;
  while (n) {
    d.push_back(n % 10);
    n /= 10;
  }
  return d;
}

int solve(int n) {
  if(n < 10) return n;

  vector<int> d = digit(n);
  // for(auto x : d) cout << x << " "; cout << endl;

  int cnt = (d.size()-1) * 9;

  int bound = d.back();
  for(int i = 0; i < d.size()-1; i++) {
    bound *= 10;
    bound += d.back();
  }
  
  if(bound <= n) cnt++;

  return cnt + (d.back() - 1);
}

int main() {
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cout << solve(n) << endl;
  }
  
  return 0;
}
