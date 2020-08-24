// **Level 2** operator (+, -, *, /)
// “10+2*3-2+2/2” = 15
//  +10, +2, +3, -2, +2, +2
//  +, (*), -, +, (/)
//  0, 1, 2, 3, 4
// “ 10 + (2 * 3)- 2 + (2 / 2) ”
//  +10, +6, +6, -2, +1, +1,
//  +, (*), -, +, (/)

//  10, 6, 2, 1
//  +, -, +,

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

bool isNum(char x)
{
    return x >= '0' && x <= '9';
}

bool isOperator(char x)
{
    return x == '-' || x == '+' || x == '*' || x == '/';
}

int main()
{
    lli num = 0;
    string str;
    cin >> str;

    vector<char> op;
    vector<char> op2; // + dan -
    vector<lli> value, del;
    set<int> dont;

    for (int i = 0; i < str.length(); i++)
    {
        if (isNum(str[i]))
        {
            num *= 10;
            num += (lli)(str[i] - '0');
        }
        else if (isOperator(str[i]))
        {
            value.push_back(num);
            num = 0;
            op.push_back(str[i]);
        }
    }

    if (num != 0)
        value.push_back(num);

    // for (auto x : op)
    //     cout << x << ",";
    // cout << "\n";

    // kali dan bagi
    for (int i = 0; i < op.size(); i++)
    {
        if (op[i] == '*')
        {
            // i, i + 1
            lli a = value[i];
            lli b = value[i + 1];
            value[i] = a * b;
            value[i + 1] = a * b;
            del.push_back(value[i]);
            dont.insert(i + 1);
        }
        else if (op[i] == '/')
        {
            lli a = value[i];
            lli b = value[i + 1];
            value[i] = a / b;
            value[i + 1] = a / b;
            del.push_back(value[i]);
            dont.insert(i + 1);
        }
        else
        {
            op2.push_back(op[i]);
            if (!dont.count(i))
                del.push_back(value[i]);
        }
    }

    if (!dont.count(op.size()) && value.size() > op.size())
        del.push_back(value.back());

    // for (auto x : del)
    //     cout << x << ",";
    // cout << "\n";

    lli sum = 0;
    for (int i = 0; i < op2.size(); i++)
    {
        if (i == 0)
        {
            if (op2[i] == '+')
                sum = del[i] + del[i + 1];
            else if (op2[i] == '-')
                sum = del[i] - del[i + 1];
        }
        else if (op2[i] == '+')
            sum += del[i + 1];
        else if (op2[i] == '-')
            sum -= del[i + 1];
    }
    // for (auto x : op2)
    //     cout << x << ",";
    // cout << "\n";

    // for (auto x : del)
    //     cout << x << ",";
    // cout << "\n";

    cout << sum << "\n";
    return 0;
}