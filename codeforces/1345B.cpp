#include <bits/stdc++.h>
#define MAX_N 3000010
using namespace std;

vector<long long> pyramid (MAX_N, 0);

void precompute() {
  for (long long i = 1; i < MAX_N; i++)
    pyramid[i] = (3 * i + 1) * i / 2;
}

int solve(int n){
  int cnt = 0;
  while(true) {
    int position = upper_bound(pyramid.begin(), pyramid.end(), n) - pyramid.begin() - 1;
    if(position == 0) break;

    n -= pyramid[position];
    cnt++;
  }
  return cnt;
}

int main() {
  int t, n;
  cin >> t;

  precompute();

  while(t--) {
    cin >> n;
    cout << solve(n) << endl;
  }

  return 0;
}
