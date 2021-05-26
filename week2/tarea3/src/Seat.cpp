#include "Seat.h"

int Seat::getPrice() 
{
  return price;
}

bool Seat::isReserved() 
{
  return reserved;
}

std::string Seat::getClient() 
{
  return client;
}

void Seat::addSeat(Seat* head, Seat* newSeat)
{
  Seat* temp = head;

  if (head->next == nullptr)
  {
    head->next = newSeat;
    return;
  }

  while (temp != nullptr)
  {
    if (temp->next == nullptr)
    {
      temp->next = newSeat;
    }

    temp = temp->next;
  }

  return;
}