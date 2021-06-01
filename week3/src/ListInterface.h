#pragma once
#include "LinkedList.h"
#include <iostream>

template <typename T>
class ListInterface
{
  public:
    LinkedList<T>* head;

    ListInterface();

    ListInterface(LinkedList<T>* list);

    // Add a node
    void add(T data);

    // Add by index
    void addByPosition(int index, LinkedList<T> *newNode);

    // Get by index
    void get(int index);

    // Remove by index
    void remove(int index);

    // Get size
    int size();

    // Print list
    void print();
};