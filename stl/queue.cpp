#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    // similar to stack but it is FIFO (first in first out)

    q.push(5);
    q.emplace(6);

    q.back();   // last inserted element
    q.front();  // first inserted element
    q.pop();    // pops out first inserted element

    // all operations are same as stack
    // all operations happen in constant time O(1)

    return 0;
}
