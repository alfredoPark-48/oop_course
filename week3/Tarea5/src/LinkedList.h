#pragma once
#include <iostream>

template <typename T>
class LinkedList
{
  private:
  T data;

  public:
  LinkedList* next;
  LinkedList();
  LinkedList(T data);
  void setData(T data);
  T getData();
};