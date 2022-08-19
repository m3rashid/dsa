#include <bits/stdc++.h>
using namespace std;

int main() {
    // internal implementation -> tree
    // everything takes O(log(n)) time

    // set stores everything in sorted order
    // elements are all unique

    set<int> s;
    s.insert(4);  // { 4 }
    s.insert(2);  // { 2, 4 }
    s.insert(4);  // { 2, 4 } 4 is not inserted because it already exists

    auto it = s.find(3);  // returns an iterator which points to 3 (if exists) or an iterator which points past the last element (s.end()) (if it does not exists)

    int coutn = s.count(1);  // gives 0 if the element exists or 1 if it doesnt

    // erase over an  interval also works (similar to a vector)
    auto it1 = s.find(2);
    auto it2 = s.find(5);

    s.erase(it1, it2);

    // lower/upper bound functions
    auto it3 = s.lower_bound(3);
    auto it4 = s.upper_bound(4);

    s.erase(5);  // O(log(n))

    return 0;
}
