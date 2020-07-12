#include <iostream>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n == 1 || m == 1 || (n == 2 && m == 2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}