#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b >> c >> d;

        if (n * (a - b) <= c + d && n * (a + b) >= c - d)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}