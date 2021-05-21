#pragma once
#include "Time.h"
#include <string>

class ElementLine {
  private:
    std::string name;
    Time start;
    Time end;
  public:
    // Constructors
    ElementLine()
    {
      name="";
      start.setHour(0);
      start.setMinutes(0);
      end.setHour(0);
      end.setMinutes(0);
    }

    ElementLine(std::string name, Time start, Time end) 
    {
      this->name = name;
      this->start = start;
      this->end = end;
    }

    ~ElementLine(){};

    // Getters
    std::string getName();
    Time getStartTime();
    Time getEndTime();
    int getStartHour();
    int getStartMinutes();
    int getEndHour();
    int getEndMinutes();

    // Setters
    void setName(std::string name);
    void setStartTime(Time start);
    void setEndTime(Time end);
};