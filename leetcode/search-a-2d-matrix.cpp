#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = searchVertical(matrix, target);        
        if (row == -1) return false;
        
        int col = searchHorizontal(matrix[row], target);
        return col != -1;
    }
    
    int searchVertical(vector<vector<int>>& arr, int x) {
        int l = 0;
        int r = arr.size()-1;
        while(l <= r) {
            int m = l + (r-l) / 2;
            if (m < arr.size()-1 && x >= arr[m][0] && x < arr[m+1][0] ) {
                return m;
            } else if (m == arr.size()-1 && x >= arr[m][0] && x <= arr[m][arr[m].size()-1]) {
                return m;
            }
            
            if (x > arr[m][0]) {
                l = m+1;
            } else {
                r = m-1;
            }
        }
        
        return -1;
    }
    
    int searchHorizontal(vector<int>& arr, int x) {
        int l = 0;
        int r = arr.size()-1;
        while(l <= r) {
            int m = l + (r-l) / 2;
            if (x == arr[m]) {
                return m;
            }
            
            if (x > arr[m]) {
                l = m+1;
            } else {
                r = m-1;
            }
        }
        return -1;
    }
};