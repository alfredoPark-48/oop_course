#include "Headers/SimpleSeat.h"
#include "Headers/ReclineSeat.h"
#include "Headers/VipSeat.h"
#include "Headers/Admin.h"
#include "Headers/Client.h"
#include "Headers/Date.h"
#include "Headers/Node.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
  // Initializing random number generator
  srand(time(0));

  // Initializing dates
  Date roseDate(12,1,2020);
  Date maryDate(14, 12, 2019);

  // Admin instances
  Admin rose("Rose", "815-593-3845", 4000, roseDate);
  Admin mary("Mary", "480-984-7395", 4500, maryDate);

  // Client instances
  Client peter("Peter", "240-473-3556");
  Client mark("Mark", "618-202-2331");
  Client danny("Danny", "951-800-8314");

  // Setting client numbers
  peter.setClientNumber(rand() % 9999);
  mark.setClientNumber(rand() % 9999);
  danny.setClientNumber(rand() % 9999);

  // Setting admin numbers
  rose.setAdminNumber(rand() % 9999);
  mary.setAdminNumber(rand() % 9999);

  int simplePrice = 40;
  int reclinePrice = 90;
  int vipPrice = 180;

  // Initializing simple seats
  SimpleSeat s1(1, simplePrice);
  SimpleSeat s2(2, simplePrice);
  SimpleSeat s3(3, simplePrice);
  SimpleSeat s4(4, simplePrice);

  // Initializing reclinable seats
  ReclineSeat r5(5, reclinePrice);
  ReclineSeat r6(6, reclinePrice);
  ReclineSeat r7(7, reclinePrice);
  ReclineSeat r8(8, reclinePrice);

  // Initializing vip seats
  VipSeat v9(9, vipPrice);
  VipSeat v10(10, vipPrice);
  VipSeat v11(11, vipPrice);
  VipSeat v12(12, vipPrice);

  // Adding data to node list
  Node n1(s1);
  Node n2(s2);
  Node n3(s3);
  Node n4(s4);
  Node n5(r5);
  Node n6(r6);
  Node n7(r7);
  Node n8(r8);
  Node n9(v9);
  Node n10(v10);
  Node n11(v11);
  Node n12(v12);
  
  // Linking
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;
  n5.next = &n6;
  n6.next = &n7;
  n7.next = &n8;
  n8.next = &n9;
  n9.next = &n10;
  n10.next = &n11;
  n11.next = &n12;

  n1.print(&n1);


  return 0;
}