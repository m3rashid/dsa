#include <bits/stdc++.h>
using namespace std;

int main() {
    // multiset similar to set but does not obey the UNIQUE property
    // stores the element in sorted order

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(4);

    ms.erase(1);          // erases all occurances of 1
    int c = ms.count(1);  // number of 1 in the multiset

    // erases the first occurance
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(1) + 2);

    return 0;
}
