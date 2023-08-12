#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int height(Node* node) {
    if (!node) return 0;
    int x = height(node->left);
    int y = height(node->right);
    return x > y ? x + 1 : y + 1;
}

Node* inOrderPre(Node* p) {
    while (p && p->right) p = p->right;
    return p;
}

Node* inOrderSuc(Node* p) {
    while (p && p->left) p = p->left;
    return p;
}

Node* insert(int key, Node* p) {
    Node* t = NULL;
    if (p == NULL) {
        t = new Node;
        t->data = key;
        t->left = t->right = NULL;
        cout << "Inserted " << key << endl;
        return t;
    }
    if (key < p->data) {
        p->left = insert(key, p->left);
    } else {
        p->right = insert(key, p->right);
    }
    return t;
}

void insertIter(int key, Node* t) {
    Node* r = NULL;
    while (t != NULL) {
        r = t;
        if (key == t->data)
            return;
        else if (key < t->data)
            t = t->left;
        else
            t = t->right;
    }
    Node* p = NULL;
    p = new Node;
    p->left = p->right = NULL;
    p->data = key;
    if (p->data < r->data)
        r->left = p;
    else
        r->right = p;
}

Node* search(int key, Node* t) {
    if (t == NULL) return NULL;
    if (key == t->data)
        return t;
    else if (key < t->data)
        return search(key, t->left);
    else
        return search(key, t->right);
}

Node* searchIter(int key, Node* t) {
    while (t != NULL) {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->left;
        else
            t = t->right;
    }
    return NULL;
}

Node* deleteNode(int key, Node* p) {
    Node* q;
    if (!p) return NULL;
    if (!p->left && !p->right) {
        free(p);
        return NULL;
    }

    if (key < p->data) {
        p->left = deleteNode(key, p->left);
    } else if (key > p->data) {
        p->right = deleteNode(key, p->right);
    } else {
        if (height(p->left) > height(p->right)) {
            q = inOrderPre(p->left);
            p->data = q->data;
            p->left = deleteNode(q->data, p->left);
        } else {
            q = inOrderSuc(p->right);
            p->data = q->data;
            p->right = deleteNode(q->data, p->right);
        }
    }
    return p;
}

void printTree(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    Node* root = new Node{data : 5, left : NULL, right : NULL};

    int arr[] = {1, 3, 4, 65, 23, 2, 21};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        insert(arr[i], root);
    }

    printTree(root);
    cout << endl;

    int arr2[] = {33, 21, 4};
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        Node* found = search(arr2[i], root);
        if (found) {
            cout << "Found: " << found->data << endl;
        } else {
            cout << arr2[i] << " not found" << endl;
        }
    }
}
