#include <iostream>

#include "helpers.h"

using namespace std;

void reverse_arr(int* arr, int len) {
  int low = 0, high = len - 1;
  while (low < high) {
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int len = sizeof(arr) / sizeof(arr[0]);
  print(arr, len);

  reverse_arr(arr, len);
  print(arr, len);

  return 0;
}
