#include "LineStatistics.h"

std::string LineStatistics::getName()
{
  return name;
}

Time LineStatistics::getStartTime()
{
  return start;
}

Time LineStatistics::getEndTime()
{
  return end;
}

void LineStatistics::setName(std::string name)
{
  this->name = name;
  return;
}

void LineStatistics::setStartTime(Time start)
{
  this->start = start;
  return;
}

void LineStatistics::setEndTime(Time end)
{
  this->end = end;
  return;
}