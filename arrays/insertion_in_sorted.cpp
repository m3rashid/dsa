#include <iostream>

#include "helpers.h"

using namespace std;

void push(int el, int* arr, int len) {
  int i = len - 1;
  while (arr[i] > el) {
    arr[i + 1] = arr[i];
    i--;
  }
  arr[i + 1] = el;
}

int main() {
  int arr[7] = {1, 2, 3, 4, 5, 6, 8};
  int len = sizeof(arr) / sizeof(arr[0]);
  int el = 7;

  print(arr, len);
  push(el, arr, len);
  print(arr, len);

  return 0;
}
