class Solution {
public:
    int bitwiseComplement(int n) {
        int c = 0, cnt = 0;
        if (n == 0) return 1;
        
        while(n) {
            c = c | (!(n%2) << cnt);
            n = n >> 1;
            cnt++;
        }
        
        return c;
    }
};