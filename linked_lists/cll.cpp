#ifndef BASIC_H
#include <bits/stdc++.h>

#include "./ll.cpp"
#endif

using namespace std;

int main() {
    int arr[] = {1, 3, 45, 323, 65, 67, 87};
    int n = sizeof(arr) / sizeof(arr[0]);

    LinkedList ll = LinkedList();
    ll.arrToLinkedList(arr, n);

    ListNode* last = ll.getLast();
    last->setThisNext(ll.getHead());

    ll.printList();

    return 0;
}
