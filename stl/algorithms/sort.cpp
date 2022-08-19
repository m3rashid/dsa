#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> f;

    // sort (starting iterator, past_end iterator)
    //  sorts in increasing order
    sort(f.begin(), f.end());

    // sorts in decreasing order
    sort(f.begin(), f.end(), greater<int>);

    // sort in custom order
    // vector<pair<int, int>>
    // example {4, 1}, {2, 1}, {1, 2}, sort this in
    // increasing second element,
    // if second element is same, sort according to first element in decreasing order
    vector<pair<int, int>> v = {{4, 1}, {2, 1}, {1, 2}};

    sort(v.begin(), v.end() /*, comparator */);  // this is a boolean comparator function, can be written as lambda or standalone function

    sort(v.begin(), v.end(), [](pair<int, int> pair1, pair<int, int> pair2) {
        // assumption: pair1 lies before pair2
        // true means maintain the order
        //  false means swap the elements
        if (pair1.second < pair2.second) return true;
        if (pair1.second > pair2.second) return false;
        if (pair1.first > pair2.first) return true;
        return false;
    });

    return 0;
}
