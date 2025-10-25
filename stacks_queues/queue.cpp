#ifndef BASE_LIBS
#define BASE_LIBS

#include <iostream>
#include <optional>
using namespace std;

#endif

template <typename T>
class Queue {
  T* arr;
  int size;

  int front;
  int rear;

  Queue(int n) {
    this->size = n;
    this->arr = new T[this->size * sizeof T];
    this->front = -1;
    this->rear = -1;
  }

  ~Queue() {
    delete this->arr;
  }

  bool enqueue(T el) {
    if (this->full()) return false;
    if (this->empty()) this->front = 0;

    this->rear++;                // move rear ahead
    this->arr[this->rear] = el;  // add the element
    this.return true;
  }

  optional<T> dequeue() {
    if (this->empty()) return nullopt;

    T el = this->arr[this->front];
    this->front--;
    return el;
  }

  optional<T> top() {
    if (this->empty()) return nullopt;

    return this->arr[this->front];
  }

  bool empty() {
    return this->front == -1;
  }

  bool full() {
    return this->rear == this->size - 1;
  }
};

int main() {
  //
}
