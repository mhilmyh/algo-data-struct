#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void findPrevSmallerElement(vector<long> &arr, vector<int> &memo) {
    stack<int> indexs;
    for(int i = 0; i < arr.size(); i++) {
        while(!indexs.empty() && arr[indexs.top()] >= arr[i])
            indexs.pop();
        if(!indexs.empty()) memo[i] = indexs.top();
        indexs.push(i);
    }
}

void findNextSmallerElement(vector<long> &arr, vector<int> &memo) {
    stack<int> indexs;
    for(int i = arr.size() - 1; i >= 0; i--) {
        while(!indexs.empty() && arr[indexs.top()] >= arr[i])
            indexs.pop();
        if(!indexs.empty()) memo[i] = indexs.top();
        indexs.push(i);
    }
}

vector<long> riddle(vector<long> arr) {
    vector<long> window(arr.size()+1, 0), answer;
    // window[0] -> window[n]
    
    vector<int> next_smaller(arr.size()+1, arr.size());
    vector<int> prev_smaller(arr.size()+1, -1);
    
    findNextSmallerElement(arr, next_smaller);
    findPrevSmallerElement(arr, prev_smaller);
    
    int len;
    for(int i = 0; i < arr.size(); i++) {
        len = next_smaller[i] - prev_smaller[i] - 1;
        window[len] = max(window[len], arr[i]);
    }
    
    for(int i = arr.size()-1; i > 0; i--)
        window[i] = max(window[i], window[i+1]);
    
    // for(int i = 1; i <= arr.size(); i++)
    //     answer.push_back(window[i]);

    return window[0];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<long> arr(n);

    for (int i = 0; i < n; i++) {
        long arr_item = stol(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<long> res = riddle(arr);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
