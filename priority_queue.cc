#include "priority_queue.h"

template <>
PriorityQueue<int>::PriorityQueue() {
}

template <>
PriorityQueue<int>::~PriorityQueue() {
}

template <>
bool PriorityQueue<int>::Empty() const {
  return storage_.Empty();
}

template <>
int PriorityQueue<int>::Size() {
  return storage_.Size();
}

template <>
const int& PriorityQueue<int>::Top() const {
  return storage_.Top();
}

template <>
void PriorityQueue<int>::Pop() {
  storage_.Pop();
}

template <>
void PriorityQueue<int>::Push(const int& val) {
  storage_.Push(val);
}
