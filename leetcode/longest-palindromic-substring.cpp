#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    string str;
public:
    bool isPalindrome(int i, int j) {
        if (i < 0 || j >= str.length()) return false;
        while(i <= j) {
            if (str[i] != str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        str = s;
        int i, j;
        bool p = false;
        for(i = s.length(); i > 0 && !p; i--) {
            for(j = 0; i+j <= s.length() && !p; j++) {
                p = isPalindrome(j,j+i-1);
                if (p) j--;
            }
            if (p) i++;
        }
        string ans = "";
        i = j+i-1;
        while(j <= i) ans += s[j++];
        return ans;
    }
};