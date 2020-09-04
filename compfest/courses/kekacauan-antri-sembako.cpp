#include <bits/stdc++.h>
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

typedef long long int lli;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q, C;
    string str;
    cin >> Q;
    list<string> q;
    while(Q--) {
        cin >> C;
        switch (C)
        {
        case 1:
            cin >> str;
            q.pf(str);
            break;
        case 2:
            cin >> str;
            q.pb(str);
            break;
        case 3:
            cout << q.front() << "\n";
            q.pof();
            break;
        case 4:
            cout << q.back() << "\n";
            q.pob();
            break;
        default:
            break;
        }
    }

    return 0;
}