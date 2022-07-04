#ifndef HELPERS_H
#define HELPERS_H

#include <iostream>

void print(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;
}

void swap(int* num1, int* num2) {
    int a = *num1;
    *num1 = *num2;
    *num2 = a;
}

struct IminMax {
    int max;
    int min;
};

IminMax minMax(int* arr, int len) {
    IminMax val;
    val.max = arr[0];
    val.min = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] > val.max) {
            val.max = arr[i];
        }
        if (arr[i] < val.min) {
            val.min = arr[i];
        }
    }
    return val;
}

#endif
