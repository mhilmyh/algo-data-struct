#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool DEBUG = true;

string goodParantheses(string input) {
  stack<char> parantheses;
  string good = "";

  for (int i = 0; i < input.length(); i++) {
    if (input[i] == '(') {
      parantheses.push(input[i]);
    }
    else if (input[i] == ')' && !parantheses.empty()) {
      parantheses.pop();
    }
    else if (input[i] == ')' && parantheses.empty()) {
      input[i] = '-';
    }
  }

  stack<char> revparantheses;
  for (int i = input.length()-1; i >= 0; i--) {
    if (input[i] == ')') {
      revparantheses.push(input[i]);
    }
    else if (input[i] == '(' && !revparantheses.empty()) {
      revparantheses.pop();
    }
    else if (input[i] == '(' && revparantheses.empty()) {
      input[i] = '-';
    }
  }

  // construct answer
  for(int i = 0; i < input.length(); i++) {
    if (input[i] != '-') good += input[i];
  }

  if (DEBUG) cout << "input: " << input << endl;
  
  return good;
}

int main() {
  string input;
  cin >> input;

  cout << goodParantheses(input) << endl;
  return 0;
}
