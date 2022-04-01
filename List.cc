#include "List.h"
#include <memory>
template <class T>
List<T>::List() : length_(0), head_(nullptr){
}

template <class T>
const Node<T>& List<T>::push_back(T data){
    if(head() == nullptr){
        head_ = std::make_unique<Node<T>>();
    }
    return true;
}

template <class T>
List<T>::~List(){
}

template <class T>
const Node<T>* List<T>::head(){
    return head_;
}

template <class T>
int List<T>::length(){
    return length_;
}
