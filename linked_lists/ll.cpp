#include <iostream>
#include <vector>
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

  void print() {
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

  /* removes all occurance of the given element */
  void remove(int n) {
    ListNode* ptr = this->getHead();
    ListNode* follow = NULL;

    while (ptr) {
      if (ptr->getData() == n) {
        ListNode* element = ptr;  // element to be deleted

        if (!follow) {  // case 1: it is the first element
          cout << "deleting the first elemnt" << endl;
          ptr = ptr->getThisNext();
          this->head = ptr;  // update global head
        } else {
          follow->setThisNext(ptr->getThisNext());
          ptr = ptr->getThisNext();
        }

        element->setThisNext(NULL);
        delete element;
      } else {
        follow = ptr;
        ptr = ptr->getThisNext();
      }
    }
  }

  void arrToLinkedList(int arr[], int n) {
    for (int i = 0; i < n; i++) this->addNodeAtTheEnd(arr[i]);
  }
};

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 5, 7, 8};

  LinkedList ll = LinkedList();
  for (const int& x : v) ll.addNodeAtTheEnd(x);

  ll.remove(1);
  ll.remove(5);
  ll.remove(4);
  ll.print();
}
