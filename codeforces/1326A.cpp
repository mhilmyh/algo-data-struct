#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, n, i, sum;
    cin >> t;
    while (t--)
    {
        cin >> n;

        if (n == 1)
        {
            cout << "-1\n";
            continue;
        }

        string ans = "";
        sum = 2 * (n - 1) + 3;
        for (i = 0; i < n - 1; i++)
            ans += "2";
        ans += "3";

        if (sum % 3 == 0)
            ans[0] = '4';

        cout << ans << "\n";
    }
    return 0;
}