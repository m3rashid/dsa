#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
  cout << "------" << endl;
  for (int& x : v) cout << x << " ";
  cout << endl;
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

vector<vector<int>> test_cases{
    {},
    {-1},
    {1},
    {0},
    {1, 4, 6, 7, 8, 2, 3, 46, 53, 213, 11},
    {-123, 234, 123, 12, 34, 123, 41, 234, 1, 23, 41, 234, 0, 0, 0, 0, -23, 234}};

void run_test_cases(void func(vector<int> v)) {
  int n = test_cases.size();
  for (int i = 0; i < n; i++) func(test_cases[i]);
}

#endif
