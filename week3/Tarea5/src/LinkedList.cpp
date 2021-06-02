#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList()
{
  next = nullptr;
}

template <typename T>
LinkedList<T>::LinkedList(T data)
{
  this->data = data;
  next = nullptr;
}

template <typename T>
void LinkedList<T>::setData(T data)
{
  this->data = data;
  return;
}

template <typename T>
T LinkedList<T>::getData()
{
  return data;
}
