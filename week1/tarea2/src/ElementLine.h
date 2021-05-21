#pragma once
#include "LineStatistics.h"

class ElementLine {
  public:
    LineStatistics data;
    ElementLine* next;
};