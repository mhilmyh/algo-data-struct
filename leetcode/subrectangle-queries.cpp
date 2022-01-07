#include <bits/stdc++.h>
using namespace std;


class SubrectangleQueries {
public:
    vector<vector<int>> rect;
    vector<vector<int>> h;
    
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rect = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        h.push_back({row1, row2, col1, col2, newValue});
    }
    
    int getValue(int row, int col) {
        for(int i = h.size()-1; i >= 0; i--) {
            if (h[i][0] <= row && row <= h[i][1] && h[i][2] <= col && col <= h[i][3])
                return h[i][4];
        }
        
        return rect[row][col];
    }
};
