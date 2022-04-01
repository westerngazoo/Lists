#include "Node.h"

template <class T>
Node<T>::Node(T dat, Node<T>* ptr) : data(dat), next(std::unique_ptr<Node<T>>(std::move(ptr))){} 
