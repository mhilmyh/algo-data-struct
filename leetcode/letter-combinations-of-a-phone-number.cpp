#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string digits;
    vector<string> ans;
    vector<string> letters = {"", "", "abc", "def", "ghi", "jkl", "mon", "pqrs", "tuv", "wxyz"};
    
    void backtrack(int pos, string s) {
        if (s.length() == digits.length()) {
            ans.push_back(s);
            return;
        }
        
        for (int i = pos; i < digits.length(); i++) {
            string letter = letters[digits[i]-'0'];
            for (int j = 0; j < letter.length(); j++) {
                backtrack(i+1, s + letter[j]);
            }
        }
    }
        
    vector<string> letterCombinations(string in) {
        if (in.length() == 0) {
            return ans;    
        }
        
        digits = in;
        backtrack(0, "");
        return ans;
    }
};