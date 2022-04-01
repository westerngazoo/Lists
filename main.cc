#include "List.hpp"
#include <cassert>
#include <iostream>

int main(
    int argc, 
    char** argv)
{
  List<int> list;
  assert(list.head() == nullptr);
  assert(list.length() == 0);
  std::cout<<"Asserts passed"<<std::endl;

  return 0;
}
