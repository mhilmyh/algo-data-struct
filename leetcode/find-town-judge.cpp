#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int> out, in;
        int person = -1, cnt = 0;
        
        for (int i = 0; i < trust.size(); i++) {
            out[trust[i][0]]++;
            in[trust[i][1]]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (in[i] == n-1 && out[i] == 0) {
                person = i;
                cnt++;
            }
        }
        
        if (cnt != 1) person = -1;
        
        return person;
    }
};