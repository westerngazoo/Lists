#ifndef LIST_H
#define LIST_H
#include "Node.h"

template <class T>
class List
{
    private:
        int length_;
        Node<T>* head_;
    public:
        const Node<T>* head();
        int length();
        const Node<T>& push_back(T data);
        List();
        ~List();
};

#endif // LIST_H
