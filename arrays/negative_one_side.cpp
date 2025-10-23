#include <iostream>

#include "helpers.h"
using namespace std;

void negative_one_side(int* arr, int len) {
  int i = 0;
  int j = len - 1;
  while (i < j) {
    while (arr[i] < 0) {
      i++;
    }
    while (arr[j] >= 0) {
      j--;
    }
    if (i < j) {
      swap(arr[i], arr[j]);
    }
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, -1, 12, -21, -43, 12};
  int len = sizeof(arr) / sizeof(arr[0]);

  print(arr, len);
  negative_one_side(arr, len);

  print(arr, len);

  return 0;
}
