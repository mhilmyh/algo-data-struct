#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

typedef long long int lli;
typedef long long unsigned llu;

bool inRange(lli x) {
    return x >= 1 && x <= 5;
}

bool canSpread(lli x, lli y) {
    return x >= y && x <= y*4;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli N, M;
    cin >> N >> M;
    if(inRange(N/M)) {
        lli l = 0, r = N/5;
        lli mn = LLONG_MAX, mx = LLONG_MIN;
        
        // minimum
        l = 0, r = N/5;
        while(l <= r) {
            lli m = (l+r) / 2;
            lli rem = N - 5*m;
            if(canSpread(rem, M-m)) {
                mn = min(mn, m);
                r = m-1;
            } else {
                l = m+1;
            }
        }

        // maximum
        l = 0, r = N/5;
        while(l <= r) {
            lli m = (l+r) / 2;
            lli rem = N - 5*m;
            if(canSpread(rem, M-m)) {
                mx = max(mx, m);
                l = m+1;
            } else {
                r = m-1;
            }
        }

        if(mn != LLONG_MAX && mx != LLONG_MIN) {
            cout << mn << " " << mx << "\n";
        } else {
            cout << "-1 -1\n";
        }

    } else {
        cout << "-1 -1\n";
    }
    return 0;
}