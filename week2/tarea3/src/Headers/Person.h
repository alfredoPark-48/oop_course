#pragma once
#include <string>

class Person
{
  protected:
    std::string name;
    std::string phone;
  
  public:
    Person()
    {
      name = "";
      phone = "";
    }
    Person(std::string name, std::string phone) 
    {
      this->name = name;
      this->phone = phone;
    }
    ~Person() {};

    // Function that sets name
    void setName(std::string name);

    // Function that sets phone
    void setPhone(std::string phone);

    // Function that returns name
    std::string getName();

    // Function that returns phone
    std::string getPhone();
};