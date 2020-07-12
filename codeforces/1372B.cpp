#include <iostream>
#include <vector>
#define SIZE 1001000
using namespace std;

vector<int> vp;

void sieve()
{
    bool p[SIZE] = {0};
    for (int i = 2; i < SIZE; i++)
    {
        if (!p[i])
        {
            vp.push_back(i);
            for (int j = i + i; j < SIZE; j += i)
                p[i] = 1;
        }
    }
}

int main()
{
    sieve();

    int t, n;
    bool flag;
    cin >> t;
    while (t--)
    {
        flag = false;
        cin >> n;
        for (int i = 0; i < vp.size(); i++)
        {
            if (n % vp[i] == 0)
            {
                cout << n / vp[i] << " " << n - n / vp[i] << "\n";
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << 1 << " " << n - 1 << "\n";
        }
    }
    return 0;
}