#include <iostream>
using namespace std;

int fibonacii(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacii(n - 2) + fibonacii(n - 1);
    }
}

int fib(int n) {
    int t0 = 0, t1 = 1, s;
    if (n <= 1) {
        return n;
    }
    for (int i = 2; i <= n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int main() {
    int f = fibonacii(6);
    int g = fib(6);
    cout << f << "   " << g << endl;

    return 0;
}
