#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    // follows LIFO (last in first out)
    st.push(5);
    st.push(6);
    st.emplace(6);  // similar to push

    st.top();  // last inserted element
    st.pop();  // pops out the last inserted element
    // all operations are O(1) constant time
    st.empty();  // returns true if stack is empty

    stack<int> st2;
    st.swap(st2);

    return 0;
}
