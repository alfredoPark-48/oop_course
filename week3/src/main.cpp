#include "LinkedList.h"
#include "ListInterface.h"
#include "LinkedList.cpp"
#include "ListInterface.cpp"
#include <iostream>
using namespace std;

int main()
{
  ListInterface<int> list = new LinkedList<int>;

  list.add(1);
  list.add(2);
  list.add(3);
  list.add(4);
  list.add(5);
  list.print();

  return 0;
}
