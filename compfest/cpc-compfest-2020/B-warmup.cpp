#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

typedef long long int lli;
typedef long long unsigned llu;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,M;
    cin >> N >> M;

    char str[200], x, y[200];
    cin >> str;

    llu val = 0, cnt[26];
    REP(i, 0, 26) cnt[i] = 0;
    REP(i, 0, N) cnt[str[i] - 'A']++;
    REP(i, 0, M) {
        cin >> x >> y;
        val = cnt[x - 'A'];
        cnt[x - 'A'] = 0;
        for(char * p = y; *p != '\0'; p++)
            cnt[*p - 'A'] += val;
    }
    
    llu sum = 0;
    REP(i, 0, 26)
        sum += cnt[i];
    cout << sum << "\n";
    return 0;
}