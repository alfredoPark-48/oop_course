#include "Person.h"

void Person::setName(std::string name)
{
  this->name = name;
  return;
}

void Person::setPhone(std::string phone)
{
  this->phone = phone;
  return;
}

std::string Person::getName()
{
  return name;
}

std::string Person::getPhone()
{
  return phone;
}