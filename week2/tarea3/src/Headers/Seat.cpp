#include "Seat.h"

void Seat::setName(std::string client)
{
  this->client = client;
  return;
}

void Seat::setReserved()
{
  reserved = reserved == false ? true : false;
  return;
}

int Seat::getNumber()
{
  return number;
}

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
