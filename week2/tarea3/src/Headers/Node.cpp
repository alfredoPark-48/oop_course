#include "Node.h"
#include <iostream>

int Node::getNumber()
{
  return number;
}

std::string Node::getType()
{
  return type;
}

void Node::print(Node* head)
{
  Node* temp = head;

  while (temp != nullptr)
  {
    if (temp->simpleSeat.isReserved())
    {
      std::cout << "Seat " << temp->getNumber() << " is reserved!" << std::endl; 
    }
    if (temp->reclineSeat.isReserved())
    {
      std::cout << "Seat " << temp->getNumber() << " is reserved!" << std::endl; 
    }
    if (temp->vipSeat.isReserved())
    {
      std::cout << "Seat " << temp->getNumber() << " is reserved!" << std::endl; 
    }

    temp = temp->next;
  }

  return;
}