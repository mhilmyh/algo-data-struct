#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}


int main() {
  int n, lcm, a, b;
  string s, t, s1, t1;
  bool same;

  cin >> n;
  while (n--)
  {
    cin >> s >> t;

    a = s.length();
    b = t.length();

    lcm = a * b / gcd(a, b);

    s1 = "";
    t1 = "";

    for(int i = 0; i < lcm / a; i ++)
      s1 += s;

    for(int i = 0; i < lcm / b; i++)
      t1 += t;

    same = true;
    for(int i = 0; i < lcm; i++) 
      same &= s1[i] == t1[i];

    if(same) cout << s1 << endl;
    else cout << -1 << endl; 
  }
  
  return 0;
}
