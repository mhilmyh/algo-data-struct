#include <bits/stdc++.h>
using namespace std;

int main()
{
  char dir, compass[4] = {'N', 'E', 'S', 'W'};
  int face = 1;
  int t, n;
  cin >> t;
  while (t--)
  {
    face = 1;
    cin >> n;
    while (n--)
    {
      cin >> dir;
      if (dir == '0')
        face = (face + 1) % 4;
      else
        face = (face - 1 + 4) % 4;
    }
    // cout << "face: " << face << '\n';
    cout << compass[face] << '\n';
  }

  return 0;
}