#include <bits/stdc++.h>
using namespace std;

int main() {
    // internal implementation -> tree

    // max heap
    priority_queue<int> pq;
    // max element stays at the top

    pq.push(5);  // O(log(n))
    pq.emplace(6);
    pq.emplace(3);
    pq.emplace(10);
    pq.emplace(1);

    pq.top();  // O(1)   prints 10
    pq.pop();  // O(log(n))   pops out the top element

    // min heap
    // minimum priority queue (so that top element is the smallest)
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.emplace(6);
    pq2.emplace(3);
    pq2.emplace(10);
    pq2.emplace(1);
    pq2.top();  // 1 (min element)

    return 0;
}
