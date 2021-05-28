#pragma once
#include "Seat.h"

class SimpleSeat : public Seat
{
  public:
    SimpleSeat()
    {
      number = 0;
      price = 0;
      reserved = false;
    };

    SimpleSeat(int number, int price)
    {
      this->number = number;
      this->price = price;
      reserved = false;
    };

    ~SimpleSeat(){};
};