#include <iostream>
using namespace std;

float e(float x, int n) {
  static float p = 1, f = 1;
  float r;
  if (n == 0) {
    return (1);
  } else {
    r = e(x, n - 1);
    p *= x;
    f *= n;
    return r + (p / f);
  }
}

float eMul(float x, int n) {
  float res = 1.00;
  for (; n > 0; n--) {
    res = 1 + res * (x / n);
  }
  return res;
}

int main() {
  cout << e(1, 10) << endl;
  cout << eMul(1, 10) << endl;

  return 0;
}
