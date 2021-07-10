#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;

  vector<vector<char>> c(n, vector<char>(n, '.'));
  vector<pair<int, int>> sq;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      cin >> c[i][j];
      if(c[i][j] == '*') sq.push_back({i,j});
    }
  
  sort(sq.begin(), sq.end());
  
  int dist_i = abs(sq[1].first - sq[0].first);
  int dist_j = abs(sq[1].second - sq[0].second);

  int dir_i = (max(sq[0].first, sq[1].first) + dist_i < n) ? 1 : -1;
  int dir_j = (max(sq[0].second, sq[1].second) + dist_j < n) ? 1 : -1;

  cout << "dist_i: " << dist_i << "\n";
  cout << "dist_j: " << dist_j << "\n";
  cout << "dir_i: " << dir_i << "\n";
  cout << "dir_j: " << dir_j << "\n";
  cout << endl;
  // c[sq[0].first + dist_i * dir_i][sq[0].second + dist_j * dir_j] = '*';
  // c[sq[1].first + dist_i * dir_i][sq[1].second + dist_j * dir_j] = '*';

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cout << c[i][j] << " \n"[j == n-1];
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
