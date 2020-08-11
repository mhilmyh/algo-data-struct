#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string a, mx, mn;
        bool gt = false;

        cin >> a;
        for (int i=0; i<n; i++) {
            if (gt) {
                mx += "0";
                mn += a[i];
            }
            else {
                if (a[i] != '1') {
                    mx += ((a[i] - '0')/2) + '0';
                    mn += ((a[i] - '0')/2) + '0';
                }
                else {
                    mx += "1";
                    mn += "0";
                    gt = true;
                }
            }
        }

        cout << mx << "\n" << mn << "\n";
    }
    return 0;
}