#include "List.hpp"
#include <cassert>
#include <iostream>
#include "List.hpp"

int main(
    int argc, 
    char** argv)
{
  List<int> list;
  assert(list.head() == nullptr);
  assert(list.length() == 0);
  list.push_back(3);
  assert(list.head() != nullptr);
  assert(list.length() > 0);
  std::cout<<"Asserts passed"<<std::endl;
  std::cout<<"List:"<<list<<std::endl;

  return 0;
}
