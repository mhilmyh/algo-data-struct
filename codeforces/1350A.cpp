#include <iostream>
#define SIZE 1000000
#define ll long long
using namespace std;

ll solve(ll x)
{
    ll i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            break;
    }
    return i;
}

int main()
{
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n % 2)
        {
            cout << n + 2 * (k - 1) + solve(n) << "\n";
        }
        else
        {
            cout << n + 2 * k << "\n";
        }
    }
    return 0;
}