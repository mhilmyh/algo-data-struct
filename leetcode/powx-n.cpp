#include <bits/stdc++.h>
using namespace std;

class Solution {
public:    
    double myPow(double x, int n) {
        
        if (n < 0) return 1 / solve(x, abs(n));
        return solve(x, n);
    }
    
    double solve(double x, int n) {
        if (n == 0) return 1;
        
        double p = myPow(x, n/2);
        p *= p;
        
        if (n % 2) p *= x;
        
        return p;
    }
};