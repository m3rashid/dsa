#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> m;
    // keys are UNIQUE (sorted order), values can be anything

    // keys/values can be of any data structure
    map<pair<int, int>, int> p;
    map<int, pair<int, int>> q;

    // insertion
    m[3] = 2;
    m.emplace(4, 1);
    m.insert({5, 4});

    m[3];  // if exists, returns the value. If key does not exist, returns 0 or NULL

    auto it = m.find(5);    // gives iterator of the elemtnt, if found
    cout << (*(it)).first;  // returns value at that iterator

    return 0;
}
