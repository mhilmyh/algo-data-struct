#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool DEBUG = true;

void printAnswer(long sum, int minFound, int maxFound) {
  cout << "minSum: " << sum << " - " << maxFound << " = " << sum - maxFound << endl;
  cout << "maxSum: " << sum << " - " << minFound << " = " << sum - minFound << endl;
}

void findSumMaxAndMin(vector<int> &target) {
  int maxFound = INT_MIN;
  int minFound = INT_MAX;
  long sum = 0;

  for (int i = 0; i < target.size(); i++) {
    minFound = min(minFound, target[i]);
    maxFound = max(maxFound, target[i]);
    sum += target[i];
  }

  printAnswer(sum, minFound, maxFound);
}

void parseInput(string input, vector<int> &target, char delim = ',') {
  string strNumber = "";

  for (int i = 0; i < input.length(); i++ ) {
    if (input[i] == delim) {
      if (DEBUG) cout << "str: " << strNumber << endl;

      if (!strNumber.empty()) {
        target.push_back(stoi(strNumber));
        strNumber = "";
      }
      continue;
    }

    strNumber += input[i];
  }

  // last check
  if (!strNumber.empty()) {
    target.push_back(stoi(strNumber));
    strNumber = "";
  }
}

int main() {
  string input;
  cin >> input;

  vector<int> numbers;
  parseInput(input, numbers);

  findSumMaxAndMin(numbers);

  return 0;
}
