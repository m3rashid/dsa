#include <iostream>

#include "helpers.h"
using namespace std;

int *merge(int *arr1, int len1, int *arr2, int len2) {
    int len = len1 + len2;
    int *arr = new int[len];

    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }
    for (; i < len1; i++) {
        arr[k++] = arr1[i];
    }
    for (; j < len2; j++) {
        arr[k++] = arr2[j];
    }

    return arr;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    int *merged = merge(arr1, len1, arr2, len2);
    int len_merged = len1 + len2;

    print(merged, len_merged);

    return 0;
}
