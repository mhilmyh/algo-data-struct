#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/**
 * Convert Roman to int
M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
-DCCXV 
-DCCXLIV = 744
*/

void printAnswer(int answer) {
  cout << "Nilai integer: " << answer << endl;
}

int convertRomanToInt(string roman) {
  int value = 0;
  int increment;
  for (int i = 0; i < roman.length(); i++) {
    
    if (roman[i] == 'V') increment = 5;
    else if (roman[i] == 'L') increment = 50;
    else if (roman[i] == 'D') increment = 500;

    else if (i != roman.length() && roman[i] == 'I' && roman[i+1] == 'V') {increment = 4; i++;}
    else if (i != roman.length() && roman[i] == 'X' && roman[i+1] == 'L') {increment = 40; i++;}
    else if (i != roman.length() && roman[i] == 'C' && roman[i+1] == 'D') {increment = 400; i++;}
    
    else if (roman[i] == 'I') increment = 1;
    else if (roman[i] == 'X') increment = 10;
    else if (roman[i] == 'C') increment = 100;
    else if (roman[i] == 'M') increment = 1000;

    value += increment;
  }

  return value;
}

int main() {
  string input;
  cin >> input;
  
  int answer = convertRomanToInt(input);
  printAnswer(answer);

  return 0;
}
