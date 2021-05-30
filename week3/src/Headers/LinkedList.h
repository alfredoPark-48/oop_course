#pragma once

template <typename T>
class LinkedList
{
  private:
    T data;
    LinkedList* head;
    LinkedList* next;
  public:
    // Default Constructor
    LinkedList();

    // Constructor w parameters
    LinkedList(T data, LinkedList* head);

    // Destructor
    ~LinkedList() {};

    // Function that returns data
    T getData();

    // Function that sets data
    void setData(T data);

    // Function that sets next
    void setNext(LinkedList* newElement);
};