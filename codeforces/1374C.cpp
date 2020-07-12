#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int t, n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;

        stack<bool> sl, sr;
        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '(')
                sl.push(true);
            else if (!sl.empty())
                sl.pop();
            else
                l++;
        }
        cout << l << "\n";
    }
    return 0;
}