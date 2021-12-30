#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int i = 0, j = height.size()-1, tmpi, tmpj;
        
        while(i < height.size() && j >= 0 && i < j) {
            cout << "(" << i << "," << j << ")" << endl;
            ans = max(ans, findArea(height,i,j));
            if (height[i] <= height[j]) {
                tmpi = i;
                while(tmpi < height.size() && tmpi < j && height[tmpi] <= height[i]) tmpi++;
                i = tmpi;
            } else {
                tmpj = j;
                while(tmpj >= 0 && i < tmpj && height[tmpj] <= height[j]) tmpj--;
                j = tmpj;
            }
        }
        
        return ans;
    }
    
    int findArea(vector<int>& height, int x, int y) {
        return min(height[x], height[y]) * abs(x - y);
    }
};