#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void reverse_arr(int* arr, int len) {
    int low = 0, high = len - 1;
    while (low < high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void print(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    print(arr, len);

    reverse_arr(arr, len);
    print(arr, len);

    return 0;
}
