#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* left;
    int value;
    Node* right;
};

Node* newNode(int val) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->value = val;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* insertLevelOrder(int arr[], Node* root, int i, int n) {
    if (i < n) {
        Node* temp = newNode(arr[i]);
        root = temp;

        root->left = insertLevelOrder(arr, root->left, (i * 2) + 1, n);
        root->right = insertLevelOrder(arr, root->right, (i * 2) + 2, n);
    }

    return root;
}

void printPreOrder(Node* root, int level, map<int, vector<int>>& preOrder) {
    if (preOrder.find(level) == preOrder.end()) {
        preOrder.insert(pair<int, vector<int>>(level, {root->value}));
    } else {
        preOrder[level].push_back(root->value);
    }

    if (root->left) printPreOrder(root->left, level + 1, preOrder);
    if (root->right) printPreOrder(root->right, level + 1, preOrder);
}

void printPostOrder(Node* root, int level, map<int, vector<int>>& postOrder) {
    if (postOrder.find(level) == postOrder.end()) {
        postOrder.insert(pair<int, vector<int>>(level, {root->value}));
    } else {
        postOrder[level].push_back(root->value);
    }

    if (root->right) printPostOrder(root->right, level + 1, postOrder);
    if (root->left) printPostOrder(root->left, level + 1, postOrder);
}

void printLevelOrder(Node* root, int level, map<int, vector<int>>& levelOrder) {
    if (root->left) printLevelOrder(root->left, level + 1, levelOrder);

    if (levelOrder.find(level) == levelOrder.end()) {
        levelOrder.insert(pair<int, vector<int>>(level, {root->value}));
    } else {
        levelOrder[level].push_back(root->value);
    }

    if (root->right) printLevelOrder(root->right, level + 1, levelOrder);
}

void print(map<int, vector<int>>& order) {
    for (auto x : order) {
        cout << x.first << " :: ";
        for (auto t : x.second) cout << t << " ";
        cout << endl;
    }

    cout << endl;
}

int main() {
    int arr[] = {1, 3, 5, 6, 7, 8, 10, 12, 34, 51, 12, 22, 1, 2, 32, 2, 21, 41, 41, 41, 54, 64};
    Node* root = insertLevelOrder(arr, NULL, 0, sizeof(arr) / sizeof(arr[0]));

    static map<int, vector<int>> preOrder;
    cout << "printPreOrder" << endl;
    printPreOrder(root, 0, preOrder);
    print(preOrder);

    static map<int, vector<int>> postOrder;
    cout << "printPostOrder" << endl;
    printPostOrder(root, 0, postOrder);
    print(postOrder);

    static map<int, vector<int>> levelOrder;
    cout << "printLevelOrder" << endl;
    printLevelOrder(root, 0, levelOrder);
    print(levelOrder);

    return 0;
}
