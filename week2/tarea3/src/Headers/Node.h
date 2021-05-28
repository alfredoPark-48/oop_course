#pragma once
#include "SimpleSeat.h"
#include "ReclineSeat.h"
#include "VipSeat.h"

class Node
{
  public:
    SimpleSeat simpleSeat;
    ReclineSeat reclineSeat;
    VipSeat vipSeat;
    Node* next;

    // Constructors    
    Node() {
      next = nullptr;
    };

    // Constructor given a SimpleSeat object
    Node(SimpleSeat simpleSeat)
    {
      this->simpleSeat = simpleSeat;
      next = nullptr;
    };

    Node(ReclineSeat reclineSeat)
    {
      this->reclineSeat = reclineSeat;
      next = nullptr;
    };

    Node(VipSeat vipSeat)
    {
      this->vipSeat = vipSeat;
      next = nullptr;
    };

    ~Node() {};

    // Function that prints data
    void print(Node* head);
};