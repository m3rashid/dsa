#include "base.h"

void bubble_sort(vector<int> v) {
  int n = v.size();

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[j] < v[i]) swap(&v[j], &v[i]);
    }
  }

  print(v);
}

int main() {
  run_test_cases(bubble_sort);
}
