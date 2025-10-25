#ifndef BASE_LIBS
#define BASE_LIBS

#include <iostream>
#include <optional>
using namespace std;

#endif

template <typename T>
class CircularQueue {
  T* arr;
  int size;
  int front;
  int rear;

  CircularQueue(int n) {
    this->size = n;
    this->arr = new T[this->size * sizeof T];
    this->front = -1;
    this->rear = -1;
  }

  ~CircularQueue() {
    delete this->arr;
  }

  bool enqueue(T el) {
  }

  optional<T> deque() {}

  optional<T> top() {}

  bool empty() {}

  bool full() {}
};
