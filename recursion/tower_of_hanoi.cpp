#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C) {
  static int i = 1;

  if (n > 0) {
    TOH(n - 1, A, C, B);
    cout << i++ << ": Move from " << A << " to " << C << endl;
    TOH(n - 1, B, A, C);
  }
}

int main() {
  TOH(5, 'A', 'B', 'C');
  return 0;
}
