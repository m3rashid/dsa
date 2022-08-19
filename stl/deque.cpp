#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(5);
    dq.push_front(4);
    dq.emplace_front(7);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    // rest are same as vectors
    // begin, end, rbegin, rend, clear, insert, size, swap

    return 0;
}
