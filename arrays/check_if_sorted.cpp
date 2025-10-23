#include <iostream>
using namespace std;

bool isSorted(int* arr, int len, bool isIncreasing = true) {
  if (isIncreasing) {
    for (int i = 0; i < len - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        return false;
      }
    }
  } else {
    for (int i = 0; i < len - 1; i++) {
      if (arr[i] < arr[i + 1]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int rev[] = {6, 5, 4, 3, 2, 1};

  int len = sizeof(arr) / sizeof(arr[0]);
  int rev_len = sizeof(rev) / sizeof(rev[0]);

  string res = isSorted(arr, len) ? "Array one Sorted" : "Array one Not Sorted";
  string rev_res = isSorted(rev, rev_len, false) ? "Array two sorted" : "Array two not sorted";

  cout << res << endl;
  cout << rev_res << endl;
  return 0;
}
