#include <iostream>
using namespace std;

int* initFib(int n) {
  int* p;
  p = new int[n];
  for (int i = 0; i < n; i++) p[i] = -1;
  return (p);
}

int* F;

int fib(int n) {
  F = initFib(10);
  if (n <= 1) {
    F[n] = n;
    return n;
  } else {
    if (F[n - 2] == -1) F[n - 2] = fib(n - 2);
    if (F[n - 1] == -1) F[n - 1] = fib(n - 1);

    return F[n - 2] + F[n - 1];
  }
}

int main() {
  int s = fib(10);
  cout << s << endl;

  return 0;
}
