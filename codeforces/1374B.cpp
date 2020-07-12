#include <iostream>
#define lli long long int
using namespace std;

lli solve(lli x, lli *a, lli *b)
{
    while (x % 2 == 0)
    {
        x /= 2;
        (*a)++;
    }
    while (x % 3 == 0)
    {
        x /= 3;
        (*b)++;
    }

    // cout << x << "---" << *a << "---" << *b << "---\n";
    return x;
}

int main()
{
    lli t, n, cnt2, cnt3;
    cin >> t;
    while (t--)
    {
        cnt2 = cnt3 = 0;
        cin >> n;
        if (solve(n, &cnt2, &cnt3) == 1 && cnt2 <= cnt3)
        {
            cout << (cnt3 - cnt2) + cnt3 << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}