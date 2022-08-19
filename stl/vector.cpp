#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector of integers
    vector<int> v;               // vector of integers
    vector<pair<int, int>> vec;  // vector of pair of integers

    v.push_back(2);     // adds 2 at the end to the vector
    v.emplace_back(3);  // same as push_back but faster

    /**
     * push_back requires to have a pair of numbers in curly braces
     * but emplace_back doesnt require to do so, it does it automatically, if two numbers are given
     * */
    vec.push_back({1, 3});
    vec.emplace_back(2, 4);

    /*
     * Syntax
     * vector<int> name(size, default_value);
     * even if the size of a vector is pre-defined,
     * it is dynamic in nature and increases automatically
     */
    vector<int> v1(5, 100);  // {100, 100, 100, 100, 100}
    vector<int> v2(v1);      // another copy of v1 (different memory address)

    // iterators
    /**
     * Syntax
     * datatype::iterator name = pointer
     * returns a pointer pointing to that specified memory location
     *
     * available: begin(), end(), rbegin(), rend()
     * begin() points to the first element
     * end() points to the address past the last one
     * rbegin() points to first element from right (back)
     * rend() points to the element before first
     */
    vector<int>::iterator it = v1.begin();

    // accessing elements
    cout << v1[0];     // via index (array style)
    cout << v1.at(0);  // via at() method
    cout << *it;       // via iterator
    cout << v.back();  // gives last element

    // deleting elements
    vector<int> s = {1, 2, 3, 4, 5, 6};
    s.erase(s.begin() + 1);  // removes v1[1] element, new vector = { 1, 3, 4, 5, 6 }

    /**
     * 1st param: iterator pointing to the starting position to delete
     * 2nd param: iterator pointing to past the last position to delete
     */
    s.erase(s.begin() + 1, s.begin() + 3);  // removes 3 and 4, new vector = { 1, 5, 6 }

    // inserting elements
    v.insert(v.begin(), 300);       // inserts 300 in v[0] position, new vector = { 300, 1, 5, 6 }
    v.insert(v.begin() + 1, 2, 5);  // inserts two 5's from the specified iterator, new vector = { 300, 5, 5, 1, 5, 6 }

    vector<int> copy(2, 6);
    v.insert(v.begin(), copy.begin(), copy.end());  // inserts copy vector to v, from the starting address, new vector = { 6, 6, 300, 5, 5, 1, 5, 6 }

    v.size();      // number of elements in the vector
    v.pop_back();  // pops out the last element
    v.clear();     // erases all elements
    v.empty();     // returns true if the vector is empty
    v1.swap(v2);   // swaps the vector

    return 0;
}
