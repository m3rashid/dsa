#ifndef INCLUDES_H
#include <iostream>

#include "./ll.cpp"
#endif

using namespace std;

LinkedList mergeLists(ListNode* head1, ListNode* head2) {
  LinkedList ll = LinkedList();

  while (head1 && head2) {
    if (head1->getData() < head2->getData()) {
      ll.addNodeAtTheEnd(head1->getData());
      head1 = head1->getThisNext();
    } else {
      ll.addNodeAtTheEnd(head2->getData());
      head2 = head2->getThisNext();
    }
  }

  while (head1) {
    ll.addNodeAtTheEnd(head1->getData());
    head1 = head1->getThisNext();
  }

  while (head2) {
    ll.addNodeAtTheEnd(head2->getData());
    head2 = head2->getThisNext();
  }

  return ll;
}
int main() {
  int arr1[] = {1, 3, 5, 7, 9};
  int arr2[] = {2, 4, 6, 8, 10};

  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  LinkedList ll1 = LinkedList();
  LinkedList ll2 = LinkedList();

  ll1.arrToLinkedList(arr1, n1);
  ll2.arrToLinkedList(arr2, n2);

  LinkedList ll = mergeLists(ll1.getHead(), ll2.getHead());
  ll.print();

  return 0;
}
