#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<int> candidate;
    set<int> choosen;
    int maximum;

    bool isGood(vector<int> &v)
    {
        if (v[0] == 2)
        {
            return v[1] <= 3 && v[2] <= 5 && v[3] <= 9;
        }
        else if (v[0] == 1 || v[0] == 0)
        {
            return v[1] <= 9 && v[2] <= 5 && v[3] <= 9;
        }
        return false;
    }

    int inMinute(vector<int> &v)
    {
        return (v[0] * 10 + v[1]) * 60 + (v[2] * 10 + v[3]);
    }

    void dfs(vector<int> &v)
    {
        if (candidate.size() == 4)
        {
            if (isGood(candidate) && maximum < inMinute(candidate))
            {
                maximum = inMinute(candidate);
            }
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            if (!choosen.count(i))
            {
                candidate.push_back(v[i]);
                choosen.insert(i);
                dfs(v);
                candidate.pop_back();
                choosen.erase(i);
            }
        }
    }

    vector<int> splitValue(int value)
    {
        vector<int> ret(4);

        int hour = value / 60;
        value %= 60;

        ret[0] = hour / 10;
        ret[1] = hour % 10;
        ret[2] = value / 10;
        ret[3] = value % 10;

        return ret;
    }

    string buildAnswer(vector<int> v)
    {
        string ans = "";

        ans += v[0] + '0';
        ans += v[1] + '0';
        ans += ":";
        ans += v[2] + '0';
        ans += v[3] + '0';

        return ans;
    }

public:
    string largestTimeFromDigits(vector<int> &A)
    {
        maximum = INT_MIN;
        dfs(A);
        if (maximum == INT_MIN)
            return "";
        return buildAnswer(splitValue(maximum));
    }
};