#pragma once
#include "Seat.h"

class VipSeat:public Seat
{
  protected:
    bool reclinable = true;
    bool givesMassage = true;
  
  public:
    VipSeat()
    {
      number = 0;
      price = 0;
      reserved = false;
    };

    VipSeat(int number, int price)
    {
      this->number = number;
      this->price = price;
      reserved = false;
    }

    ~VipSeat() {};
};