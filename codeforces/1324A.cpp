#include <iostream>
#include <algorithm>
using namespace std;

int a[101];

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        bool even, odd;
        even = odd = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2)
                odd = true;
            else
                even = true;
        }

        if (odd != even)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}