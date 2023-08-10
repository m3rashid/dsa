#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int dataInt;
    Node *leftNode;
    Node *rightNode;

    Node(int data = 0, Node *left = NULL, Node *right = NULL) {
        dataInt = data;
        leftNode = left;
        rightNode = right;
    }
};

class BinaryTree {
   public:
    Node *rootNode;

    BinaryTree() {
        Node *n = new Node();
        rootNode = n;
    }

    BinaryTree(Node *root) {
        rootNode = root;
    }

    void arrayToBinaryTree(vector<int> arr, int n, Node *root) {
        // for(int i=1; i<=n; i++){
        //     Node *n = new Node(arr[i]);
        // }
        static int i = 1;

        root->leftNode = new Node(arr[(2 * i)]);
        root->rightNode = new Node(arr[(2 * i) + 1]);

        vector<int> forLeft;
        vector<int> forRight;

        // arrayToBinaryTree(copy(arr.begin(), arr.begin(), forLeft.begin()), n, root->leftNode);
        // arrayToBinaryTree(copy(arr.begin(), arr.begin(), forLeft.begin()), n, root->rightNode);
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 54, 34};
    vector<int> result = {};

    for (auto x : arr) cout << x << " ";
    cout << endl;
    cout << endl;

    auto starting = arr.begin() + 1;
    auto ending = arr.begin() + 3;

    copy(starting, ending, result.begin());

    for (auto x : arr) cout << x << " ";
    cout << endl;
    for (auto y : result) cout << y << " ";
    cout << endl;

    return 0;
}
