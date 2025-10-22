#include "base.h"

void merge(vector<int>& v, int start, int mid, int end) {
  // mark the boundaries for the two vectors
  int n1 = mid - start + 1;
  int n2 = end - mid;

  // populate both the left and right vectors
  vector<int> L(n1), R(n2);
  for (int i = 0; i < n1; i++) L[i] = v[start + i];
  for (int j = 0; j < n2; j++) R[j] = v[mid + 1 + j];

  //  merge the vectors
  int i = 0, j = 0;
  int k = start;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      v[k++] = L[i++];
    } else {
      v[k++] = R[j++];
    }
  }

  // fill the remaining elements separately
  while (i < n1) v[k++] = L[i++];
  while (j < n2) v[k++] = R[j++];
}

void ms(vector<int>& v, int start, int end) {
  if (start < end) {
    int mid = start + (end - start) / 2;
    ms(v, start, mid);
    ms(v, mid + 1, end);
    merge(v, start, mid, end);
  }
}

void merge_sort(vector<int> v) {
  int n = v.size();
  ms(v, 0, n - 1);

  print(v);
}

int main() {
  run_test_cases(merge_sort);
}
