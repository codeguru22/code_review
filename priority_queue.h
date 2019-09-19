#ifndef PRIORITY_QUEUE_H_
#define  PRIORITY_QUEUE_H_

#include <queue>

namespace project1 {

template <typename T> 
class PriorityQueue {
  public:
    PriorityQueue() = default;
    ~PriorityQueue() = dafault;
  
    bool Empty() const;
    int Size() const;

    const T& top() const;

    void push(const T&);
    void pop();	

  private:
    std::priority_queue<T> storage_;
};

} // namespace project1

#endif // PRIORITY_QUEUE_H_
