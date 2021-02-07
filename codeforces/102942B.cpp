#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, a, odd, even;

  cin >> t;

  while (t--)
  {
    odd = even = 0;
    cin >> n;
    while (n--)
    {
      cin >> a;

      if (a % 2)
        odd++;
      else
        even++;
    }

    if (!odd)
      cout << -1 << endl;
    else
      cout << even << endl;
  }

  return 0;
}