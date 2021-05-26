#pragma once
#include <string>

class Seat {
  protected:
    int price;
    bool reserved;
    Seat* next;

  public:
    Seat() {
      price = 0;
      reserved = false;
      next = nullptr;
    };
    
    ~Seat() {};

    // Function to add a seat
    void addSeat(Seat* head, Seat* next);

     
};