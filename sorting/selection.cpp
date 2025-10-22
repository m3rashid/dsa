#include "base.h"

void selection_sort(vector<int> v) {
  int n = v.size();

  int pos = 0;
  for (int i = 0; i < n; i++) {
    // find the min element
    int min_el_idx = i;
    for (int j = pos; j < n; j++) {
      if (v[j] < v[min_el_idx]) min_el_idx = j;
    }

    // swap the min element with element at pos;
    swap(&v[min_el_idx], &v[pos]);
    pos++;
  }

  print(v);
}

int main() {
  run_test_cases(selection_sort);
}
