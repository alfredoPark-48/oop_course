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

int LineStatistics::getStartHour()
{
  return start.getHour();
}

int LineStatistics::getStartMinutes()
{
  return start.getMinutes();
}

int LineStatistics::getEndHour()
{
  return end.getHour();
}

int LineStatistics::getEndMinutes()
{
  return end.getMinutes();
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