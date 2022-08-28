#include <bits/stdc++.h>
using namespace std;

void solve() {
    int numRows;
    cin >> numRows;

    vector<string> v;
    for (int i = 0; i < numRows; i++) {
        v.push_back(to_string(pow(11, i)));
    }

    vector<vector<int>> res;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < i + 1; j++) {
            res[i].push_back(v[i][j] - '0');
        }
    }

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

void convert_to_arr(int num) {
    vector<int> v;

    while (num > 0) {
        v.push_back(num % 10);
        num /= 10;
    }
    reverse(v.begin(), v.end());

    for (auto x : v) {
        cout << x << " ";
    }
}

int main() {
    // int test_cases;
    // cin >> test_cases;
    // while (test_cases--) {
    // solve();
    // }

    int num = 123;
    convert_to_arr(num);
    return 0;
}