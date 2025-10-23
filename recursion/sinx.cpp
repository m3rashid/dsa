#include <math.h>

#include <iostream>
using namespace std;

float sin(int x, int n) {
  static float s = 1.00;
  float p = (2 * n) - 1;
  if (n == 1)
    return x * s;
  else {
    s = 1 - (pow(x, 2) / (p * (p - 1))) * s;
    return sin(x, n - 1);
  }
}

int main() {
  cout << sin(30, 5) << endl;
  return 0;
}
