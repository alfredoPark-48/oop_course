#include "Time.h"

int Time::getHour() 
{
  return hour;
}

int Time::getMinutes() 
{
  return minutes;
}

void Time::setHour(int hour) {
  this->hour = hour;
  return;
}

void Time::setMinutes(int minutes) {
  this->minutes = minutes;
  return;
}
