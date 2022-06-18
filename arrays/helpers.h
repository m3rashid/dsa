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

#endif
