#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
using namespace std;

typedef long long int lli;
typedef long long unsigned llu;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    llu n, sum;
    bool turn;
    while (t--)
    {
        sum = 0;
        turn = 1;
        cin >> n;
        while (n > 0)
        {
            if (((n / 2) % 2 == 1 || n <= 4) && n % 2 == 0)
            {
                if (turn)
                    sum += n / 2;
                n /= 2;
            }
            else
            {
                if (turn)
                    sum++;
                n--;
            }
            // cout << "--> " << sum << " : " << n << "\n";
            turn = !turn;
        }
        cout << sum << "\n";
    }
    return 0;
}