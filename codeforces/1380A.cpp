#include <iostream>
#include <algorithm>
#define SIZE 1001
using namespace std;
int p[SIZE];
int pmn[SIZE];
int pmx[SIZE];
int main()
{
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> p[i];

        int mn = p[0];
        pmn[0] = 0;
        for (int i = 1; i < n; i++)
        {
            if (mn > p[i])
            {
                pmn[i] = i;
                mn = p[i];
            }
            else
            {
                pmn[i] = pmn[i - 1];
            }
        }

        int mx = p[n - 1];
        pmx[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (mx > p[i])
            {
                pmx[i] = i;
                mx = p[i];
            }
            else
            {
                pmx[i] = pmx[i + 1];
            }
        }

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            // cout << pmn[i] << " " << i << " " << pmx[i] << "--\n";
            // cout << p[pmn[i]] << " " << p[i] << " " << p[pmx[i]] << "--\n";
            if (p[pmn[i]] < p[i] && p[i] > p[pmx[i]])
            {
                cout << "YES\n";
                cout << pmn[i] + 1 << " " << i + 1 << " " << pmx[i] + 1 << "\n";
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "NO\n";
    }
    return 0;
}