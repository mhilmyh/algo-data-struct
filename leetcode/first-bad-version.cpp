// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

bool isBadVersion(int version) {
  return true;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        int m = 0;
        int ans = 1;
        bool bad;
        
        while(l <= r) {
            m = l + (r-l)/2;
            bad = isBadVersion(m);
            if (bad) {
                ans = m;
                r = m-1;
            } else {
                l = m+1;
            }
        }
        return ans;
    }
};