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

