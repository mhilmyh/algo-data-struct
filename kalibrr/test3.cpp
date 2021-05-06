#include <bits/stdc++.h>
using namespace std;


int solve(int A, int B, int K) {
  return (B - A) / K + (A % K == 0 ? 1 : 0);
}

int main() {
  int T, A, B, K;
  cin >> T;
  for (int i = 1; i <= T; i++)
  {
    cin >> A >> B >> K;
    cout << "Case " << i << ": " << solve(A,B,K) << endl;
  }
  
  return 0;
}
