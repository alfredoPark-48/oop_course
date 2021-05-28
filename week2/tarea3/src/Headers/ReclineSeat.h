#pragma once
#include "Seat.h"

class ReclineSeat:public Seat
{
  protected:
    bool reclinable;

  public:
    ReclineSeat() {
      number = 0;
      price = 0;
      reserved = false;
      reclinable = true;
    };

    ReclineSeat(int number, int price)
    {
      this->number = number;
      this->price = price;
      reserved = false;
      reclinable = true;
    }

    ~ReclineSeat() {};
};