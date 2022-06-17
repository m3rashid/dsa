#include <iostream>
using namespace std;

int expo(int base, int exp) {
    if (base == 0 || base == 1) return base;
    if (exp == 0) return 1;
    return base * expo(base, exp - 1);
}

int expoOp(int base, int exp) {
    if (exp == 0) return (1);
    if (exp % 2 == 0) return expoOp(base * base, exp / 2);
    return base * expoOp(base * base, (exp - 1) / 2);
}

int expoLoops(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int expoLoopsOp(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res *= base;
        exp /= 2;
        base *= base;
    }
    return res;
}

int main() {
    cout << expo(2, 5) << endl;
    cout << expoOp(2, 5) << endl;
    cout << expoLoops(2, 5) << endl;
    cout << expoLoopsOp(2, 5) << endl;

    return 0;
}
