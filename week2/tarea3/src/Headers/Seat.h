#pragma once
#include <string>

class Seat {
  protected:
    int number;
    int price;
    bool reserved;
    std::string client;

  public:
    // Constructor
    Seat() {
      price = 0;
      reserved = false;
    };
    
    // Destructor
    ~Seat() {};

    // Function that sets client name
    void setName(std::string client);

    // Function that sets seat to reserved
    void setReserved();

    // Function that returns number
    int getNumber();

    // Function that returns price    
    int getPrice();

    // Function that returns if seat is reserved
    bool isReserved();

    // Function that returns client name
    std::string getClient();
};