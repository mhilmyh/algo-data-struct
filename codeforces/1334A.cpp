#include <iostream>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        bool ans = true;
        int last_p = 0, last_c = 0, d_p, d_c;
        for (int i = 0; i < n; i++)
        {
            int p, c;
            cin >> p >> c;
            d_p = p - last_p;
            d_c = c - last_c;
            if (d_p < 0 || d_c < 0 || d_p < d_c)
                ans = false;
            last_p = p;
            last_c = c;
        }

        (ans) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}