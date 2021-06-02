#include "ListInterface.h"

template<typename T>
ListInterface<T>::ListInterface()
{
  head = nullptr;
}

template <typename T>
ListInterface<T>::ListInterface(LinkedList<T>* list)
{
  head = nullptr;
}

template <typename T>
void ListInterface<T>::add(T data)
{
  LinkedList<T> *newNode = new LinkedList<T>;
  newNode->setData(data);

  // Condition that checks if head is empty
  // If empty make newNode the head
  if (head == nullptr)
  {
    head = newNode;
    head->next = nullptr;
    return;
  }
  else
  {
    // If head exists, iterate through list
    LinkedList<T>* temp = head;
    while (temp != nullptr)
    {
      if (temp->next == nullptr)
      {
        temp->next = newNode;
        return;
      }

      temp = temp->next;
    }
  }

}

template <typename T>
void ListInterface<T>::addByIndex(int index, T data)
{
  int size = getSize(head);
  
  if (index > size - 1)
  {
    std::cout << index <<" index is too large! List size is " << size << std::endl;
    return;
  } else if (index < 0) {
    std::cout << "Index cannot be less than 0!" << std::endl;
    return;
  } else {
    LinkedList<T>* newNode = new LinkedList<T>;
    newNode->setData(data);

    LinkedList<T>* temp = head;

    // If index == 0 make newNode the head
    if (index == 0)
    {
      newNode->next = head;
      head = newNode;
      return;
    }

    // Iterate through list until count == index
    int count = 1;
    while (temp != nullptr)
    {
      if (count == index)
      {
       newNode->next = temp->next;
       temp->next = newNode;
      }
      count++;
      temp = temp->next;
    }
    return;
  }
}

template <typename T>
void ListInterface<T>::get(int index)
{
  int size = getSize(head);

  if (index > size - 1)
  {
    std::cout << index <<" index is too large! List size is " << size << std::endl;
    return;
  } else if (index < 0)
  {
    std::cout << "Index cannot be less than 0!" << std::endl;
    return;
  } else {
    LinkedList<T>* temp = head;
    int count = 0;
    while (temp != nullptr)
    {
      if (count == index)
      {
        std::cout << temp->getData() << std::endl;
        return;
      }

      count++;
      temp = temp->next;
    }
  }

  return;
}

template<typename T>
int ListInterface<T>::size()
{
  return getSize(head);
}

template <typename T>
int getSize(LinkedList<T>* list)
{
  int size = 0;
  LinkedList<T>* head = list;

  // If list is empty return 0
  if (head == nullptr) return size;

  // Iterate through list and add to count
  while (head != nullptr)
  {
    size++;
    head = head->next;
  }

  return size;
}

template <typename T>
void ListInterface<T>::print()
{
  LinkedList<T>* temp = head;

  while (temp != nullptr)
  {
    std::cout << temp->getData() << " -> ";

    temp = temp->next;
  }

  return;
}
