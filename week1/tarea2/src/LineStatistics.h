#pragma once
#include "Time.h"
#include <string>

class LineStatistics {
  private:
    std::string name;
    Time start;
    Time end;
  public:
    // Constructors
    LineStatistics()
    {
      name="";
      start.setHour(0);
      start.setMinutes(0);
      end.setHour(0);
      end.setMinutes(0);
    }

    LineStatistics(std::string name, Time start, Time end) 
    {
      this->name = name;
      this->start = start;
      this->end = end;
    }

    ~LineStatistics();
};