#include <iostream>

#include "helpers.h"
using namespace std;

int bin_search(int key, int* arr, int len) {
    int low = 0;
    int high = len;
    int mid = (low + high) / 2;

    while (low < high) {
        if (key < arr[mid]) {
            high = mid;
        } else if (key > arr[mid]) {
            low = mid;
        } else {
            return mid;
        }
        mid = (low + high) / 2;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 56, 78, 90, 112, 234};
    int len = sizeof(arr) / sizeof(arr[0]);

    int a;
    while (1) {
        cout << "enter key: ";
        cin >> a;
        int res = bin_search(a, arr, len);
        cout << res << endl;
    }

    return 0;
}
