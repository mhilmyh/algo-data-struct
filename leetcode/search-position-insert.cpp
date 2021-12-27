#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j = nums.size()/2;
        int i = 0;
        while(j) {
            if (i+j >= nums.size() || nums[i+j] > target || j >= nums.size()) 
                j /= 2;
            else 
                i += j;

        }
        
        if (i < nums.size() && nums[i] < target) i++;
        return i;
    }
};