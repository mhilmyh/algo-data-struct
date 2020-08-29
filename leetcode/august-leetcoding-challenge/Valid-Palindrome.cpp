#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isLowerCase(char chr)
    {
        return 'a' <= chr && chr <= 'z';
    }
    bool isUpperCase(char chr)
    {
        return 'A' <= chr && chr <= 'Z';
    }
    bool isAlphabet(char chr)
    {
        return isLowerCase(chr) || isUpperCase(chr);
    }
    bool isNumeric(char chr)
    {
        return '0' <= chr && chr <= '9';
    }
    string sanitizer(string s)
    {
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (isAlphabet(s[i]) || isNumeric(s[i]))
            {
                ans += s[i];
            }
        }
        return ans;
    }

public:
    bool isPalindrome(string s)
    {
        s = sanitizer(s);
        for (int i = 0; i < s.length(); i++)
        {
            if (tolower(s[i]) == tolower(s[s.length() - i - 1]))
                continue;
            else
                return false;
        }
        return true;
    }
};