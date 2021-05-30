#include "LinkedList.h"
#include <iostream>

template <typename T>
LinkedList<T>::LinkedList()
{
  head = nullptr;
  next = nullptr;
};

template <typename T>
LinkedList<T>::LinkedList(T data, LinkedList* head)
{
  if (this->head->next == nullptr)
  {
    this->data = data;
    this->head = head;
    head->next = nullptr;
  }
  else
  {
    std::cout << "Head is already set!" << std::endl; 
  }
};

template <typename T>
T LinkedList<T>::getData()
{
  return data;
}

template <typename T>
void LinkedList<T>::setNext(LinkedList* newElement)
{
  LinkedList* temp = head;

  // If there is no head
  if (temp->next == nullptr)
  {
    head = newElement;
    return;
  }

  // If there is a head
  while (temp != nullptr)
  {
    if (temp->next = nullptr)
    {
      temp->next = newElement;
      return;
    }

    temp = temp->next;
  }
}