#include <iostream>

using namespace std;

struct Ires {
    int number = -1;
    int count = 0;
};

void print(Ires *res, int len) {
    for (int i = 1; i < len; i++) {
        cout << res[i].number << " is repeated " << res[i].count << " times" << endl;
    }
}

Ires *duplicate(int *arr, int len) {
    int resPos = 1;
    Ires *res = new Ires[len];

    for (int i = 0; i < len - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            res[resPos].number = arr[i + 1];
            res[resPos].count = 1;
            int j = i + 1;
            while (arr[j] == arr[i]) {
                res[resPos].count++;
                j++;
            }
            resPos++;
            i = j;
        }
    }
    res[0].count = resPos;
    res[0].number = 0;

    return res;
}

Ires *duplicateUnsorted(int *arr, int len) {
    int resPos = 1;
    Ires *res = new Ires[len + 1];

    for (int i = 0; i < len; i++) {
        if (arr[i] == -1) continue;
        Ires inter;

        for (int j = 0; j < len; j++) {
            if (arr[j] == -1) continue;

            inter.number = arr[i];
            if (arr[i] == arr[j]) {
                if (i != j) arr[j] = -1;
                inter.count++;
            }
        }
        if (inter.count != 1) {
            res[resPos] = inter;
            resPos++;
        }
    }
    res[0].count = resPos;
    res[0].number = 0;

    return res;
}

int main() {
    int arr[] = {2, 3, 3, 4, 5, 6, 6, 6, 6, 7, 9, 11, 12, 13, 13, 13, 13};
    int len = sizeof(arr) / sizeof(arr[0]);

    Ires *res = duplicate(arr, len);
    int count = res[0].count;
    // print(res, count);

    int unsortedArr[] = {3, 5, 2, 2, 3, 4, 4, 5, 6, 5, 5, 5, 7, 4, 1};
    int len2 = sizeof(unsortedArr) / sizeof(unsortedArr[0]);
    Ires *res2 = duplicateUnsorted(unsortedArr, len2);
    int count2 = res2[0].count;
    print(res2, count2);

    return 0;
}
