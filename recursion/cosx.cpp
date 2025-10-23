#include <math.h>

#include <iostream>
using namespace std;

float cosx(int x, int n) {
  static float s = 1;
  int p = (2 * n) - 1;

  if (n == 1) {
    return (1);
  } else {
    s = 1 - (pow(x, 2) / (p * (p - 1))) * s;
    return cosx(x, n - 1);
  }
}

int main() {
  cout << cosx(10, 10) << endl;
  return 0;
}
