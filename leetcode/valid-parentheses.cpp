#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        map<char, char> match = {
            {'(',')'},
            {'[',']'},
            {'{','}'},
        };
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') p.push(s[i]);
            else if (p.size() > 0 && match[p.top()] == s[i]) p.pop();
            else return false;
        }
        
        return p.size() == 0;
    }
};
