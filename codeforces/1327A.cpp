#include <iostream>
using namespace std;

int main()
{
    long long int t, k, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n % 2 == k % 2 && k * k <= n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}