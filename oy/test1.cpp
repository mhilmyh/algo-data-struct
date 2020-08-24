// **Level 1** operator (+, -)
// “-3+2” = -1
// “4+7” = 11
// “9-5” = 4
// “4-7+5-3” = -1
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

bool isNum(char x)
{
    return x >= '0' && x <= '9';
}

int main()
{
    string str;
    int sum = 0;
    int num = 0;
    bool neg = false;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '-')
        {
            sum += neg ? num * -1 : num;
            num = 0;
            // cout << "sum: " << sum << "--\n";
            neg = true;
        }
        else if (str[i] == '+')
        {
            sum += neg ? num * -1 : num;
            num = 0;
            // cout << "sum: " << sum << "--\n";
            neg = false;
        }
        else if (isNum(str[i]))
        {
            num *= 10;
            num += (int)(str[i] - '0');
            // cout << "num: " << num << "\tneg:" << neg << "\n";
        }
    }

    sum += neg ? num * -1 : num;
    cout << sum << "\n";
    return 0;
}