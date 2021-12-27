#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
      string ans = "";
      vector<pair<int,string>> sym = {
          {1, "I"},
          {4, "IV"},
          {5, "V"},
          {10, "X"},
          {40, "XL"},
          {50, "L"},
          {100, "C"},
          {400, "CD"},
          {500, "D"},
          {1000, "M"},
      };
      
      while (num)
      {
        if (num >= sym.back().first) {
          num -= sym.back().first;
          ans += sym.back().second;
        } else {
          sym.pop_back();
        }
      }
      
      return ans;
    }
};