#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;

  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];
  
  int cnt = 0, smaller = 0, greater = 0;
  for(int i = 1; i < n-1; i++) {
    smaller = 0;
    greater = 0;

    for(int j = i+1; j < n; j++) if(a[i] > a[j]) smaller++;
    for(int j = i-1; j >= 0; j--) if(a[i] < a[j]) greater++;

    cnt += smaller * greater;
  }

  cout << cnt << endl;
  return 0;
}
