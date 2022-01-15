#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        int ans = INT_MAX;
        
        while(l <= r) {
            int m = l + (r-l)/2;
            
            if(m > 0 && m < nums.size()-1) {
                if (nums[m-1] < nums[m] && nums[m] > nums[m+1]) {
                    ans = nums[m+1];
                    break;
                } else if (nums[m-1] > nums[m] && nums[m] < nums[m+1]) {
                    ans = nums[m];
                    break;
                }
            }
            
            ans = min(ans,min(nums[l],nums[r]));
            ans = min(ans,nums[m]);
            
            if (
                !(nums[l] >= ans && nums[l] <= nums[m])
            ) {
                r = m-1;
            } else {
                l = m+1;
            }
        }
        
        return ans;
    }
};