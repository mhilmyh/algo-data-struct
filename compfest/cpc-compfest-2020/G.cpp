#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

typedef long long int lli;
typedef long long unsigned llu;

int N;


bool solve(vector<int> &origin) {
    vector<int> sorted = origin, good, remain;
    sort(sorted.begin(), sorted.end());

    bool flag = true;

    int index = 0;
    for(int i = 0; i < origin.size(); i++) {
        if(origin[i] == sorted[index]) {
            good.push_back(origin[i]);
            index++;
        }
        else
            remain.push_back(origin[i]);
    }

    for(int i = remain.size() - 1; i >= 0; i--) {
        if(sorted[index] != remain[i]) {
            flag &= false;
            break;
        } else index++;
    }

    if(flag) return true;

    good.clear();
    remain.clear();
    index = origin.size() - 1;

    for(int i = 0; i < origin.size(); i--) {
        if(origin[i] == sorted[index]) {
            good.push_back(origin[i]);
            index--;
        } else {
            remain.push_back(origin[i]);
        }
    }

    for(int i = remain.size() - 1; i >= 0; i--) {
        if(sorted[index] != remain[i]) {
            flag &= false;
            break;
        } else index--;
    }

    return flag;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    vector<int> H(N);
    for(int i=0; i<N; i++) {
        cin >> H[i];
    }
    if(solve(H)) {
        cout << "Ya\n";
    } else {
        cout << "No\n";
    }
    return 0;
}