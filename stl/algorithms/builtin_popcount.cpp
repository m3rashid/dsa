#include <bits/stdc++.h>
using namespace std;

int main() {
    // returns how many set bits are there in the given number

    int num = 7;
    // for integers
    int cnt = __builtin_popcount(num);

    // for long long ints
    long long int n = 123;
    int ccc = __builtin_popcountll(n);

    return 0;
}
