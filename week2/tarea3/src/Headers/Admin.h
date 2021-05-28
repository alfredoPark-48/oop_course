#pragma once
#include "Person.h"
#include "Date.h"
#include "Client.h"
#include "Node.h"

class Admin:public Person
{
  private:
    int adminNum;
    int monthlySalary;
    Date date;

  public:
    Admin() 
    {
      name = "";
      phone = "";
      adminNum = 0;
      monthlySalary = 0;
      date.setDay(0);
      date.setMonth(0);
      date.setYear(0);
    }

    Admin(std::string name, std::string phone, int monthlySalary, Date date)
    {
      this->name = name;
      this->phone = phone;
      adminNum = 0;
      this->monthlySalary = monthlySalary;
      this->date = date;
    }

    // Function that sets admin number
    void setAdminNumber(int adminNum);

    // Function that reserves a seat
    void reserveSeat(Node* head, Client client, int seatNum);

    // Function that returns admin number
    int getAdminNumber();
};