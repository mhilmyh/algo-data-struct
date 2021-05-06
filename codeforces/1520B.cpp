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

  bool same_digit;
  for(int i = 1; i <= d.back(); i++) {
    same_digit = true;
    for(int j = 0; j < d.size(); j++) same_digit &= (d[j] >= i);
    cout << "i: " << i << " , same_digit: " << (same_digit ? "true" : "false") << endl;
    if(same_digit) cnt++;
  }


  return cnt;
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
