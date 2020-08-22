#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string str)
    {
        int i = 0, j = 0;
        int minus = 0;
        bool valid = true;
        for (i = 0; i < str.length(); i++)
            if (str[i] == ' ' && !minus)
                continue;
            else if (str[i] == '-' && !minus)
                minus = -1;
            else if (str[i] == '+' && !minus)
                minus = 1;
            else if (str[i] >= '0' && str[i] <= '9' && !minus)
            {
                minus = 1;
                break;
            }
            else if (str[i] >= '0' && str[i] <= '9')
                break;
            else
                valid = false;

        if (!valid)
            return 0;

        for (j = i; j < str.length(); j++)
            if (str[j] < '0' || str[j] > '9')
                break;

        long long int ans = 0;
        int cnt = j - i;
        if (minus > 0)
        {
            for (int x = i; x < j && x < str.length(); x++)
            {
                ans += str[x] - '0';
                ans = (INT_MAX < ans) ? INT_MAX : ans;
                if (--cnt)
                    ans *= 10;
            }
        }
        else
        {
            for (int x = i; x < j && x < str.length(); x++)
            {
                ans -= str[x] - '0';
                ans = (INT_MIN > ans) ? INT_MIN : ans;
                if (--cnt)
                    ans *= 10;
            }
        }

        return ans;
    }
};