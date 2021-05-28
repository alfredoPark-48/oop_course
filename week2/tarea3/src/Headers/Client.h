#pragma once
#include "Person.h"

class Client: public Person
{
  private:
    int clientNum;
  
  public:
    Client() 
    {
      name = "";
      phone = "";
      clientNum = 0;
    }

    Client(std::string name, std::string phone)
    {
      this->name = name;
      this->phone = phone; 
      clientNum = 0;
    }

    // Funtion that sets client no.
    void setClientNumber(int clientNum);

    // Function that returns client no.
    int getClientNumber();
};