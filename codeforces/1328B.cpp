#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define llu long long unsigned

int main() {

    int t, n, k;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> k;
        std::vector<llu> v(n);
        v[0] = 1;
        for (int i=1; i<n; i++) {
            v[i] = v[i-1] + i-1;
        }
        int pos1 = std::upper_bound(v.begin(), v.end(), k) - v.begin();
        pos1--;
        int pos2 = k - v[pos1];
        std::string ans = "";
        for (int i=0; i<n; i++)
            ans += "a";
        ans[n - pos1 - 1] = ans[n - pos2 -1] = 'b';
        std::cout << ans << "\n";
    }
    return 0;
}