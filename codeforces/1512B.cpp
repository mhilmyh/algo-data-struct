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
      if (c[i][j] == '*') sq.push_back({i,j});
    }

  if (sq.size() < 2) {
    cout << "Skip\n";
    return;
  }
  
  if (sq[0].first == sq[1].first) {
    int diff = 1;

    if (sq[0].first + diff >= n) diff *= -1;

    c[sq[0].first + diff][sq[0].second] = '*';
    c[sq[1].first + diff][sq[1].second] = '*';
  }

  else if (sq[0].second == sq[1].second) {
    int diff = 1;

    if (sq[0].second + diff >= n) diff *= -1;

    c[sq[0].first][sq[0].second + diff] = '*';
    c[sq[1].first][sq[1].second + diff] = '*';
  }

  else {
    c[sq[0].first][sq[1].second] = '*';
    c[sq[1].first][sq[0].second] = '*';
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << c[i][j];
    }
    cout << '\n';
  }

  c.clear();
  sq.clear();
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
