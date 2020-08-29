#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isCapt(char chr)
    {
        return 'A' <= chr && chr <= 'Z';
    }

public:
    bool detectCapitalUse(string word)
    {
        int cntCapt = 0;
        for (int i = 0; i < word.length(); i++)
        {
            if (isCapt(word[i]))
            {
                cntCapt++;
            }
        }

        if ((cntCapt == 1 && isCapt(word[0])) || cntCapt == word.length() || cntCapt == 0)
        {
            return true;
        }
        else
            return false;
    }
};