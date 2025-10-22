#include "base.h"

int partition(vector<int>& v, int start, int end) {
  int n = end - start;

  int i = start - 1;
  int j = start;

  int pivot = v[end];
  for (int j = start; j <= end; j++) {
    if (v[j] < pivot) {
      i++;
      swap(&v[i], &v[j]);
    }
  }

  swap(&v[i + 1], &v[end]);  // swap pivot with i+1 -> correct position of pivot
  return i + 1;
}

void quick_sort_helper(vector<int>& v, int start, int end) {
  if (start < end) {
    int p = partition(v, start, end);

    quick_sort_helper(v, start, p - 1);
    quick_sort_helper(v, p + 1, end);
  }
}

void quick_sort(vector<int> v) {
  int n = v.size();
  quick_sort_helper(v, 0, n - 1);

  print(v);
}

int main() {
  run_test_cases(quick_sort);
}
