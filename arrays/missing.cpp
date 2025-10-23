#include <iostream>

#include "helpers.h"
using namespace std;

// sorted array
void printMissing(int* arr, int len) {
  int diff = arr[0];
  for (int i = 0; i < len; i++) {
    if (arr[i] - i != diff) {
      cout << i + diff << " is missing" << endl;
      diff++;
    }
  }
}

// unsorted array
void printMissingUnsorted(int* arr, int len) {
  IminMax minMaxNum = minMax(arr, len);

  int arr2[minMaxNum.max] = {0};
  int min = minMaxNum.min;

  for (int i = 0; i < len; i++) {
    arr2[arr[i]] = arr[i];
  }
  for (int i = min; i < minMaxNum.max; i++) {
    if (arr2[i] == 0) {
      cout << i << " is missing" << endl;
    }
  }
}

int main() {
  int arr[] = {2, 3, 4, 5, 6, 7, 9, 11, 12, 13, 15};
  int len = sizeof(arr) / sizeof(arr[0]);
  // printMissing(arr, len);

  int unsortedArr[] = {3, 5, 2, 7, 4, 1};
  int len2 = sizeof(unsortedArr) / sizeof(unsortedArr[0]);

  printMissingUnsorted(unsortedArr, len2);

  return 0;
}
