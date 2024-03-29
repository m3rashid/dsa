#include <bits/stdc++.h>
using namespace std;

class ListNode {
   private:
    int data;
    ListNode* next;
    ListNode* prev;

   public:
    ListNode(int d = 0) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
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

    ListNode* getThisPrev() {
        return this->prev;
    }

    void setThisNext(ListNode* n) {
        this->next = n;
    }

    void setThisPrev(ListNode* n) {
        this->prev = n;
    }
};

class LinkedList {
   private:
    ListNode* head;
    ListNode* previous;
    ListNode* current;

   public:
    LinkedList() {
        this->head = NULL;
        this->current = NULL;
        this->previous = NULL;
    };

    void addNodeAtTheEnd(int n = 0) {
        ListNode* node = new ListNode(n);
        this->previous = this->current;
        this->current = node;

        if (!(this->head)) {
            this->head = node;
        } else {
            this->previous->setThisNext(node);
            this->current->setThisPrev(this->previous);
        }
    }

    ListNode* getHead() {
        return this->head;
    }

    ListNode* getLast() {
        return this->current;
    }

    void printListFromFront() {
        ListNode* head = this->getHead();
        while (head) {
            cout << head->getData() << "  ";
            head = head->getThisNext();
        }
        cout << endl;
    }

    void printListFromBack() {
        ListNode* last = this->getLast();
        while (last) {
            cout << last->getData() << "  ";
            last = last->getThisPrev();
        }
        cout << endl;
    }
};

// int main() {
//     int arr[] = {5, 52, 33, 44, 15, 52, 312, 3123, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     LinkedList ll = LinkedList();
//     for (int i = 0; i < n; i++) ll.addNodeAtTheEnd(arr[i]);

//     ll.printListFromFront();
//     ll.printListFromBack();

//     return 0;
// }
