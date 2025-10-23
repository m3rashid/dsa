#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n - 1);
}

int factorialLoop(int n) {
  int res = 1;
  for (int i = 0; i < n; i++) {
    res *= (i + 1);
  }
  return res;
}

int main() {
  cout << factorial(5) << endl;
  cout << factorialLoop(5) << endl;

  return 0;
}
