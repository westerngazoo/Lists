#ifndef NODE_HPP
#define NODE_HPP

#include <memory>

template <class T>
class Node
{
  public:
      T data; 
      std::unique_ptr< Node<T> > next; 
      Node(T dat, Node<T>* ptr);
      Node(T dat);
};

template <class T>
Node<T>::Node(T dat, Node<T>* ptr) : data(dat), next(std::unique_ptr< Node<T> >(std::move(ptr)))
{
}

template <class T>
Node<T>::Node(T dat) : data(dat), next(nullptr)
{
} 
#endif //NODE HPP
