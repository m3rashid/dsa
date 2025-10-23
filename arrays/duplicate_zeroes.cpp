#include <bits/stdc++.h>
using namespace std;

void duplicateZeros(vector<int>& arr) {
  for (auto i = arr.begin(); i < arr.end(); i++) {
    if (*i == 0) {
      arr.insert(i + 1, 0);
    }
  }
}

int main() {
  vector<int> v;
  int b;
  cin >> b;
  while (cin) {
    v.push_back(b);
    cin >> b;
  }
  duplicateZeros(v);
  for (auto x : v) cout << x << " ";

  return 0;
}
