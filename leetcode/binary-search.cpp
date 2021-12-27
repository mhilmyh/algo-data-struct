#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int l = 0;
        int r = nums.size()-1;
        int m;
        while(l<=r){
            m = l + (r-l)/2;
            // cout << nums[m] << endl;
            if (nums[m] == target) {
              ans = m;
              break;
            } else if (nums[m] < target) {
              l = m+1;
            } else {
              r = m-1;
            }
        }
        return ans;
    }
};