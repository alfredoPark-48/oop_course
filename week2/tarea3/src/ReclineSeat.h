#pragma once
#include "Seat.h"

class ReclineSeat:public Seat 
{
  protected:
    bool reclinable;

  public:
    ReclineSeat() {
      reclinable = true;
    };

    ~ReclineSeat() {};
};