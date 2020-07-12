#include <iostream>
#define lli long long int
using namespace std;

int main()
{
    lli t, s, save;

    cin >> t;
    while (t--)
    {
        cin >> s;

        save = s;

        lli ans = 0, tmp = 0;
        while (s >= 10)
        {
            tmp = s / 10;
            s %= 10;
            s += tmp;
            ans += tmp;
        }

        cout << ans + save << "\n";
    }
    return 0;
}