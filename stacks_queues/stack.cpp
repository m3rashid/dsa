#ifndef BASE_LIBS
#define BASE_LIBS

#include <iostream>
#include <optional>
using namespace std;

#endif

template <typename T>
class Stack {
  T* arr;
  int size;
  int curr;

  Stack(int n) {
    this->size = n;
    this->arr = new T[this->size * sizeof T];
    this->curr = -1;
  }

  ~Stack() {
    delete this->arr;
  }

  bool push(T el) {
    if (this->full()) return false;

    this->curr++;
    this->arr[this->curr] = el;
    return true;
  }

  bool full() {
    return this->curr == this->size - 1;
  }

  bool empty() {
    return this->curr == -1;
  }

  optional<T> pop() {
    if (this->empty()) return nullopt;

    int el = this->arr[this->curr];
    this->curr--;
    return el;
  }

  optional<T> top() {
    if (this->empty()) return nullopt;
    return this->arr[this->curr];
  }
};

int main() {
  //
}
