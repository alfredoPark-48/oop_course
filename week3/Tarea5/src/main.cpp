#include "LinkedList.h"
#include "ListInterface.h"
#include "LinkedList.cpp"
#include "ListInterface.cpp"
#include <iostream>
using namespace std;

int main()
{
  ListInterface<int> list = new LinkedList<int>;

  // Adding to list
  list.add(1);
  list.add(2);
  list.add(3);
  list.add(4);
  list.add(5);
  list.add(6);

  // Adding by index
  list.addByIndex(3, 2);

  // Getting by index
  list.get(6);

  // Removing by index
  list.remove(1);

  // Get size
  cout << list.size() << endl;

  // Printing list
  list.print();

  return 0;
}
