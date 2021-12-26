#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        map<char,int>mem;
        
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            
            if (mem.find(s[i]) != mem.end()) {
                j = max(mem[s[i]]+1,j);
            }
            
            mem[s[i]]=i;
            cout << "(" << i << "," << j << ")" << endl;
            ans = max(ans,i-j+1);
        }
        
        return ans;
    }
};