#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<b; i++)
using namespace std;

typedef long long int lli;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string S;
    cin >> N;
    while(N--) {
        cin >> S;
        stack<char> p;
        REP(i, 0, S.length()) {
            if(p.empty()) p.push(S[i]);
            else if(p.top() == '[' && S[i] == ']') p.pop();
            else if(p.top() == '(' && S[i] == ')') p.pop();
            else p.push(S[i]);
        }

        if(p.empty()) cout << "ya\n";
        else cout << "tidak\n";
    }
    return 0;
}