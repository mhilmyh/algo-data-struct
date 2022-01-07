#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x) {
            if (x > 0 && ans > (INT_MAX - (x % 10)) / 10) return 0;
            if (x < 0 && ans < (INT_MIN - (x % 10)) / 10) return 0;
            ans *= 10;
            ans += x % 10;
            x /= 10;
        }
        return ans;
    }
};