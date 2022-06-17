#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) return n;
    return n + sum(n - 1);
}

int sumLoop(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n;
        n -= 1;
    }
    return sum;
}

int sumFormula(int n) {
    return n * (n + 1) / 2;
}

int main() {
    cout << sum(10) << endl;
    cout << sumLoop(10) << endl;
    cout << sumFormula(10) << endl;

    return 0;
}
