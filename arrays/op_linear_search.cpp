#include <iostream>

#include "helpers.h"
using namespace std;

int l1(int key, int* arr, int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            // swapping (i)th and (i-1)th element of the array
            // swap(arr[i], arr[i - 1]);
            // return i - 1;

            // or else swap (i)th and (0)th elements
            swap(arr[i], arr[0]);
            return (0);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 6, 7, 8, 2, 4, 7, 2};

    int len = sizeof(arr) / sizeof(arr[0]);
    int a = l1(2, arr, len);
    cout << a << endl;

    return 0;
}
