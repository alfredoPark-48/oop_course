#include "Admin.h"

void Admin::setAdminNumber(int adminNum)
{
  this->adminNum = adminNum;
  return;
}

void Admin::reserveSeat(Node* head, Client client, int seatNum)
{
  Node* temp = head;

  while (temp != nullptr)
  {
    // Condition that checks if current seat == seatNum
    if (temp->getNumber() == seatNum)
    {
      // If current seat is == simple   
      if (temp->getType() == "simple")
      {
        temp->simpleSeat.setName(client.getName());
        temp->simpleSeat.setReserved();

        return;
      }
      
      // If current seat is == reclinable
      if (temp->getType() == "recline")
      {
        temp->reclineSeat.setName(client.getName());
        temp->reclineSeat.setReserved();

        return;
      }

      // If current seat is == vip
      if (temp->type == "vip")
      {
        temp->vipSeat.setName(client.getName());
        temp->vipSeat.setReserved();

        return;
      }
    }

    temp = temp->next;
  }

  return;
};

int Admin::getAdminNumber()
{
  return adminNum;
};