#include "Node.h"
#include <iostream>

void Node::print(Node* head)
{
  Node* temp = head;

  while (temp != nullptr)
  {
    std::cout << temp->simpleSeat.getPrice() << std::endl;
    std::cout << temp->reclineSeat.getPrice() << std::endl;
    std::cout << temp->vipSeat.getPrice() << std::endl;

    temp = temp->next;
  }

  return;
}