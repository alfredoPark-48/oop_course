#include "ElementLine.h"

std::string ElementLine::getName()
{
  return name;
}

Time ElementLine::getStartTime()
{
  return start;
}

Time ElementLine::getEndTime()
{
  return end;
}

int ElementLine::getStartHour()
{
  return start.getHour();
}

int ElementLine::getStartMinutes()
{
  return start.getMinutes();
}

int ElementLine::getEndHour()
{
  return end.getHour();
}

int ElementLine::getEndMinutes()
{
  return end.getMinutes();
}

void ElementLine::setName(std::string name)
{
  this->name = name;
  return;
}

void ElementLine::setStartTime(Time start)
{
  this->start = start;
  return;
}

void ElementLine::setEndTime(Time end)
{
  this->end = end;
  return;
}