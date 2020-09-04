#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a = 0, b = 0;
        int i = 0, j = n-1;
        vector<int> c(n);
        for(int k = 0; k < n; k++)
            cin >> c[k];

        int now = 0, sum = 0, move = 0;
        bool turn = false;
        while(i <= j) {
            if(sum > now) {
                if(!turn) a += sum;
                else b += sum;

                turn = !turn;
                now = sum;
                sum = 0;
                move++;
            }

            if(!turn) {
                sum += c[i++];
            } else {
                sum += c[j--];
            }
        }
        
        if(!turn) a += sum;
        else b += sum;

        cout << move + 1 << " " << a << " " << b << "\n";
    }
    return 0;
}