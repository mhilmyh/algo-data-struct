#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {

}

int main() {
  int a;
  map<int, bool> x;
  for(int i = 1; i <= 100; i++) x[i] = true;

  while (cin >> a) {
    x[a] = false;
  }

  for(int i = 1; i <= 10; i++) {
    if(x[i]) {
      cout << "i: " << i << "\n";
      return 0;
    }
  }
  
  return 0;
}
