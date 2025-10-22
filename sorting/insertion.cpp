#include "base.h"

void insertion_sort(vector<int> v) {
  int n = v.size();

  int i = 1, j = 1;
  while (i < n && j < n) {
    if (v[j - 1] < v[j]) {
      i++;
      j = i;
    } else {
      swap(&v[j - 1], &v[j]);
      j--;
    }
  }

  print(v);
}

int main() {
  run_test_cases(insertion_sort);
}
