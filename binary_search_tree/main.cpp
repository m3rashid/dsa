#include <bits/stdc++.h>
using namespace std;

class BinarySearchTree {
   private:
    struct Node {
        int data;
        Node* left;
        Node* right;
    };

    Node* root;

   public:
    BinarySearchTree(int data) {
        root->left = root->right = NULL;
        root->data = data;
    }

    Node* insert(int key, Node* p = root) {
        Node* t = NULL;
        if (p == NULL) {
            t = new Node;
            t->data = key;
            t->left = t->right = NULL;
            return t;
        }
        if (key < p->data)
            p->left = insert(key, p->left);
        else
            p->right = insert(key, p->right);
        return t;
    }

    void insertIter(int key, Node* t = root) {
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

    Node* search(int key, Node* t = root) {
        if (t == NULL) return NULL;
        if (key == t->data)
            return t;
        else if (key < t->data)
            return search(key, t->left);
        else
            return search(key, t->right);
    }

    Node* searchIter(int key, Node* t = root) {
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
};
