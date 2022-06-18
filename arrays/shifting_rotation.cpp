#include <iostream>

#include "helpers.h"
using namespace std;

void left_shift_arr(int* arr, int len) {
    for (int i = 1; i < len; i++) {
        swap(arr[i], arr[i - 1]);
    }
    arr[len - 1] = 0;
}

void right_shift_arr(int* arr, int len) {
    for (int i = len - 2; i >= 0; i--) {
        swap(arr[i + 1], arr[i]);
    }
    arr[0] = 0;
}

void left_rotate(int* arr, int len) {
    for (int i = 1; i < len; i++) {
        swap(arr[i], arr[i - 1]);
    }
}

void right_rotate(int* arr, int len) {
    for (int i = len - 2; i >= 0; i--) {
        swap(arr[i + 1], arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    print(arr, len);

    left_shift_arr(arr, len);
    print(arr, len);

    right_shift_arr(arr, len);
    print(arr, len);

    right_rotate(arr, len);
    print(arr, len);

    left_rotate(arr, len);
    print(arr, len);

    return 0;
}
