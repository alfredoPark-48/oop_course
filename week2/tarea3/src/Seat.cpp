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
