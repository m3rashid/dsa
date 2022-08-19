#include <bits/stdc++.h>
using namespace std;

int main() {
    // want to have all the permutations of this string
    string s = "12345";

    sort(s.begin(), s.end());
    // why this sort step is necessary ?
    // next_permutation gives the results in a dictionary order, and if the given string is not sorted, it will not give all the permutations
    // because some valid permutations would be before that string (if unsorted)
    // things go out of hand when the string is sorted in reverse. In this case, there are no orders left, if seen in dictionary fashion, due to the reverse sort (lexicographially decreasing order)
    // if no more permutations, it returns NULL

    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
