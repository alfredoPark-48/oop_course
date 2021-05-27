#include "ReclineSeat.h"

class VipSeat:public ReclineSeat
{
  protected:
    bool givesMassage;
  
  public:
    VipSeat()
    {
      givesMassage = true;
      reclinable = true;
    };

    ~VipSeat() {};
};