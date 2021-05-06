#include <bits/stdc++.h>
using namespace std;


int check(int a, int b, int N, int M, string &s, vector<string> &puzzle) {
  bool valid;
  int i, cnt = 0;
  
  // north
  valid = true;
  for(i = 0; i < s.length() && a - i >= 0; i++)
    valid &= s[i] == puzzle[a-i][b];
  if(valid && i == s.length()) cnt++;
  // cout << "cnt nort: " << cnt << endl; 

  // south
  valid = true;
  for(i = 0; i < s.length() && i + a < N; i++)
    valid &= s[i] == puzzle[i+a][b];
   if(valid && i == s.length()) cnt++;
  //  cout << "cnt south: " << cnt << endl;
  
  // east
  valid = true;
  for(i = 0; i < s.length() && i + b < M; i++)
    valid &= s[i] == puzzle[a][i+b];
  if(valid && i == s.length()) cnt++;
  // cout << "cnt east: " << cnt << endl;
  
  // west
  valid = true;
  for(i = 0; i < s.length() && b - i >= 0; i++)
    valid &= s[i] == puzzle[a][b-i];
  if(valid && i == s.length()) cnt++;
  // cout << "cnt west: " << cnt << endl;

  // north west
  valid = true;
  for(i = 0; i < s.length() && b - i >= 0 && a - i >= 0; i++)
    valid &= s[i] == puzzle[a-i][b-i];
  if(valid && i == s.length()) cnt++;
  // cout << "cnt nort west: " << cnt << endl;

  // north east
  valid = true;
  for(i = 0; i < s.length() && i + b < M && a - i >= 0; i++)
    valid &= s[i] == puzzle[a-i][i+b];
  if(valid && i == s.length()) cnt++;
  // cout << "cnt nort east: " << cnt << endl;

  // south east
  valid = true;
  for(i = 0; i < s.length() && i + b < M && i + a < N; i++)
    valid &= s[i] == puzzle[i+a][i+b];
  if(valid && i == s.length()) cnt++;
  // cout << "cnt south east: " << cnt << endl;

  // south west
  valid = true;
  for(i = 0; i < s.length() && b - i >= 0 && i + a < N; i++)
    valid &= s[i] == puzzle[i+a][b-i];
  if(valid && i == s.length()) cnt++;
  // cout << "cnt south west: " << cnt << endl;

  // cout << "cnt total: " << cnt << endl;
  return cnt;
}

int main() {
  int T, N, M;
  string s;

  cin >> T;

  for (int k = 1; k <= T; k++)
  {
    cin >> N >> M;

    vector<string> puzzle(N, "");

    for(int i = 0; i < N; i++) {
      cin >> puzzle[i];
    }

    string s;
    cin >> s;

    int cnt = 0;

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < M; j++) {
        if(puzzle[i][j] == s[0]) 
          cnt += check(i, j, N, M, s, puzzle);
      }
    }

    cout << "Case " << k << ": " << cnt << endl;
  }
  
  return 0;
}
