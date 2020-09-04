#include <bits/stdc++.h>
#include <unordered_set>
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

typedef long long int lli;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string str, n;
    map<string, int> mp;
    while(t--) {
        cin >> str >> n;
        if(str[0] == 'D') mp[n]++;
        else cout << mp[n] << "\n";
    }
    return 0;
}