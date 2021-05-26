#pragma once
#include <string>

class Seat {
  protected:
    int price;
    bool reserved;
    std::string client;
    Seat* next;

  public:
    Seat() {
      price = 0;
      reserved = false;
      next = nullptr;
    };
    
    ~Seat() {};

    // Function that returns price    
    int getPrice();

    // Function that returns if seat is reserved
    bool isReserved();

    // Function that returns client name
    std::string getClient();

    // Function to add a seat
    void addSeat(Seat* head, Seat* next);
};