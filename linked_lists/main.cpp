#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  string num1 = "", num2 = "";
  while (l1) {
    num1 += to_string(l1->val);
    l1 = l1->next;
  }

  while (l2) {
    num2 += to_string(l2->val);
    l2 = l2->next;
  }

  string num = to_string(stoi(num1) + stoi(num2));

  ListNode* head;
  ListNode* prev = head;

  for (int i = 0; i < num.length(); i++) {
    ListNode* ll = new ListNode;
    if (i == 0) head->next = ll;

    prev->next = ll;
    prev = prev->next;
    ll->val = num[i] - '0';
  }

  prev->next = NULL;

  return head;
}

int main() {
  int arr1_len, arr2_len;
  cout << "Lengths: ";
  cin >> arr1_len >> arr2_len;

  ListNode *head1, *head2;
  ListNode *prev1 = head1, *prev2 = head2;

  int i = arr1_len - 1;
  while (i >= 0) {
    ListNode* ll = new ListNode;
    if (i == arr1_len - 1) {
      head1->next = ll;
    }
    cin >> ll->val;
    prev1->next = ll;
    prev1 = prev1->next;
    i--;
  }

  i = arr2_len - 1;
  while (i >= 0) {
    ListNode* ll = new ListNode;
    if (i == arr2_len - 1) {
      head2->next = ll;
    }
    cin >> ll->val;
    prev2->next = ll;
    prev2 = prev2->next;
    i--;
  }

  cout << endl;

  while (head1) {
    cout << head1->val << " ";
    head1 = head1->next;
  }

  cout << endl;

  while (head2) {
    cout << head2->val << " ";
    head2 = head2->next;
  }

  ListNode* res = addTwoNumbers(head1, head2);
  while (res) {
    cout << res->val << " ";
    res = res->next;
  }

  return 0;
}
