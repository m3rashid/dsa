#include <iostream>
using namespace std;

int linearSearch(int key, int* arr, int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 6, 7, 8, 2, 4, 7, 2};

    int len = sizeof(arr) / sizeof(arr[0]);
    int index_5 = linearSearch(5, arr, len);

    cout << index_5 << endl;

    return 0;
}
