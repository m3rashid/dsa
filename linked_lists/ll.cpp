#include <bits/stdc++.h>
using namespace std;

class ListNode {
   private:
    int data;
    ListNode* next;

   public:
    ListNode(int d = 0) {
        this->data = d;
        this->next = NULL;
    }

    ListNode* getNode() {
        return this;
    }

    int getData() {
        return this->data;
    }

    ListNode* getThisNext() {
        return this->next;
    }

    void setThisNext(ListNode* n) {
        this->next = n;
    }
};

class LinkedList {
   private:
    ListNode* head;
    ListNode* previous;

   public:
    LinkedList() {
        this->head = NULL;
        this->previous = NULL;
    };

    void addNodeAtTheEnd(int n = 0) {
        ListNode* node = new ListNode(n);

        if (!(this->head)) {
            this->head = node;
        } else {
            this->previous->setThisNext(node);
        }

        this->previous = node;
    }

    ListNode* getHead() {
        return this->head;
    }

    ListNode* getLast() {
        return this->previous;
    }

    void printList() {
        ListNode* head = this->getHead();
        while (head) {
            cout << head->getData() << "  ";
            head = head->getThisNext();
        }
        cout << endl;
    }

    void reverse() {
        ListNode* justBack = NULL;
        ListNode* justBackBack = NULL;

        while (this->head) {
            justBackBack = justBack;
            justBack = this->head;
            this->head = this->head->getThisNext();
            justBack->setThisNext(justBackBack);
        }
        this->head = justBack;
    }

    void arrToLinkedList(int arr[], int n) {
        for (int i = 0; i < n; i++) this->addNodeAtTheEnd(arr[i]);
    }
};

// int main() {
//     int arr[] = {5, 52, 33, 44, 15, 52, 312, 3123, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     LinkedList ll = LinkedList();
//     ll.arrToLinkedList(arr, n);
//     ll.printList();

//     ll.reverse();
//     ll.printList();

//     return 0;
// }
