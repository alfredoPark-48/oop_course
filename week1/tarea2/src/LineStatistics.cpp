#include "LineStatistics.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <math.h>
#include <iomanip>

// Function to check minimum time (minutes) between sessions
int minimumWait(LineStatistics* head) 
{
  LineStatistics* temp = head;
  std::vector<std::pair<int,int>> v;

  // Checking if current node is not empty
  while (temp != nullptr) 
  {
    std::pair<int, int> time;
    time.first = temp->data.getStartHour();
    time.second = temp->data.getStartMinutes();
    v.push_back(time);

    temp=temp->next;
  }
  delete temp;
  
  // Adding 3600 as a large number in order to check minimum
  int difference = 3600;
  for (int i=0; i<v.size()-1; i++)
  {
    int hour = v.at(i).first;
    int time = v.at(i+1).second - v.at(i).second; 

    // Loop that checks if current hour is same as next hour
    for (int i=0; i<v.size()-1; i++)
    {
      int hour = v.at(i).first;
      int time = v.at(i+1).second - v.at(i).second; 

      if (hour != v.at(i+1).first) 
      {
        int minute = 60 - v.at(i).second;
        int remainder = v.at(i+1).second;
        time = minute + remainder;
      }

      if (difference > time)
      {
        difference = time;
      }
    }
  }

  return difference;
}

// Function to check maximum time (minutes) between sessions
int maximumWait(LineStatistics* head)
{
  LineStatistics* temp = head;
  std::vector<std::pair<int,int>> v;

  // Checking if current node is not empty
  while (temp != nullptr) 
  {
    std::pair<int, int> time;
    time.first = temp->data.getStartHour();
    time.second = temp->data.getStartMinutes();
    v.push_back(time);

    temp=temp->next;
  }
  delete temp;

  int difference = 0;
  for (int i=0; i<v.size()-1; i++)
  {
    int hour = v.at(i).first;
    int time = v.at(i+1).second - v.at(i).second; 

    if (hour != v.at(i+1).first) 
    {
      int minute = 60 - v.at(i).second;
      int remainder = v.at(i+1).second;
      time = minute + remainder;
    }

    if (difference < time)
    {
      difference = time;
    }
  }

  return difference;
}

// Function that returns average entrance time
void average(LineStatistics* head)
{
  LineStatistics* temp = head;
  int total = 0;
  int count = 0;
  while (temp != nullptr)
  {
    total += (temp->data.getStartHour() * 60) + temp->data.getStartMinutes();
    count++;

    temp = temp->next;
  }

  double intpart; 
  float result = (total/count)/60;
  double fraction = modf(result, &intpart);

  std::cout << result << ":" << std::setfill('0') << std::setw(2) << fraction << std::endl;

  return;
}

// Function that returns minimum start and exit time
int minimumAttention(LineStatistics* head)
{
  LineStatistics* temp = head;
  int minimumTime = 3600;

  while (temp != nullptr)
  {
    int startMinutes = temp->data.getStartMinutes() > 0 ? 60 - temp->data.getStartMinutes() : 0;
    int startHour = temp->data.getStartMinutes() > 0 ? (temp->data.getStartHour() + 1) * 60 : (temp->data.getStartHour()) * 60;
    int minutes = startMinutes + temp->data.getEndMinutes();
    int hours = startHour - temp->data.getEndHour();
    int time = minutes + hours;

    if (minimumTime > time)
    {
      minimumTime = time;
    }
    temp = temp->next;
  }
  return minimumTime;
}

// Function that returns maximum start and exit time
int maximumAttention(LineStatistics* head)
{
  LineStatistics* temp = head;
  int total = 0;

  while (temp != nullptr)
  {
    int minutes = (60 - temp->data.getStartMinutes()) + temp->data.getEndMinutes();
    int starthour = temp->data.getStartMinutes() > 0 ? ((temp->data.getStartHour() + 1) * 60) : ((temp->data.getStartHour()) * 60);
    int endHour = temp->data.getEndHour() * 60;
    int hour = endHour - starthour;
    int time = hour + minutes;

    if (total < time)
    {
      total = time;
    }
    
    temp = temp->next;
  }
  return total;
}

// Function that returns average session
void averageAttention(LineStatistics* head)
{
  LineStatistics* temp = head;
  int total = 0;
  int count = 0;

  while (temp != nullptr)
  {
    int starthour = temp->data.getStartMinutes() > 0 ? ((temp->data.getStartHour() + 1) * 60) : ((temp->data.getStartHour()) * 60);
    int endHour = temp->data.getEndHour() * 60;
    int hour = endHour - starthour;
    total += (60 - temp->data.getStartMinutes()) + temp->data.getEndMinutes() + hour;
    count++;
    temp = temp->next;
  }

  double intpart; 
  float result = (total/count)/60;
  double fraction = modf(result, &intpart);

  std::cout << result << ":" << std::setfill('0') << std::setw(2) << fraction << std::endl;

  return;
}