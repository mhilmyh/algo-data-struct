#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {

        if (numRows == 1)
            return s;

        vector<string> v(numRows);
        bool flag = true;
        int cnt = numRows;

        for (int i = 0; i < s.length(); i++)
        {
            if (flag)
                v[numRows - cnt] += s[i];
            else
                v[cnt] += s[i];
            cnt--;
            if (cnt == 0 && flag && numRows > 2)
            {
                cnt = numRows - 2;
                flag = false;
            }
            else if (cnt == 0)
            {
                cnt = numRows;
                flag = true;
            }
        }

        string ans = "";
        for (int i = 0; i < numRows; i++)
            ans += v[i];
        return ans;
    }
};