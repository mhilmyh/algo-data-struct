#include <bits/stdc++.h>
using namespace std;


int main() {
  int t, p_a2_b1, p_a1_b0, p_a0_b2, p_a1_b2;
  int a0, a1, a2;
  int b0, b1, b2;

  cin >> t;
  while (t--) {
    cin >> a0 >> a1 >> a2;
    cin >> b0 >> b1 >> b2;

    p_a2_b1 = min(a2, b1);
    a2 -= p_a2_b1;
    b1 -= p_a2_b1;

    p_a1_b0 = min(a1, b0);
    a1 -= p_a1_b0;
    b0 -= p_a1_b0;

    p_a0_b2 = min(a0, b2);
    a0 -= p_a0_b2;
    b2 -= p_a0_b2;

    p_a1_b2 = min(a1, b2);

    cout << (p_a2_b1 -  p_a1_b2) * 2 << endl;
  }
  
  return 0;
}
