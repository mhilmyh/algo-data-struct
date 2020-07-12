#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int T;
    string t;

    cin >> T;
    while (T--)
    {
        cin >> t;
        bool one = false, zero = false;
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '1')
                one = true;
            else
                zero = true;
        }

        if (one && zero)
        {
            for (int i = 0; i < 2 * t.length(); i++)
                cout << "01"[i % 2];
        }
        else if (one)
        {
            for (int i = 0; i < 2 * t.length(); i++)
                cout << "1";
        }
        else
        {
            for (int i = 0; i < 2 * t.length(); i++)
                cout << "0";
        }
        cout << "\n";
    }
}