#ifndef NODE_H
#define NODE_H
#include <memory>

template <class T>
class Node
{
  public:
      T data; 
      std::unique_ptr<Node<T>> next; 
      Node(T dat, Node<T>* ptr);
};

#endif // NODE_H
