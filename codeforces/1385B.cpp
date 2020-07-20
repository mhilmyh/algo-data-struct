#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    set<int> s;
    vector<int> v;
    int t, n, a;
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a;
            if (!s.count(a))
                v.push_back(a);
            s.insert(a);
        }
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " \n"[i == v.size() - 1];
        v.clear();
        s.clear();
    }
    return 0;
}