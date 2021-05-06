#include <bits/stdc++.h>
using namespace std;

int T, N, M;

const char CONTESTED_REGION = '@';
const char FREE_REGION = '.';

char dfs(
  char filler,
  int i,
  int j,
  vector<vector<char>> &l, 
  vector<vector<bool>> &v
) {
  v[i][j] = true;

  if(l[i][j] != FREE_REGION && l[i][j] != filler) 
    return CONTESTED_REGION;
  
  l[i][j] = filler;

  char owner[4] = {
    FREE_REGION, 
    FREE_REGION, 
    FREE_REGION, 
    FREE_REGION
  };

  // up
  if(i-1 >= 0 && !v[i-1][j]) 
    owner[0] = dfs(filler, i-1, j, l, v);

  // down
  if(i+1 < N && !v[i+1][j]) 
    owner[1] = dfs(filler, i+1, j, l, v);

  // left
  if(j-1 >= 0 && !v[i][j-1]) 
    owner[2] = dfs(filler, i, j-1, l, v);

  // right
  if(j+1 < M && !v[i][j+1]) 
    owner[3] = dfs(filler, i, j+1, l, v);

  for(int i = 0; i < 4; i++) 
    if(owner[i] == CONTESTED_REGION)
      return CONTESTED_REGION;

  return filler;
}

int main() {
  cin >> T;

  for(int k = 1; k <= T; k++) {
    cin >> N >> M;

    vector<vector<char>> land(N, vector<char>(M, '#'));
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    
    for(int i = 0; i < N; i++)
      for(int j = 0; j < M; j++) {
        cin >> land[i][j];
        if(land[i][j] == '#') visited[i][j] = true;
      }

    map<char, int> region;
    int contested = 0;

    for(int i = 0; i < N; i++)
      for(int j = 0; j < M; j++)
        if(land[i][j] != '.' && !visited[i][j]) {
          char owner = dfs(land[i][j], i, j, land, visited);
          if(owner == CONTESTED_REGION) contested++;
          else if(owner != FREE_REGION) region[owner]++;
        }

    cout << "Case " << k << ":" << endl;
    for(auto r : region) cout << r.first << ": " << r.second << endl;
    cout << "contested: " << contested << endl;
  }
  
  return 0;
}
