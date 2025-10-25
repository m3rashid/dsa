#ifndef INCLUDES_H
#include <iostream>

#include "./ll.cpp"
#endif

using namespace std;

bool isLoop(ListNode* head) {
  ListNode *p, *q;
  p = q = head;
  do {
    p = p->getThisNext();
    q = q->getThisNext();
    q = q != NULL ? q->getThisNext() : NULL;
    if (p == head) break;
  } while (p && q);
  return p == q ? true : false;
}

int main() {
  int arr[] = {2, 4, 6, 8, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  LinkedList ll = LinkedList();
  ll.arrToLinkedList(arr, n);

  ListNode* last = ll.getLast();
  last->setThisNext(ll.getHead());

  string loop = isLoop(ll.getHead()) ? "Loop" : "No Loop";
  cout << loop << endl;

  return 0;
}
