#ifndef LIST_HPP
#define LIST_HPP
#include "Node.hpp"
#include <iostream>

// Forward declare both templates:
template <typename T> class List;
template <typename T> std::ostream& operator<<( std::ostream&, const List<T>& );

template <typename T>
class List
{
    private:
        int length_;
        Node<T>* head_;
    public:
        List();
        ~List();
        const Node<T>* head() const;
        int length();
        bool empty();
        const Node<T>& push_back(T data);
        friend std::ostream& operator<< <T>(std::ostream &output, const List<T> &list);
};

// Can only access Test<T> for the same T as is instantiating, that is:
// if T is int, this template cannot access Test<double>, Test<char> ...
template <typename T>
std::ostream& operator<<(std::ostream &output, const List<T> &list)
{
  const Node<T>* head = list.head();
  std::string n = (head->next == nullptr) ? "nil" : std::to_string(head->next->data);
  output<<"["<<head->data<<"]"<<"->"<<n<<std::endl;

  return output;
}

template <typename T>
List<T>::List() : length_(0), head_(nullptr){
}

template <typename T>
const Node<T>& List<T>::push_back(T data){
    //Create Node
    Node<T>* to_insert = new Node<T>(data);

    if (empty())
    {
      head_ = to_insert;
    }

    length_+=1;
    return *to_insert;
}

template <typename T>
List<T>::~List(){
}

template <typename T>
const Node<T>* List<T>::head() const{
    return head_;
}

template <typename T>
bool List<T>::empty(){
    return length_ == 0 && head_ == nullptr;
}

template <typename T>
int List<T>::length(){
    return length_;
}
#endif //NODE HPP
