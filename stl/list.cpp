#include <bits/stdc++.h>
using namespace std;

int main() {
    // lists are same as a vector but it gives front operations as well
    // insert in a vector is time heavy (), internal implementation is singly linked list
    // but in a list, internal implementation is doubly linked list

    list<int> ls;
    ls.push_back(4);
    ls.emplace_back(5);

    ls.push_front(4);
    ls.emplace_front(5);

    // all other functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

    return 0;
}
