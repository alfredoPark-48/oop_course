#pragma once
#include "SimpleSeat.h"
#include "ReclineSeat.h"
#include "VipSeat.h"

class Node
{
  public:
    int number;
    SimpleSeat simpleSeat;
    ReclineSeat reclineSeat;
    VipSeat vipSeat;
    std::string type;
    Node* next;

    // Constructors    
    Node() {
      number = 0;
      type = "";
      next = nullptr;
    };

    // Constructor given a SimpleSeat object
    Node(int number, SimpleSeat simpleSeat)
    {
      this->number = number;
      type = "simple";
      this->simpleSeat = simpleSeat;
      next = nullptr;
    };

    Node(int number, ReclineSeat reclineSeat)
    {
      this->number = number;
      type = "recline";
      this->reclineSeat = reclineSeat;
      next = nullptr;
    };

    Node(int number, VipSeat vipSeat)
    {
      this->number = number;
      type = "vip";
      this->vipSeat = vipSeat;
      next = nullptr;
    };

    ~Node() {};

    // Function that returns number
    int getNumber();

    // Function that returns type
    std::string getType();

    // Function that prints data
    void print(Node* head);
};